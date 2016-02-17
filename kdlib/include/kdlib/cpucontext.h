#pragma once

#include <boost/shared_ptr.hpp>
#include <boost/noncopyable.hpp>

#include "kdlib/dbgtypedef.h"
#include "kdlib/variant.h"

namespace kdlib {

///////////////////////////////////////////////////////////////////////////////

class CPUContext;
typedef boost::shared_ptr<CPUContext>  CPUContextPtr;

class  CPUContext : private boost::noncopyable {

public:

    static CPUContextPtr loadCPUCurrentContext();

public:

    virtual CPUType getCPUType() = 0;
    virtual CPUType getCPUMode() = 0;

    virtual NumVariant getRegisterByName( const std::wstring &name) = 0;
    virtual NumVariant getRegisterByIndex( unsigned long index ) = 0;
    virtual std::wstring getRegisterName( unsigned long index ) = 0;
    virtual unsigned long getRegisterNumber() = 0;

    virtual MEMOFFSET_64 getIP() = 0;
    virtual MEMOFFSET_64 getSP() = 0;
    virtual MEMOFFSET_64 getFP() = 0;

    virtual unsigned long long loadMSR( unsigned long msrIndex ) = 0;
    virtual void setMSR( unsigned long msrIndex, unsigned long long value ) = 0;
};

inline CPUContextPtr loadCPUContext() {
    return CPUContext::loadCPUCurrentContext();
}

///////////////////////////////////////////////////////////////////////////////

NumVariant getRegisterByName(const std::wstring& regName);
NumVariant getRegisterByIndex(unsigned long regIndex);

///////////////////////////////////////////////////////////////////////////////


} // kdlib namespace end
