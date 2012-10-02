#pragma once

#include "dbgengine.h"
#include "dbgexcept.h"
#include "pyaux.h"
#include "eventhandler.h"

#include <dbgeng.h>
#include <dbghelp.h>

namespace pykd {

///////////////////////////////////////////////////////////////////////////////////

class DebugEngine : private DebugBaseEventCallbacks 
{
public:

    struct DbgEngBind {

        CComQIPtr<IDebugClient4>  client;
        CComQIPtr<IDebugControl4>  control;
        CComQIPtr<IDebugSystemObjects2>  system;
        CComQIPtr<IDebugSymbols3>  symbols;
        CComQIPtr<IDebugDataSpaces4>  dataspace;
        CComQIPtr<IDebugAdvanced2>  advanced;
        CComQIPtr<IDebugRegisters2>  registers;

        DbgEngBind( PDEBUG_CLIENT4 client_, PDEBUG_EVENT_CALLBACKS callback )
        {
            client = client_;
            control = client_;
            system = client_;
            symbols = client_;
            dataspace = client_;
            advanced = client_;
            registers = client_;

            client->SetEventCallbacks( callback );
        }

        PyThreadStateSaver     pystate;
    };

    // IUnknown impls
    STDMETHOD_(ULONG, AddRef)() { return 1; }
    STDMETHOD_(ULONG, Release)() { return 1; }

    // IDebugEventCallbacks impls
    STDMETHOD(GetInterestMask)(
        __out PULONG Mask 
        )
    {
        *Mask = DEBUG_EVENT_BREAKPOINT;
        return S_OK;
    }

    STDMETHOD(Breakpoint)(
        __in IDebugBreakpoint *bp
    );

    DbgEngBind*
    operator->() 
    {
        if ( m_bind.get() != NULL )
            return m_bind.get();

        CComPtr<IDebugClient4>   client = NULL;

        HRESULT  hres = DebugCreate( __uuidof(IDebugClient4), (void **)&client );
        if ( FAILED( hres ) )
            throw DbgException("DebugCreate failed");

        m_bind.reset(new DbgEngBind(client, this) );

        return m_bind.get();
    }

    void registerCallbacks( const DEBUG_EVENT_CALLBACK *callbacks );
    void removeCallbacks( const DEBUG_EVENT_CALLBACK *callbacks );

private:

    std::auto_ptr<DbgEngBind>    m_bind;

    struct DebugEventContext 
    {
        DEBUG_EVENT_CALLBACK*       callback;
        PyThreadStateSaver          pystate;

        DebugEventContext( const DEBUG_EVENT_CALLBACK* callback_, PyThreadStateSaver &pystate_ ) :
            callback( const_cast<DEBUG_EVENT_CALLBACK*>(callback_) ),
            pystate(pystate_)
            {}
    };

    typedef std::list<DebugEventContext>  HandlerList;

    boost::recursive_mutex       m_handlerLock;
    HandlerList  m_handlers;
};

///////////////////////////////////////////////////////////////////////////////////

extern  DebugEngine  g_dbgEng;

/////////////////////////////////////////////////////////////////////////////////

};