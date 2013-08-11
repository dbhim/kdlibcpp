#pragma once

#include <string>

#include "kdlib/dbgtypedef.h"

namespace kdlib {

//////////////////////////////////////////////////////////////////////////////

struct DebugEventsCallback {

    virtual DebugCallbackResult onBreakpoint( BREAKPOINT_ID bpId ) = 0;
    virtual DebugCallbackResult onException( const ExceptionInfo &exceptionInfo ) = 0;
    virtual void onExecutionStatusChange( ExecutionStatus executionStatus ) = 0;

   // virtual DEBUG_CALLBACK_RESULT OnBreakpoint( BREAKPOINT_ID bpId ) = 0;
   // virtual DEBUG_CALLBACK_RESULT OnModuleLoad( MEMOFFSET_64 offset, const std::wstring &name ) = 0;
   // virtual DEBUG_CALLBACK_RESULT OnModuleUnload( MEMOFFSET_64 offset, const std::wstring &name ) = 0;
   //// virtual DEBUG_CALLBACK_RESULT OnException( ExceptionInfoPtr exceptInfo ) = 0;
   // virtual void onExecutionStatusChange( EXECUTION_STATUS executionStatus ) = 0;
   // virtual void onSymbolsLoaded(MEMOFFSET_64 modBase) = 0;
   // virtual void onSymbolsUnloaded(MEMOFFSET_64 modBase OPTIONAL) = 0;
};

void registerEventsCallback( DebugEventsCallback *callback );
void removeEventsCallback( DebugEventsCallback *callback );

//////////////////////////////////////////////////////////////////////////////

} //kdlib namespace end
