#pragma once

#include <boost/noncopyable.hpp>
#include <boost/enable_shared_from_this.hpp>

#include "kdlib/dataaccessor.h"
#include "kdlib/memaccess.h"
#include "kdlib/exceptions.h"
#include "kdlib/cpucontext.h"

namespace kdlib {

///////////////////////////////////////////////////////////////////////////////

class EmptyAccessor : public DataAccessor
{
private:

    size_t getLength() const override
    {
        throw DbgException("data accessor no data");
    }

    unsigned char readByte(size_t pos = 0) const override
    {
        throw DbgException("data accessor no data");
    }

    void writeByte(unsigned char value, size_t pos=0) override
    {
        throw DbgException("data accessor no data");
    }

    //virtual void writeByte(size_t pos=0) 
    //{
    //    throw DbgException("data accessor no data");
    //}

    char readSignByte(size_t pos = 0) const override
    {
        throw DbgException("data accessor no data");
    }

    void writeSignByte(char value, size_t pos=0) override
    {
        throw DbgException("data accessor no data");
    }

    unsigned short readWord(size_t pos = 0) const override
    {
        throw DbgException("data accessor no data");
    }

    void writeWord(unsigned short value, size_t pos=0) override
    {
        throw DbgException("data accessor no data");
    }

    short readSignWord(size_t pos = 0) const override
    {
        throw DbgException("data accessor no data");
    }

    void writeSignWord(short value, size_t pos=0) override
    {
        throw DbgException("data accessor no data");
    }

    unsigned long readDWord(size_t pos = 0) const override
    {
        throw DbgException("data accessor no data");
    }

    void writeDWord(unsigned long value, size_t pos) override
    {
        throw DbgException("data accessor no data");
    }

    long readSignDWord(size_t pos = 0) const override
    {
        throw DbgException("data accessor no data");
    }

    void writeSignDWord(long value, size_t pos=0) override
    {
        throw DbgException("data accessor no data");
    }

    unsigned long long readQWord(size_t pos = 0) const override
    {
        throw DbgException("data accessor no data");
    }

    void writeQWord(unsigned long long value, size_t pos=0) override
    {
        throw DbgException("data accessor no data");
    }

    long long readSignQWord(size_t pos = 0) const override
    {
        throw DbgException("data accessor no data");
    }

    void writeSignQWord(long long value, size_t pos=0) override
    {
        throw DbgException("data accessor no data");
    }

    float readFloat(size_t pos = 0) const override
    {
        throw DbgException("data accessor no data");
    }

    void writeFloat(float value, size_t pos=0) override
    {
        throw DbgException("data accessor no data");
    }

    double readDouble(size_t pos = 0) const override
    {
        throw DbgException("data accessor no data");
    }

    void writeDouble(double value, size_t pos=0) override
    {
        throw DbgException("data accessor no data");
    }

    void readBytes(std::vector<unsigned char>&  dataRange, size_t count, size_t  pos = 0) const override
    {
        throw DbgException("data accessor no data");
    }

    void writeBytes( const std::vector<unsigned char>&  dataRange, size_t pos=0) override
    {
        throw DbgException("data accessor no data");
    }

    void readWords(std::vector<unsigned short>&  dataRange, size_t count, size_t  pos = 0) const override
    {
        throw DbgException("data accessor no data");
    }

    void writeWords( const std::vector<unsigned short>&  dataRange, size_t pos=0) override
    {
        throw DbgException("data accessor no data");
    }

    void readDWords(std::vector<unsigned long>&  dataRange, size_t count, size_t  pos = 0) const override
    {
        throw DbgException("data accessor no data");
    }

    void writeDWords( const std::vector<unsigned long>&  dataRange, size_t  pos=0) override
    {
        throw DbgException("data accessor no data");
    }

    void readQWords(std::vector<unsigned long long>&  dataRange, size_t count, size_t  pos = 0) const override
    {
        throw DbgException("data accessor no data");
    }

    void writeQWords( const std::vector<unsigned long long>&  dataRange, size_t  pos=0) override
    {
        throw DbgException("data accessor no data");
    }

    void readSignBytes(std::vector<char>&  dataRange, size_t count, size_t  pos = 0) const override
    {
        throw DbgException("data accessor no data");
    }

    void writeSignBytes( const std::vector<char>&  dataRange, size_t  pos=0) override
    {
        throw DbgException("data accessor no data");
    }

    void readSignWords(std::vector<short>&  dataRange, size_t count, size_t  pos = 0) const override
    {
        throw DbgException("data accessor no data");
    }

    void writeSignWords( const std::vector<short>&  dataRange, size_t  pos=0) override
    {
        throw DbgException("data accessor no data");
    }

    void readSignDWords(std::vector<long>&  dataRange, size_t count, size_t  pos = 0) const override
    {
        throw DbgException("data accessor no data");
    }

    void writeSignDWords( const std::vector<long>&  dataRange, size_t  pos=0) override
    {
        throw DbgException("data accessor no data");
    }

    void readSignQWords(std::vector<long long>&  dataRange, size_t count, size_t  pos = 0) const override
    {
        throw DbgException("data accessor no data");
    }

    void writeSignQWords( const std::vector<long long>&  dataRange, size_t  pos=0) override
    {
        throw DbgException("data accessor no data");
    }

    void readFloats(std::vector<float>&  dataRange, size_t count, size_t  pos = 0) const override
    {
        throw DbgException("data accessor no data");
    }

    void writeFloats( const std::vector<float>&  dataRange, size_t  pos=0) override
    {
        throw DbgException("data accessor no data");
    }

    void readDoubles(std::vector<double>&  dataRange, size_t count, size_t  pos = 0) const override
    {
        throw DbgException("data accessor no data");
    }

    void writeDoubles( const std::vector<double>&  dataRange, size_t  pos=0) override
    {
        throw DbgException("data accessor no data");
    }

    MEMOFFSET_64 getAddress() const override
    {
        throw DbgException("data accessor no data");
    }

    VarStorage getStorageType() const override
    {
        return UnknownVar;
    }

    std::wstring getRegisterName() const override
    {
        throw DbgException("data accessor no data");
    }

    std::wstring getLocationAsStr() const override
    {
        throw DbgException("data accessor no data");
    }

    DataAccessorPtr nestedCopy( size_t startOffset = 0, size_t length = 0 ) override
    {
        throw DbgException("data accessor no data");
    }

	DataAccessorPtr externalCopy(size_t startOffset = 0, size_t length = 0) override
	{
		throw DbgException("data accessor no data");
	}
};

///////////////////////////////////////////////////////////////////////////////

class MemoryAccessor : public EmptyAccessor
{
public:

    MemoryAccessor(MEMOFFSET_64 offset, size_t length) :
        m_begin(addr64(offset)),
        m_length(length)
    {}

private:

    size_t getLength() const override
    {
        return m_length;
    }

    unsigned char readByte(size_t pos = 0) const override
    {
        if (pos >= m_length)
            throw DbgException("memory accessor range error");

        return ptrByte(m_begin + pos);
    }

    void writeByte(unsigned char value, size_t pos = 0) override
    {
        if (pos >= m_length)
            throw DbgException("memory accessor range error");

        setByte(m_begin + pos, value);
    }

    char readSignByte(size_t pos = 0) const override
    {
        if (pos >= m_length)
            throw DbgException("memory accessor range error");
        return ptrSignByte(m_begin + pos);
    }

    void writeSignByte(char value, size_t pos = 0) override
    {
        if (pos >= m_length)
            throw DbgException("memory accessor range error");
        setSignByte(m_begin + pos, value);
    }

    unsigned short readWord(size_t pos = 0) const override
    {
        if (pos >= m_length / sizeof(unsigned short) )
            throw DbgException("memory accessor range error");
        return ptrWord(m_begin + pos * sizeof(unsigned short));
    }

    void writeWord(unsigned short value, size_t pos = 0) override
    {
        if (pos >= m_length / sizeof(unsigned short) )
            throw DbgException("memory accessor range error");
        setWord(m_begin + pos * sizeof(unsigned short), value);
    }

    short readSignWord(size_t pos = 0) const override
    {
        if (pos  >= m_length / sizeof(short) )
            throw DbgException("memory accessor range error");
        return ptrSignWord(m_begin + pos * sizeof(short));
    }

    void writeSignWord(short value, size_t pos=0) override
    {
        if (pos >= m_length / sizeof(short) )
            throw DbgException("memory accessor range error");
        setSignWord(m_begin + pos * sizeof(short), value);
    }

    unsigned long readDWord(size_t pos = 0) const override
    {
        if (pos >= m_length / sizeof(unsigned long) )
            throw DbgException("memory accessor range error");
        return ptrDWord(m_begin + pos * sizeof(unsigned long));
    }

    void writeDWord(unsigned long value, size_t pos) override
    {
        if (pos >= m_length / sizeof(unsigned long) )
            throw DbgException("memory accessor range error");
        setDWord(m_begin + pos * sizeof(unsigned long), value);
    }

    long readSignDWord(size_t pos = 0) const override
    {
        if (pos >= m_length /sizeof(long) )
            throw DbgException("memory accessor range error");
        return ptrSignDWord(m_begin + pos * sizeof(long));
    }

    void writeSignDWord(long value, size_t pos = 0) override
    {
        if (pos >= m_length /sizeof(long) )
            throw DbgException("memory accessor range error");
        setSignDWord(m_begin + pos * sizeof(long), value);
    }

    unsigned long long readQWord(size_t pos = 0) const override
    {
        if (pos >= m_length / sizeof(unsigned long long) )
            throw DbgException("memory accessor range error");
        return ptrQWord(m_begin + pos * sizeof(unsigned long long));
    }

    void writeQWord(unsigned long long value, size_t pos=0) override
    {
        if (pos >= m_length / sizeof(unsigned long long) )
            throw DbgException("memory accessor range error");
        setQWord(m_begin + pos * sizeof(unsigned long long), value);
    }

    long long readSignQWord(size_t pos = 0) const override
    {
        if ( pos >= m_length / sizeof(long long) )
            throw DbgException("memory accessor range error");
        return ptrSignQWord(m_begin + pos * sizeof(long long));
    }

    void writeSignQWord(long long value, size_t pos=0) override
    {
        if ( pos >= m_length / sizeof(long long) )
            throw DbgException("memory accessor range error");
        setSignQWord(m_begin + pos * sizeof(long long), value);
    }

    float readFloat(size_t pos = 0) const override
    {
        if (pos >= m_length / sizeof(float) )
            throw DbgException("memory accessor range error");
        return ptrSingleFloat(m_begin + pos * sizeof(float));
    }

    void writeFloat(float value, size_t pos=0) override
    {
        if (pos >= m_length / sizeof(float) )
            throw DbgException("memory accessor range error");

        setSingleFloat(m_begin + pos * sizeof(float), value);
    }

    double readDouble(size_t pos = 0) const override
    {
        if (pos >= m_length / sizeof(double) )
            throw DbgException("memory accessor range error");
        return ptrDoubleFloat(m_begin + pos * sizeof(double));
    }

    void writeDouble(double value, size_t pos=0) override
    {
        if (pos >= m_length / sizeof(double) )
            throw DbgException("memory accessor range error");
        
        setDoubleFloat(m_begin + pos * sizeof(double), value);
    }

    void readBytes(std::vector<unsigned char>& dataRange, size_t count, size_t pos = 0) const override
    {
        if ( count > m_length - pos )
            throw DbgException("memory accessor range error");
 
        dataRange = loadBytes(m_begin + pos, static_cast<unsigned long>(count) );
    }

    void writeBytes( const std::vector<unsigned char>& dataRange, size_t pos=0) override
    {
        if ( dataRange.size() > m_length - pos )
            throw DbgException("memory accessor range error");
        kdlib::writeBytes(m_begin + pos, dataRange);
    }

    void readWords(std::vector<unsigned short>& dataRange, size_t count, size_t pos = 0) const override
    {
        if ( count > m_length / sizeof(unsigned short) - pos )
            throw DbgException("memory accessor range error");

        dataRange = loadWords(m_begin + pos* sizeof(unsigned short), static_cast<unsigned long>(count) );
    }

    void writeWords( const std::vector<unsigned short>& dataRange, size_t pos=0) override
    {
        if ( dataRange.size() > m_length / sizeof(unsigned short) - pos )
            throw DbgException("memory accessor range error");

        kdlib::writeWords(m_begin + pos* sizeof(unsigned short), dataRange);
    }

    void readDWords(std::vector<unsigned long>& dataRange, size_t count, size_t pos = 0) const override
    {
        if ( count > m_length / sizeof(unsigned long) - pos )
            throw DbgException("memory accessor range error");

        dataRange = loadDWords(m_begin + pos* sizeof(unsigned long), static_cast<unsigned long>(count) );
    }

    void writeDWords( const std::vector<unsigned long>& dataRange, size_t pos=0) override
    {
        if ( dataRange.size() > m_length / sizeof(unsigned long) - pos )
            throw DbgException("memory accessor range error");

        kdlib::writeDWords(m_begin + pos* sizeof(unsigned long), dataRange);
    }

    void readQWords(std::vector<unsigned long long>& dataRange, size_t count, size_t pos = 0) const override
    {
        if ( count > m_length / sizeof(unsigned long long) - pos )
            throw DbgException("memory accessor range error");

        dataRange = loadQWords(m_begin + pos* sizeof(unsigned long long), static_cast<unsigned long>(count) );
    }

    void writeQWords( const std::vector<unsigned long long>& dataRange, size_t pos=0) override
    {
        if ( dataRange.size() > m_length / sizeof(unsigned long long) - pos )
            throw DbgException("memory accessor range error");

        kdlib::writeQWords(m_begin + pos * sizeof(unsigned long long), dataRange);
    }

    void readSignBytes(std::vector<char>& dataRange, size_t count, size_t pos = 0) const override
    {
        if ( count > m_length - pos )
            throw DbgException("memory accessor range error");

        dataRange = loadSignBytes(m_begin + pos* sizeof(char), static_cast<unsigned long>(count) );
    }

	void writeSignBytes( const std::vector<char>& dataRange, size_t pos = 0) override
    {
        if ( dataRange.size() > m_length  - pos )
            throw DbgException("memory accessor range error");

        kdlib::writeSignBytes(m_begin + pos, dataRange);
    }

    void readSignWords(std::vector<short>& dataRange, size_t count, size_t pos = 0) const override
    {
        if ( count > m_length / sizeof(short) - pos )
            throw DbgException("memory accessor range error");

        dataRange = loadSignWords(m_begin + pos* sizeof(short), static_cast<unsigned long>(count) );
    }

    void writeSignWords( const std::vector<short>&  dataRange, size_t  pos = 0) override
    {
        if ( dataRange.size() > m_length / sizeof(short) - pos )
            throw DbgException("memory accessor range error");

        kdlib::writeSignWords(m_begin + pos * sizeof(short), dataRange);
    }

    void readSignDWords(std::vector<long>& dataRange, size_t count, size_t pos = 0) const override
    {
        if ( count > m_length / sizeof(long) - pos )
            throw DbgException("memory accessor range error");

        dataRange = loadSignDWords(m_begin + pos* sizeof(long), static_cast<unsigned long>(count));
    }

    void writeSignDWords( const std::vector<long>&  dataRange, size_t  pos = 0) override
    {
        if ( dataRange.size() > m_length / sizeof(long) - pos )
            throw DbgException("memory accessor range error");

        kdlib::writeSignDWords(m_begin + pos * sizeof(long), dataRange);
    }

    void readSignQWords(std::vector<long long>& dataRange, size_t count, size_t pos = 0) const override
    {
        if ( count > m_length / sizeof(long long) - pos )
            throw DbgException("memory accessor range error");

        dataRange = loadSignQWords(m_begin + pos* sizeof(long long), static_cast<unsigned long>(count) );
    }

    void writeSignQWords( const std::vector<long long>& dataRange, size_t pos = 0) override
    {
        if ( dataRange.size() > m_length / sizeof(long long) - pos )
            throw DbgException("memory accessor range error");

        kdlib::writeSignQWords(m_begin + pos * sizeof(long long), dataRange);
    }

    void readFloats(std::vector<float>& dataRange, size_t count, size_t pos = 0) const override
    {
        if ( count > m_length / sizeof(float) - pos )
            throw DbgException("memory accessor range error");

        dataRange = loadFloats(m_begin + pos* sizeof(float), static_cast<unsigned long>(count));
    }

    void writeFloats( const std::vector<float>&  dataRange, size_t pos = 0) override
    {
        if ( dataRange.size() > m_length / sizeof(float) - pos )
            throw DbgException("memory accessor range error");

        kdlib::writeFloats(m_begin + pos * sizeof(float), dataRange);
    }

    void readDoubles(std::vector<double>& dataRange, size_t count, size_t pos = 0) const override
    {
        if ( count > m_length / sizeof(double) || pos > m_length / sizeof(double) - count )
            throw DbgException("memory accessor range error");

        dataRange = loadDoubles(m_begin + pos* sizeof(double), static_cast<unsigned long>(count));
    }

    void writeDoubles( const std::vector<double>& dataRange, size_t pos = 0) override
    {
        if ( dataRange.size() > m_length / sizeof(double) - pos )
            throw DbgException("memory accessor range error");

        kdlib::writeDoubles(m_begin + pos * sizeof(double), dataRange);
    }

    MEMOFFSET_64 getAddress() const override
	{
        return m_begin;
    }

    VarStorage getStorageType() const override
    {
        return MemoryVar;
    }

    std::wstring getLocationAsStr() const override
    {
        std::wstringstream  sstr;
        sstr << L"0x" << std::hex << m_begin;
        return sstr.str();
    }

    DataAccessorPtr nestedCopy( size_t startOffset = 0, size_t length = -1 ) override
    {
        if ( length == -1 )
            length = m_length - startOffset;

        if ( length > 0 && startOffset >= m_length )
            throw DbgException("memory accessor range error");

        if ( m_length - startOffset < length )
            throw DbgException("memory accessor range error");

        return getMemoryAccessor( m_begin + startOffset, length);
    }

	DataAccessorPtr externalCopy(size_t startOffset = 0, size_t length = -1) override
	{
		return getMemoryAccessor(startOffset, length);
	}

private:

    MEMOFFSET_64  m_begin;
    size_t  m_length;
};


///////////////////////////////////////////////////////////////////////////////

class CopyAccessor : public EmptyAccessor
{
public:

    CopyAccessor(const DataAccessorPtr& dataAccessor, size_t pos, size_t length) 
    {
        if ( dataAccessor->getLength() <= pos )
            throw DbgException("data accessor range error");

        if ( dataAccessor->getLength() - pos < length )
            throw DbgException("data accessor range error");

        m_parentAccessor = dataAccessor;
        m_pos = pos;
        m_length = length;
    }

private:

    size_t getLength() const final
    {
        return m_length;
    }

    unsigned char readByte(size_t pos = 0) const final
    {
        return readValue<unsigned char>(pos);
    }

    void writeByte(unsigned char value, size_t pos=0) final
    {
        writeValue(value, pos);
    }

    char readSignByte(size_t pos = 0) const final
    {
        return readValue<char>(pos);
    }

    void writeSignByte(char value, size_t pos=0) final
    {
        writeValue(value, pos);
    }

    unsigned short readWord(size_t pos = 0) const final
    {
        return readValue<unsigned short>(pos);
    }

    void writeWord(unsigned short value, size_t pos=0) final
    {
        writeValue(value, pos);
    }

    short readSignWord(size_t pos = 0) const final
    {
        return readValue<short>(pos);
    }

    void writeSignWord(short value, size_t pos=0) final
    {
        writeValue(value, pos);
    }

    unsigned long readDWord(size_t pos = 0) const final
    {
        return readValue<unsigned long>(pos);
    }

    void writeDWord(unsigned long value, size_t pos) final
    {
        writeValue(value, pos);
    }

    long readSignDWord(size_t pos = 0) const final
    {
        return readValue<long>(pos);
    }

    void writeSignDWord(long value, size_t pos = 0) final
    {
        writeValue(value, pos);
    }

    unsigned long long readQWord(size_t pos = 0) const final
    {
        return readValue<unsigned long long>(pos);
    }

    void writeQWord(unsigned long long value, size_t pos = 0) final
    {
        writeValue(value, pos);
    }

    long long readSignQWord(size_t pos = 0) const final
    {
        return readValue<long long>(pos);
    }

    void writeSignQWord(long long value, size_t pos = 0) final
    {
        writeValue(value, pos);
    }

    float readFloat(size_t pos = 0) const final
    {
        return readValue<float>(pos);
    }

    void writeFloat(float value, size_t pos = 0) final
    {
        writeValue(value, pos);
    }

    double readDouble(size_t pos = 0) const final
    {
        return readValue<double>(pos);
    }

    void writeDouble(double value, size_t pos = 0) final
    {
        writeValue(value, pos);
    }

    void readBytes(std::vector<unsigned char>& dataRange, size_t count, size_t pos = 0) const final
    {
        readValues(dataRange, count, pos);
    }

    void writeBytes( const std::vector<unsigned char>&  dataRange, size_t pos=0) final
    {
        writeValues(dataRange, pos);
    }

    void readWords(std::vector<unsigned short>&  dataRange, size_t count, size_t pos = 0) const final
    {
        readValues(dataRange, count, pos);
    }

    void writeWords( const std::vector<unsigned short>&  dataRange, size_t pos = 0) final
    {
        writeValues(dataRange, pos);
    }

    void readDWords(std::vector<unsigned long>&  dataRange, size_t count, size_t pos = 0) const final
    {
        readValues(dataRange, count, pos);
    }

    void writeDWords( const std::vector<unsigned long>& dataRange, size_t pos = 0) final
    {
        writeValues(dataRange, pos);
    }

    void readQWords(std::vector<unsigned long long>& dataRange, size_t count, size_t pos = 0) const final
    {
        readValues(dataRange, count, pos);
    }

    void writeQWords( const std::vector<unsigned long long>& dataRange, size_t pos = 0) final
    {
        writeValues(dataRange, pos);
    }

    void readSignBytes(std::vector<char>& dataRange, size_t count, size_t pos = 0) const final
    {
        readValues(dataRange, count, pos);
    }

    void writeSignBytes( const std::vector<char>& dataRange, size_t pos = 0) final
    {
        writeValues(dataRange, pos);
    }

    void readSignWords(std::vector<short>& dataRange, size_t count, size_t pos = 0) const final
    {
        readValues(dataRange, count, pos);
    }

    void writeSignWords( const std::vector<short>& dataRange, size_t pos = 0) final
    {
        writeValues(dataRange, pos);
    }

    void readSignDWords(std::vector<long>& dataRange, size_t count, size_t pos = 0) const final
    {
        readValues(dataRange, count, pos);
    }

    void writeSignDWords( const std::vector<long>& dataRange, size_t pos = 0) final
    {
        writeValues(dataRange, pos);
    }

    void readSignQWords(std::vector<long long>& dataRange, size_t count, size_t pos = 0) const final
    {
        readValues(dataRange, count, pos);
    }

    void writeSignQWords( const std::vector<long long>& dataRange, size_t pos = 0) final
    {
        writeValues(dataRange, pos);
    }

    void readFloats(std::vector<float>& dataRange, size_t count, size_t pos = 0) const final
    {
        readValues(dataRange, count, pos);
    }

    void writeFloats( const std::vector<float>& dataRange, size_t pos = 0) final
    {
        writeValues(dataRange, pos);
    }

    void readDoubles(std::vector<double>& dataRange, size_t count, size_t pos = 0) const final
    {
        readValues(dataRange, count, pos);
    }

    void writeDoubles( const std::vector<double>& dataRange, size_t pos = 0) final
    {
        writeValues(dataRange, pos);
    }

    MEMOFFSET_64 getAddress() const final
    {
        return m_parentAccessor->getAddress() + m_pos;
    }

    VarStorage getStorageType() const final
    {
        return m_parentAccessor->getStorageType();
    }

    std::wstring getRegisterName() const final
    {
        return m_parentAccessor->getRegisterName();
    }

    std::wstring getLocationAsStr() const final
    {
        return m_parentAccessor->getLocationAsStr();
    }

    DataAccessorPtr nestedCopy( size_t startOffset = 0, size_t length = -1 ) final
    {

        if ( length == -1 )
            length = m_length - startOffset;

        if ( length > 0 && startOffset >= m_length )
            throw DbgException("copy accessor range error");

        if ( m_length - startOffset < length )
            throw DbgException("copy accessor range error");

        return DataAccessorPtr( new CopyAccessor( m_parentAccessor, m_pos + startOffset, length) );
    }

	DataAccessorPtr externalCopy(size_t startOffset = 0, size_t length = -1) final
	{
		size_t parentAccessorLength = m_parentAccessor->getLength();
		if (startOffset >= parentAccessorLength)
			throw DbgException("copy accessor range error");

		if (length == -1)
			length = parentAccessorLength - startOffset;

		if (parentAccessorLength - startOffset < length)
			throw DbgException("copy accessor range error");

		return DataAccessorPtr(new CopyAccessor(m_parentAccessor, startOffset, length));
	}

private:

    template <typename T>
    T readValue(size_t pos) const
    {
        if ( pos >= m_length / sizeof(T) )
            throw DbgException("data accessor range error");

        std::vector<unsigned char>  buffer(sizeof(T));

        m_parentAccessor->readBytes(buffer, sizeof(T), m_pos + pos * sizeof(T));

        return *reinterpret_cast<T*>(&buffer[0]);
    }

    template <typename T>
    void writeValue(T value, size_t pos)
    {
        if ( pos >= m_length / sizeof(T) )
            throw DbgException("data accessor range error");

        std::vector<unsigned char>  buffer(sizeof(T));

        *reinterpret_cast<T*>(&buffer[0]) = value;

        m_parentAccessor->writeBytes(buffer, m_pos + pos * sizeof(T));
    }

    template <typename T>
    void readValues(std::vector<T>& dataRange, size_t count, size_t pos) const
    {
        if ( count > m_length / sizeof(T)  - pos)
            throw DbgException("data accessor range error");

        std::vector<unsigned char>  buffer(sizeof(T)*count);

        m_parentAccessor->readBytes(buffer, count, m_pos+pos*sizeof(T));

        dataRange = std::vector<T>(
            reinterpret_cast<const T*>(&buffer.front()),
            reinterpret_cast<const T*>(&buffer.front()) + count);
    }

    template <typename T>
    void writeValues( const std::vector<T>&  dataRange, size_t pos) 
    {
        if ( dataRange.size() > m_length / sizeof(double) - pos )
            throw DbgException("data accessor range error");

        std::vector<unsigned char> buffer(
            reinterpret_cast<const unsigned char*>(&dataRange.front()),
            reinterpret_cast<const unsigned char*>(&dataRange.front() + dataRange.size()) );

        m_parentAccessor->writeBytes(buffer, m_pos+pos*sizeof(T));
    }


    DataAccessorPtr  m_parentAccessor;
    size_t  m_pos;
    size_t  m_length;
};

///////////////////////////////////////////////////////////////////////////////

class CacheAccessor : public EmptyAccessor, public boost::enable_shared_from_this<CacheAccessor>
{
public:

    CacheAccessor(const std::vector<char>& buffer, const std::wstring& location):
        m_buffer(buffer),
        m_location(location.empty() ?  L"cached data" : location)
    {}
    
    CacheAccessor(size_t size, const std::wstring& location):
        m_buffer(size),
        m_location(location.empty() ?  L"cached data" : location)
    {}

    CacheAccessor(const NumVariant& var, const std::wstring&  location) 
    {
        m_location = location.empty() ?  L"cached data" : location;

        if ( var.isChar() )
        {
            resetValue(var.asChar());
        }
        else if ( var.isUChar() )
        {
            resetValue(var.asUChar());
        }
        else if ( var.isShort() )
        {
            resetValue(var.asShort());
        }
        else if ( var.isUShort() )
        {
            resetValue(var.asUShort());
        }
        else if ( var.isLong() )
        {
            resetValue(var.asLong());
        }
        else if ( var.isULong() )
        {
            resetValue(var.asULong());
        }
        else if ( var.isLongLong() )
        {
            resetValue(var.asLongLong());
        }
        else if ( var.isULongLong() )
        {
            resetValue(var.asULongLong());
        }
        else if ( var.isInt())
        {
            resetValue(var.asInt());
        }
        else if ( var.isUInt() )
        {
            resetValue(var.asUInt());
        }
        else if ( var.isFloat() )
        {
            resetValue(var.asFloat());
        }
        else if ( var.isDouble() )
        {
            resetValue(var.asDouble());
        }
    }

private:

    size_t getLength() const final
    {
        return m_buffer.size();
    }

    unsigned char readByte(size_t pos = 0) const final
    {
        return getValue<unsigned char>(pos);
    }

    void writeByte(unsigned char value, size_t pos = 0) final
    {
        setValue<unsigned char>(value,pos);
    }

    char readSignByte(size_t pos = 0) const final
    {
        return getValue<char>(pos);
    }

    void writeSignByte(char value, size_t pos = 0) final
    {
        setValue<char>(value,pos);
    }

    unsigned short readWord(size_t pos = 0) const final
    {
        return getValue<unsigned short>(pos);
    }

    void writeWord(unsigned short value, size_t pos = 0) final
    {
        setValue<unsigned short>(value,pos);
    }

    short readSignWord(size_t pos = 0) const final
    {
        return getValue<short>(pos);
    }

    void writeSignWord(short value, size_t pos = 0) final
    {
        setValue<short>(value,pos);
    }

    unsigned long readDWord(size_t pos = 0) const final
    {
        return getValue<unsigned long>(pos);
    }

    void writeDWord(unsigned long value, size_t pos) final
    {
        setValue<unsigned long>(value,pos);
    }

    long readSignDWord(size_t pos = 0) const final
    {
        return getValue<long>(pos);
    }

    void writeSignDWord(long value, size_t pos = 0) final
    {
        setValue<long>(value,pos);
    }

    unsigned long long readQWord(size_t pos = 0) const final
    {
        return getValue<unsigned long long>(pos);
    }

    void writeQWord(unsigned long long value, size_t pos = 0)  final
    {
        setValue<unsigned long long>(value,pos);
    }

    long long readSignQWord(size_t pos = 0) const final
    {
        return getValue<long long>(pos);
    }

    void writeSignQWord(long long value, size_t pos = 0) final
    {
        setValue<long long>(value,pos);
    }

    float readFloat(size_t pos = 0) const final
    {
        return getValue<float>(pos);
    }

    void writeFloat(float value, size_t pos = 0) final
    {
        setValue<float>(value,pos);
    }

    double readDouble(size_t pos = 0) const final
    {
        return getValue<double>(pos);
    }

    void writeDouble(double value, size_t pos = 0) final
    {
        setValue<double>(value,pos);
    }

    void readBytes(std::vector<unsigned char>& dataRange, size_t count, size_t pos = 0) const final
    {
        readValues<unsigned char>(dataRange, count, pos);
    }

    void writeBytes( const std::vector<unsigned char>& dataRange, size_t pos = 0) final
    {
        writeValues<unsigned char>(dataRange, pos);
    }

    void readWords(std::vector<unsigned short>& dataRange, size_t count, size_t pos = 0) const final
    {
        readValues<unsigned short>(dataRange, count, pos);
    }

    void writeWords( const std::vector<unsigned short>& dataRange, size_t pos = 0) final
    {
        writeValues<unsigned short>(dataRange, pos);
    }

    void readDWords(std::vector<unsigned long>& dataRange, size_t count, size_t pos = 0) const final
    {
        readValues<unsigned long>(dataRange, count, pos);
    }

    void writeDWords( const std::vector<unsigned long>& dataRange, size_t pos = 0) final
    {
        writeValues<unsigned long>(dataRange, pos);
    }

    void readQWords(std::vector<unsigned long long>& dataRange, size_t count, size_t pos = 0) const final
    {
        readValues<unsigned long long>(dataRange, count, pos);
    }

    void writeQWords( const std::vector<unsigned long long>& dataRange, size_t pos = 0) final
    {
        writeValues<unsigned long long>(dataRange, pos);
    }

    void readSignBytes(std::vector<char>& dataRange, size_t count, size_t pos = 0) const final
    {
        readValues<char>(dataRange, count, pos);
    }

    void writeSignBytes( const std::vector<char>& dataRange, size_t pos = 0) final
    {
        writeValues<char>(dataRange, pos);
    }

    void readSignWords(std::vector<short>& dataRange, size_t count, size_t pos = 0) const final
    {
        readValues<short>(dataRange, count, pos);
    }

    void writeSignWords( const std::vector<short>& dataRange, size_t pos = 0) final
    {
        writeValues<short>(dataRange, pos);
    }

    void readSignDWords(std::vector<long>&  dataRange, size_t count, size_t  pos = 0) const final
    {
        readValues<long>(dataRange, count, pos);
    }

    void writeSignDWords( const std::vector<long>& dataRange, size_t pos = 0) final
    {
        writeValues<long>(dataRange, pos);
    }

    void readSignQWords(std::vector<long long>& dataRange, size_t count, size_t pos = 0) const final
    {
        readValues<long long>(dataRange, count, pos);
    }

    void writeSignQWords( const std::vector<long long>& dataRange, size_t pos = 0) final
    {
        writeValues<long long>(dataRange, pos);
    }

    void readFloats(std::vector<float>& dataRange, size_t count, size_t pos = 0) const final
    {
        readValues<float>(dataRange, count, pos);
    }

    void writeFloats( const std::vector<float>& dataRange, size_t pos = 0) final
    {
        writeValues<float>(dataRange, pos);
    }

    void readDoubles(std::vector<double>& dataRange, size_t count, size_t pos = 0) const final
    {
        readValues<double>(dataRange, count, pos);
    }

    void writeDoubles( const std::vector<double>& dataRange, size_t pos=0) final
    {
        writeValues<double>(dataRange, pos);
    }

    MEMOFFSET_64 getAddress() const final
    {
        throw DbgException("data accessor no data");
    }

    VarStorage getStorageType() const final
    {
        return UnknownVar;
    }

    std::wstring getRegisterName() const final
    {
        throw DbgException("data accessor no data");
    }

    std::wstring getLocationAsStr() const final
    {
        return m_location;
    }

    DataAccessorPtr nestedCopy( size_t startOffset = 0, size_t length = -1 ) final
    {
        return DataAccessorPtr( new CopyAccessor( shared_from_this(), startOffset, length) );
    }

	DataAccessorPtr externalCopy(size_t startOffset = 0, size_t length = -1) final
	{
		return DataAccessorPtr(new CopyAccessor(shared_from_this(), startOffset, length));
	}

private:

    std::vector<char>  m_buffer;

    std::wstring  m_location;

    template <typename T>
    T getValue(size_t pos) const
    {
        if ( pos >= m_buffer.size() / sizeof(T) )
            throw DbgException("cache accessor range error");

        return *reinterpret_cast<const T*>( &m_buffer[pos*sizeof(T)] );
    }

    template <typename T>
    void setValue(T value, size_t pos)
    {
        if ( pos >= m_buffer.size() / sizeof(T) )
            throw DbgException("cache accessor range error");

        *reinterpret_cast<T*>( &m_buffer[pos*sizeof(T)] ) = value;
    }

    template <typename T>
    void resetValue(T value)
    {
        m_buffer.resize(sizeof(T));
        *reinterpret_cast<T*>( &m_buffer[0] ) = value;
    }

    template <typename T>
    void readValues(std::vector<T>& dataRange, size_t count, size_t pos) const
    {
        if ( count > m_buffer.size() / sizeof(T)  - pos)
            throw DbgException("cache accessor range error");

        dataRange = std::vector<T>(
            reinterpret_cast<const T*>(&m_buffer[pos*sizeof(T)]), 
            reinterpret_cast<const T*>(&m_buffer[pos*sizeof(T)]) + count );
    }

    template <typename T>
    void writeValues( const std::vector<T>&  dataRange, size_t pos) 
    {
        if ( dataRange.size() > m_buffer.size() / sizeof(T) - pos )
            throw DbgException("cache accessor range error");

        memcpy( &m_buffer[pos*sizeof(T)], &dataRange[0], dataRange.size()*sizeof(T) );
    }
};

///////////////////////////////////////////////////////////////////////////////

class RegisterAccessor : public EmptyAccessor
{
public:

    RegisterAccessor( const std::wstring& registerName) :
        m_regName(registerName),
        m_regIndex(kdlib::getRegisterIndex(registerName))
     {}


    VarStorage getStorageType() const final
    {
        return RegisterVar;
    }

    std::wstring getRegisterName() const final
    {
        return m_regName;
    }

    size_t getLength() const final
    {
        return kdlib::getRegisterSize(m_regIndex);
    }

    unsigned char readByte(size_t pos = 0) const final
    {
        return getValue<unsigned char>(pos);
    }

    void writeByte(unsigned char value, size_t pos = 0) final
    {
        setValue<unsigned char>(value, pos);
    }

    char readSignByte(size_t pos = 0) const final
    {
        return getValue<char>(pos);
    }

    void writeSignByte(char value, size_t pos = 0) final
    {
        setValue<char>(value, pos);
    }

    unsigned short readWord(size_t pos = 0) const final
    {
        return getValue<unsigned short>(pos);
    }

    void writeWord(unsigned short value, size_t pos = 0) final
    {
        setValue<unsigned short>(value, pos);
    }

    short readSignWord(size_t pos = 0) const final
    {
        return getValue<short>(pos);
    }

    void writeSignWord(short value, size_t pos = 0) final
    {
        setValue<short>(value, pos);
    }

    unsigned long readDWord(size_t pos = 0) const final
    {
        return getValue<unsigned long>(pos);
    }

    void writeDWord(unsigned long value, size_t pos) final
    {
        setValue<unsigned long>(value, pos);
    }

    long readSignDWord(size_t pos = 0) const final
    {
        return getValue<long>(pos);
    }

    void writeSignDWord(long value, size_t pos = 0) final
    {
        setValue<long>(value, pos);
    }

    unsigned long long readQWord(size_t pos = 0) const final
    {
        return getValue<unsigned long long>(pos);
    }

    void writeQWord(unsigned long long value, size_t pos = 0) final
    {
        setValue<unsigned long long>(value, pos);
    }

    long long readSignQWord(size_t pos = 0) const final
    {
        return getValue<long long>(pos);
    }

    void writeSignQWord(long long value, size_t pos = 0) final
    {
        setValue<long long>(value, pos);
    }

    float readFloat(size_t pos = 0) const final
    {
        return getValue<float>(pos);
    }

    void writeFloat(float value, size_t pos = 0) final
    {
        setValue<float>(value, pos);
    }

    double readDouble(size_t pos = 0) const final
    {
        return getValue<double>(pos);
    }

    void writeDouble(double value, size_t pos = 0) final
    {
        setValue<double>(value, pos);
    }

    void readBytes(std::vector<unsigned char>& dataRange, size_t count, size_t pos = 0) const final
    {
        readValues<unsigned char>(dataRange, count, pos);
    }

    void writeBytes( const std::vector<unsigned char>& dataRange, size_t pos = 0)  final
    {
       writeValues<unsigned char>(dataRange, pos);
    }

    void readWords(std::vector<unsigned short>& dataRange, size_t count, size_t pos = 0) const final
    {
        readValues<unsigned short>(dataRange, count, pos);
    }

    void writeWords( const std::vector<unsigned short>& dataRange, size_t pos = 0) final
    {
        writeValues<unsigned short>(dataRange, pos);
    }

    void readDWords(std::vector<unsigned long>& dataRange, size_t count, size_t pos = 0) const final
    {
        readValues<unsigned long>(dataRange, count, pos);
    }

    void writeDWords( const std::vector<unsigned long>& dataRange, size_t pos = 0) final
    {
        writeValues<unsigned long>(dataRange, pos);
    }

    void readQWords(std::vector<unsigned long long>& dataRange, size_t count, size_t pos = 0) const final
    {
        readValues<unsigned long long>(dataRange, count, pos);
    }

    void writeQWords( const std::vector<unsigned long long>& dataRange, size_t pos = 0) final
    {
        writeValues<unsigned long long>(dataRange, pos);
    }

    void readSignBytes(std::vector<char>& dataRange, size_t count, size_t pos = 0) const final
    {
        readValues<char>(dataRange, count, pos);
    }

    void writeSignBytes( const std::vector<char>& dataRange, size_t pos = 0) final
    {
        writeValues<char>(dataRange, pos);
    }

    void readSignWords(std::vector<short>& dataRange, size_t count, size_t pos = 0) const final
    {
        readValues<short>(dataRange, count, pos);
    }

    void writeSignWords( const std::vector<short>& dataRange, size_t pos = 0) final
    {
        writeValues<short>(dataRange, pos);
    }

    void readSignDWords(std::vector<long>& dataRange, size_t count, size_t pos = 0) const final
    {
        readValues<long>(dataRange, count, pos);
    }

    void writeSignDWords( const std::vector<long>& dataRange, size_t pos = 0) final
    {
        writeValues<long>(dataRange, pos);
    }

    void readSignQWords(std::vector<long long>& dataRange, size_t count, size_t pos = 0) const final
    {
        readValues<long long>(dataRange, count, pos);
    }

    void writeSignQWords( const std::vector<long long>& dataRange, size_t pos = 0) final
    {
        writeValues<long long>(dataRange, pos);
    }

    void readFloats(std::vector<float>& dataRange, size_t count, size_t pos = 0) const final
    {
        readValues<float>(dataRange, count, pos);
    }

    void writeFloats( const std::vector<float>& dataRange, size_t pos=0) final
    {
        writeValues<float>(dataRange, pos);
    }

    void readDoubles(std::vector<double>& dataRange, size_t count, size_t pos = 0) const final
    {
        readValues<double>(dataRange, count, pos);
    }

    void writeDoubles( const std::vector<double>& dataRange, size_t pos = 0) final
    {
        writeValues<double>(dataRange, pos);
    }


    std::wstring getLocationAsStr() const final
    {
        return std::wstring(L"@") + m_regName;
    }

private:

    template <typename T>
    T getValue(size_t pos) const
    {
        size_t  regSize = kdlib::getRegisterSize(m_regIndex);
        if ( pos >= regSize/sizeof(T) )
            throw DbgException("register accessor range error");

        std::vector<char>  regValue(regSize);
        kdlib::getRegisterValue(m_regIndex, &regValue[0], regSize);

        return *reinterpret_cast<T*>( &regValue[pos*sizeof(T)] );
    }

    template <typename T>
    void setValue(T& value, size_t pos)
    {
        size_t  regSize = kdlib::getRegisterSize(m_regIndex);
        if ( pos >= regSize/sizeof(T) )
            throw DbgException("register accessor range error");

        std::vector<char>  regValue(regSize);
        kdlib::getRegisterValue(m_regIndex, &regValue[0], regSize);

        *reinterpret_cast<T*>( &regValue[pos*sizeof(T)] ) = value;

        kdlib::setRegisterValue(m_regIndex, &regValue[0], regSize);
    }

    template <typename T>
    void readValues(std::vector<T>& dataRange, size_t count, size_t pos) const
    {
        size_t  regSize = kdlib::getRegisterSize(m_regIndex);
        if ( count > regSize/sizeof(T)  - pos)
            throw DbgException("register accessor range error");

        std::vector<char>  regValue(regSize);
        kdlib::getRegisterValue(m_regIndex, &regValue[0], regSize);

        dataRange = std::vector<T>(
            reinterpret_cast<T*>(&regValue[pos*sizeof(T)]), 
            reinterpret_cast<T*>(&regValue[pos*sizeof(T)]) + count );
    }

    template <typename T>
    void writeValues( const std::vector<T>&  dataRange, size_t pos) 
    {
        size_t  regSize = kdlib::getRegisterSize(m_regIndex);
        if ( dataRange.size() > regSize/sizeof(T) - pos )
            throw DbgException("register accessor range error");

        std::vector<T>  regValue(regSize/sizeof(T));
        kdlib::getRegisterValue(m_regIndex, &regValue[0], regSize);

        std::copy( dataRange.begin(), dataRange.end(), regValue.begin() + pos );

        kdlib::setRegisterValue(m_regIndex, &regValue[0], regSize);
    }

    std::wstring  m_regName;
    unsigned long  m_regIndex;
};

///////////////////////////////////////////////////////////////////////////////

class DumpAccessor : public EmptyAccessor, public boost::enable_shared_from_this<DumpAccessor>
{
public:

	DumpAccessor(const std::vector<unsigned char>& buffer, MEMOFFSET_64 addr = 0, const std::wstring& location = L"") :
		m_buffer(buffer),
		m_addr(addr64(addr)),
		m_location(location.empty() ? L"dump" : location)
	{}

	DumpAccessor(size_t size, MEMOFFSET_64 addr = 0, const std::wstring& location = L"") :
		m_buffer(size),
		m_addr(addr64(addr)),
		m_location(location.empty() ? L"dump" : location)
	{}

	DumpAccessor(const NumVariant& var, MEMOFFSET_64 addr = 0, const std::wstring&  location = L"") :
		m_addr(addr64(addr)),
		m_location(location.empty() ? L"dump" : location)
	{
		m_location = location.empty() ? L"dump" : location;

		if (var.isChar())
		{
			resetValue(var.asChar());
		}
		else if (var.isUChar())
		{
			resetValue(var.asUChar());
		}
		else if (var.isShort())
		{
			resetValue(var.asShort());
		}
		else if (var.isUShort())
		{
			resetValue(var.asUShort());
		}
		else if (var.isLong())
		{
			resetValue(var.asLong());
		}
		else if (var.isULong())
		{
			resetValue(var.asULong());
		}
		else if (var.isLongLong())
		{
			resetValue(var.asLongLong());
		}
		else if (var.isULongLong())
		{
			resetValue(var.asULongLong());
		}
		else if (var.isInt())
		{
			resetValue(var.asInt());
		}
		else if (var.isUInt())
		{
			resetValue(var.asUInt());
		}
		else if (var.isFloat())
		{
			resetValue(var.asFloat());
		}
		else if (var.isDouble())
		{
			resetValue(var.asDouble());
		}
	}

private:

	size_t getLength() const final
	{
		return m_buffer.size();
	}

	unsigned char readByte(size_t pos = 0) const final
	{
		return getValue<unsigned char>(pos);
	}

	void writeByte(unsigned char value, size_t pos = 0) final
	{
		setValue<unsigned char>(value, pos);
	}

	char readSignByte(size_t pos = 0) const final
	{
		return getValue<char>(pos);
	}

	void writeSignByte(char value, size_t pos = 0) final
	{
		setValue<char>(value, pos);
	}

	unsigned short readWord(size_t pos = 0) const final
	{
		return getValue<unsigned short>(pos);
	}

	void writeWord(unsigned short value, size_t pos = 0) final
	{
		setValue<unsigned short>(value, pos);
	}

	short readSignWord(size_t pos = 0) const final
	{
		return getValue<short>(pos);
	}

	void writeSignWord(short value, size_t pos = 0) final
	{
		setValue<short>(value, pos);
	}

	unsigned long readDWord(size_t pos = 0) const final
	{
		return getValue<unsigned long>(pos);
	}

	void writeDWord(unsigned long value, size_t pos) final
	{
		setValue<unsigned long>(value, pos);
	}

	long readSignDWord(size_t pos = 0) const final
	{
		return getValue<long>(pos);
	}

	void writeSignDWord(long value, size_t pos = 0) final
	{
		setValue<long>(value, pos);
	}

	unsigned long long readQWord(size_t pos = 0) const final
	{
		return getValue<unsigned long long>(pos);
	}

	void writeQWord(unsigned long long value, size_t pos = 0) final
	{
		setValue<unsigned long long>(value, pos);
	}

	long long readSignQWord(size_t pos = 0) const final
	{
		return getValue<long long>(pos);
	}

	void writeSignQWord(long long value, size_t pos = 0) final
	{
		setValue<long long>(value, pos);
	}

	float readFloat(size_t pos = 0) const final
	{
		return getValue<float>(pos);
	}

	void writeFloat(float value, size_t pos = 0) final
	{
		setValue<float>(value, pos);
	}

	double readDouble(size_t pos = 0) const final
	{
		return getValue<double>(pos);
	}

	void writeDouble(double value, size_t pos = 0) final
	{
		setValue<double>(value, pos);
	}

	void readBytes(std::vector<unsigned char>& dataRange, size_t count, size_t pos = 0) const final
	{
		readValues<unsigned char>(dataRange, count, pos);
	}

	void writeBytes(const std::vector<unsigned char>& dataRange, size_t pos = 0) final
	{
		writeValues<unsigned char>(dataRange, pos);
	}

	void readWords(std::vector<unsigned short>& dataRange, size_t count, size_t pos = 0) const final
	{
		readValues<unsigned short>(dataRange, count, pos);
	}

	void writeWords(const std::vector<unsigned short>& dataRange, size_t pos = 0) final
	{
		writeValues<unsigned short>(dataRange, pos);
	}

	void readDWords(std::vector<unsigned long>& dataRange, size_t count, size_t pos = 0) const final
	{
		readValues<unsigned long>(dataRange, count, pos);
	}

	void writeDWords(const std::vector<unsigned long>& dataRange, size_t pos = 0) final
	{
		writeValues<unsigned long>(dataRange, pos);
	}

	void readQWords(std::vector<unsigned long long>& dataRange, size_t count, size_t pos = 0) const final
	{
		readValues<unsigned long long>(dataRange, count, pos);
	}

	void writeQWords(const std::vector<unsigned long long>& dataRange, size_t pos = 0) final
	{
		writeValues<unsigned long long>(dataRange, pos);
	}

	void readSignBytes(std::vector<char>& dataRange, size_t count, size_t pos = 0) const final
	{
		readValues<char>(dataRange, count, pos);
	}

	void writeSignBytes(const std::vector<char>& dataRange, size_t pos = 0) final
	{
		writeValues<char>(dataRange, pos);
	}

	void readSignWords(std::vector<short>& dataRange, size_t count, size_t pos = 0) const final
	{
		readValues<short>(dataRange, count, pos);
	}

	void writeSignWords(const std::vector<short>& dataRange, size_t pos = 0) final
	{
		writeValues<short>(dataRange, pos);
	}

	void readSignDWords(std::vector<long>& dataRange, size_t count, size_t pos = 0) const final
	{
		readValues<long>(dataRange, count, pos);
	}

	void writeSignDWords(const std::vector<long>& dataRange, size_t pos = 0) final
	{
		writeValues<long>(dataRange, pos);
	}

	void readSignQWords(std::vector<long long>& dataRange, size_t count, size_t pos = 0) const final
	{
		readValues<long long>(dataRange, count, pos);
	}

	void writeSignQWords(const std::vector<long long>& dataRange, size_t pos = 0) final
	{
		writeValues<long long>(dataRange, pos);
	}

	void readFloats(std::vector<float>& dataRange, size_t count, size_t pos = 0) const final
	{
		readValues<float>(dataRange, count, pos);
	}

	void writeFloats(const std::vector<float>& dataRange, size_t pos = 0) final
	{
		writeValues<float>(dataRange, pos);
	}

	void readDoubles(std::vector<double>& dataRange, size_t count, size_t pos = 0) const final
	{
		readValues<double>(dataRange, count, pos);
	}

	void writeDoubles(const std::vector<double>& dataRange, size_t pos = 0) final
	{
		writeValues<double>(dataRange, pos);
	}

	MEMOFFSET_64 getAddress() const final
	{
		return m_addr;
	}

	VarStorage getStorageType() const final
	{
		return UnknownVar;
	}

	std::wstring getRegisterName() const final
	{
		throw DbgException("data accessor no data");
	}

	std::wstring getLocationAsStr() const final
	{
		return m_location;
	}

	DataAccessorPtr nestedCopy(size_t startOffset = 0, size_t length = -1) final
	{
		return DataAccessorPtr(new CopyAccessor(shared_from_this(), startOffset, length));
	}

	DataAccessorPtr externalCopy(size_t startOffset = 0, size_t length = -1) final
	{
		return DataAccessorPtr(new CopyAccessor(shared_from_this(), startOffset, length));
	}

private:

	std::vector<unsigned char> m_buffer;

	MEMOFFSET_64 m_addr;

	std::wstring  m_location;

	bool CheckRange (size_t offset, size_t size) const {

		size_t curDumpSize = m_buffer.size();
	
		if (offset < m_addr ||
			offset >= m_addr + curDumpSize ||
			offset + size > m_addr + curDumpSize
			) {
			return false;
		}

		return true;
	}

	template <typename T>
	T getValue(size_t pos) const
	{
		if (!CheckRange (pos, sizeof(T))) {
			throw DbgException("dump accessor range error");
		}

		return *reinterpret_cast<const T*>(&m_buffer[pos - m_addr]);
	}

	template <typename T>
	void setValue(T value, size_t pos)
	{
		if (!CheckRange(pos, sizeof(T))) {
			throw DbgException("dump accessor range error");
		}

		*reinterpret_cast<T*>(&m_buffer[pos - m_addr]) = value;
	}

	template <typename T>
	void resetValue(T value)
	{
		m_buffer.resize(sizeof(T));
		*reinterpret_cast<T*>(&m_buffer[0]) = value;
	}

	template <typename T>
	void readValues(std::vector<T>& dataRange, size_t count, size_t pos) const
	{
		if (!CheckRange(pos, count * sizeof(T))) {
			throw DbgException("dump accessor range error");
		}

		dataRange = std::vector<T>(
			reinterpret_cast<const T*>(&m_buffer[pos - m_addr]),
			reinterpret_cast<const T*>(&m_buffer[pos - m_addr]) + count);
	}

	template <typename T>
	void writeValues(const std::vector<T>&  dataRange, size_t pos)
	{
		if (!CheckRange(pos, dataRange.size() * sizeof(T))) {
			throw DbgException("dump accessor range error");
		}

		memcpy(&m_buffer[pos - m_addr], &dataRange[0], dataRange.size() * sizeof(T));
	}
};

///////////////////////////////////////////////////////////////////////////////

}
