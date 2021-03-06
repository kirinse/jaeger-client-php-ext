/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift-gen/jaeger_types.h"

#include <algorithm>
#include <ostream>

namespace jaegertracing { namespace thrift {

Tag::~Tag() noexcept {
}

void Tag::__set_key(const std::string& val) {
  this->key = val;
}

void Tag::__set_vType(const TagType::type val) {
  this->vType = val;
}

void Tag::__set_vStr(const std::string& val) {
  this->vStr = val;
__isset.vStr = true;
}

void Tag::__set_vDouble(const double val) {
  this->vDouble = val;
__isset.vDouble = true;
}

void Tag::__set_vBool(const bool val) {
  this->vBool = val;
__isset.vBool = true;
}

void Tag::__set_vLong(const int64_t val) {
  this->vLong = val;
__isset.vLong = true;
}

void Tag::__set_vBinary(const std::string& val) {
  this->vBinary = val;
__isset.vBinary = true;
}

uint32_t Tag::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->key);
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast0;
          xfer += iprot->readI32(ecast0);
          this->vType = (TagType::type)ecast0;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->vStr);
          this->__isset.vStr = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->vDouble);
          this->__isset.vDouble = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->vBool);
          this->__isset.vBool = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->vLong);
          this->__isset.vLong = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readBinary(this->vBinary);
          this->__isset.vBinary = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Tag::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Tag");

  xfer += oprot->writeFieldBegin("key", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->key);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("vType", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32((int32_t)this->vType);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.vStr) {
    xfer += oprot->writeFieldBegin("vStr", ::apache::thrift::protocol::T_STRING, 3);
    xfer += oprot->writeString(this->vStr);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.vDouble) {
    xfer += oprot->writeFieldBegin("vDouble", ::apache::thrift::protocol::T_DOUBLE, 4);
    xfer += oprot->writeDouble(this->vDouble);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.vBool) {
    xfer += oprot->writeFieldBegin("vBool", ::apache::thrift::protocol::T_BOOL, 5);
    xfer += oprot->writeBool(this->vBool);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.vLong) {
    xfer += oprot->writeFieldBegin("vLong", ::apache::thrift::protocol::T_I64, 6);
    xfer += oprot->writeI64(this->vLong);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.vBinary) {
    xfer += oprot->writeFieldBegin("vBinary", ::apache::thrift::protocol::T_STRING, 7);
    xfer += oprot->writeBinary(this->vBinary);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Tag &a, Tag &b) {
  using ::std::swap;
  swap(a.key, b.key);
  swap(a.vType, b.vType);
  swap(a.vStr, b.vStr);
  swap(a.vDouble, b.vDouble);
  swap(a.vBool, b.vBool);
  swap(a.vLong, b.vLong);
  swap(a.vBinary, b.vBinary);
  swap(a.__isset, b.__isset);
}

Tag::Tag(const Tag& other1) {
  key = other1.key;
  vType = other1.vType;
  vStr = other1.vStr;
  vDouble = other1.vDouble;
  vBool = other1.vBool;
  vLong = other1.vLong;
  vBinary = other1.vBinary;
  __isset = other1.__isset;
}
Tag& Tag::operator=(const Tag& other2) {
  key = other2.key;
  vType = other2.vType;
  vStr = other2.vStr;
  vDouble = other2.vDouble;
  vBool = other2.vBool;
  vLong = other2.vLong;
  vBinary = other2.vBinary;
  __isset = other2.__isset;
  return *this;
}

Log::~Log() noexcept {
}


void Log::__set_timestamp(const int64_t val) {
  this->timestamp = val;
}

void Log::__set_fields(const std::vector<Tag> & val) {
  this->fields = val;
}

uint32_t Log::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->timestamp);
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->fields.clear();
            uint32_t _size3;
            ::apache::thrift::protocol::TType _etype6;
            xfer += iprot->readListBegin(_etype6, _size3);
            this->fields.resize(_size3);
            uint32_t _i7;
            for (_i7 = 0; _i7 < _size3; ++_i7)
            {
              xfer += this->fields[_i7].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Log::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Log");

  xfer += oprot->writeFieldBegin("timestamp", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->timestamp);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("fields", ::apache::thrift::protocol::T_LIST, 2);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->fields.size()));
    std::vector<Tag> ::const_iterator _iter8;
    for (_iter8 = this->fields.begin(); _iter8 != this->fields.end(); ++_iter8)
    {
      xfer += (*_iter8).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Log &a, Log &b) {
  using ::std::swap;
  swap(a.timestamp, b.timestamp);
  swap(a.fields, b.fields);
}

Log::Log(const Log& other9) {
  timestamp = other9.timestamp;
  fields = other9.fields;
}
Log& Log::operator=(const Log& other10) {
  timestamp = other10.timestamp;
  fields = other10.fields;
  return *this;
}

SpanRef::~SpanRef() noexcept {
}


void SpanRef::__set_refType(const SpanRefType::type val) {
  this->refType = val;
}

void SpanRef::__set_traceIdLow(const int64_t val) {
  this->traceIdLow = val;
}

void SpanRef::__set_traceIdHigh(const int64_t val) {
  this->traceIdHigh = val;
}

void SpanRef::__set_spanId(const int64_t val) {
  this->spanId = val;
}

uint32_t SpanRef::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast11;
          xfer += iprot->readI32(ecast11);
          this->refType = (SpanRefType::type)ecast11;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->traceIdLow);
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->traceIdHigh);
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->spanId);
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t SpanRef::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("SpanRef");

  xfer += oprot->writeFieldBegin("refType", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->refType);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("traceIdLow", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->traceIdLow);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("traceIdHigh", ::apache::thrift::protocol::T_I64, 3);
  xfer += oprot->writeI64(this->traceIdHigh);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("spanId", ::apache::thrift::protocol::T_I64, 4);
  xfer += oprot->writeI64(this->spanId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(SpanRef &a, SpanRef &b) {
  using ::std::swap;
  swap(a.refType, b.refType);
  swap(a.traceIdLow, b.traceIdLow);
  swap(a.traceIdHigh, b.traceIdHigh);
  swap(a.spanId, b.spanId);
}

SpanRef::SpanRef(const SpanRef& other12) {
  refType = other12.refType;
  traceIdLow = other12.traceIdLow;
  traceIdHigh = other12.traceIdHigh;
  spanId = other12.spanId;
}
SpanRef& SpanRef::operator=(const SpanRef& other13) {
  refType = other13.refType;
  traceIdLow = other13.traceIdLow;
  traceIdHigh = other13.traceIdHigh;
  spanId = other13.spanId;
  return *this;
}

Span::~Span() noexcept {
}


void Span::__set_traceIdLow(const int64_t val) {
  this->traceIdLow = val;
}

void Span::__set_traceIdHigh(const int64_t val) {
  this->traceIdHigh = val;
}

void Span::__set_spanId(const int64_t val) {
  this->spanId = val;
}

void Span::__set_parentSpanId(const int64_t val) {
  this->parentSpanId = val;
}

void Span::__set_operationName(const std::string& val) {
  this->operationName = val;
}

void Span::__set_references(const std::vector<SpanRef> & val) {
  this->references = val;
__isset.references = true;
}

void Span::__set_flags(const int32_t val) {
  this->flags = val;
}

void Span::__set_startTime(const int64_t val) {
  this->startTime = val;
}

void Span::__set_duration(const int64_t val) {
  this->duration = val;
}

void Span::__set_tags(const std::vector<Tag> & val) {
  this->tags = val;
__isset.tags = true;
}

void Span::__set_logs(const std::vector<Log> & val) {
  this->logs = val;
__isset.logs = true;
}

uint32_t Span::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->traceIdLow);
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->traceIdHigh);
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->spanId);
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->parentSpanId);
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->operationName);
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->references.clear();
            uint32_t _size14;
            ::apache::thrift::protocol::TType _etype17;
            xfer += iprot->readListBegin(_etype17, _size14);
            this->references.resize(_size14);
            uint32_t _i18;
            for (_i18 = 0; _i18 < _size14; ++_i18)
            {
              xfer += this->references[_i18].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.references = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->flags);
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->startTime);
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 9:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->duration);
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 10:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->tags.clear();
            uint32_t _size19;
            ::apache::thrift::protocol::TType _etype22;
            xfer += iprot->readListBegin(_etype22, _size19);
            this->tags.resize(_size19);
            uint32_t _i23;
            for (_i23 = 0; _i23 < _size19; ++_i23)
            {
              xfer += this->tags[_i23].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.tags = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 11:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->logs.clear();
            uint32_t _size24;
            ::apache::thrift::protocol::TType _etype27;
            xfer += iprot->readListBegin(_etype27, _size24);
            this->logs.resize(_size24);
            uint32_t _i28;
            for (_i28 = 0; _i28 < _size24; ++_i28)
            {
              xfer += this->logs[_i28].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.logs = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Span::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Span");

  xfer += oprot->writeFieldBegin("traceIdLow", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->traceIdLow);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("traceIdHigh", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->traceIdHigh);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("spanId", ::apache::thrift::protocol::T_I64, 3);
  xfer += oprot->writeI64(this->spanId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("parentSpanId", ::apache::thrift::protocol::T_I64, 4);
  xfer += oprot->writeI64(this->parentSpanId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("operationName", ::apache::thrift::protocol::T_STRING, 5);
  xfer += oprot->writeString(this->operationName);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.references) {
    xfer += oprot->writeFieldBegin("references", ::apache::thrift::protocol::T_LIST, 6);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->references.size()));
      std::vector<SpanRef> ::const_iterator _iter29;
      for (_iter29 = this->references.begin(); _iter29 != this->references.end(); ++_iter29)
      {
        xfer += (*_iter29).write(oprot);
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldBegin("flags", ::apache::thrift::protocol::T_I32, 7);
  xfer += oprot->writeI32(this->flags);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("startTime", ::apache::thrift::protocol::T_I64, 8);
  xfer += oprot->writeI64(this->startTime);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("duration", ::apache::thrift::protocol::T_I64, 9);
  xfer += oprot->writeI64(this->duration);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.tags) {
    xfer += oprot->writeFieldBegin("tags", ::apache::thrift::protocol::T_LIST, 10);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->tags.size()));
      std::vector<Tag> ::const_iterator _iter30;
      for (_iter30 = this->tags.begin(); _iter30 != this->tags.end(); ++_iter30)
      {
        xfer += (*_iter30).write(oprot);
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.logs) {
    xfer += oprot->writeFieldBegin("logs", ::apache::thrift::protocol::T_LIST, 11);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->logs.size()));
      std::vector<Log> ::const_iterator _iter31;
      for (_iter31 = this->logs.begin(); _iter31 != this->logs.end(); ++_iter31)
      {
        xfer += (*_iter31).write(oprot);
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Span &a, Span &b) {
  using ::std::swap;
  swap(a.traceIdLow, b.traceIdLow);
  swap(a.traceIdHigh, b.traceIdHigh);
  swap(a.spanId, b.spanId);
  swap(a.parentSpanId, b.parentSpanId);
  swap(a.operationName, b.operationName);
  swap(a.references, b.references);
  swap(a.flags, b.flags);
  swap(a.startTime, b.startTime);
  swap(a.duration, b.duration);
  swap(a.tags, b.tags);
  swap(a.logs, b.logs);
  swap(a.__isset, b.__isset);
}

Span::Span(const Span& other32) {
  traceIdLow = other32.traceIdLow;
  traceIdHigh = other32.traceIdHigh;
  spanId = other32.spanId;
  parentSpanId = other32.parentSpanId;
  operationName = other32.operationName;
  references = other32.references;
  flags = other32.flags;
  startTime = other32.startTime;
  duration = other32.duration;
  tags = other32.tags;
  logs = other32.logs;
  __isset = other32.__isset;
}
Span& Span::operator=(const Span& other33) {
  traceIdLow = other33.traceIdLow;
  traceIdHigh = other33.traceIdHigh;
  spanId = other33.spanId;
  parentSpanId = other33.parentSpanId;
  operationName = other33.operationName;
  references = other33.references;
  flags = other33.flags;
  startTime = other33.startTime;
  duration = other33.duration;
  tags = other33.tags;
  logs = other33.logs;
  __isset = other33.__isset;
  return *this;
}

Process::~Process() noexcept {
}


void Process::__set_serviceName(const std::string& val) {
  this->serviceName = val;
}

void Process::__set_tags(const std::vector<Tag> & val) {
  this->tags = val;
__isset.tags = true;
}

uint32_t Process::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->serviceName);
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->tags.clear();
            uint32_t _size34;
            ::apache::thrift::protocol::TType _etype37;
            xfer += iprot->readListBegin(_etype37, _size34);
            this->tags.resize(_size34);
            uint32_t _i38;
            for (_i38 = 0; _i38 < _size34; ++_i38)
            {
              xfer += this->tags[_i38].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.tags = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Process::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Process");

  xfer += oprot->writeFieldBegin("serviceName", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->serviceName);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.tags) {
    xfer += oprot->writeFieldBegin("tags", ::apache::thrift::protocol::T_LIST, 2);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->tags.size()));
      std::vector<Tag> ::const_iterator _iter39;
      for (_iter39 = this->tags.begin(); _iter39 != this->tags.end(); ++_iter39)
      {
        xfer += (*_iter39).write(oprot);
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Process &a, Process &b) {
  using ::std::swap;
  swap(a.serviceName, b.serviceName);
  swap(a.tags, b.tags);
  swap(a.__isset, b.__isset);
}

Process::Process(const Process& other40) {
  serviceName = other40.serviceName;
  tags = other40.tags;
  __isset = other40.__isset;
}
Process& Process::operator=(const Process& other41) {
  serviceName = other41.serviceName;
  tags = other41.tags;
  __isset = other41.__isset;
  return *this;
}

Batch::~Batch() noexcept {
}


void Batch::__set_process(const Process& val) {
  this->process = val;
}

void Batch::__set_spans(const std::vector<Span> & val) {
  this->spans = val;
}

uint32_t Batch::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->process.read(iprot);
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->spans.clear();
            uint32_t _size42;
            ::apache::thrift::protocol::TType _etype45;
            xfer += iprot->readListBegin(_etype45, _size42);
            this->spans.resize(_size42);
            uint32_t _i46;
            for (_i46 = 0; _i46 < _size42; ++_i46)
            {
              xfer += this->spans[_i46].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Batch::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Batch");

  xfer += oprot->writeFieldBegin("process", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->process.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("spans", ::apache::thrift::protocol::T_LIST, 2);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->spans.size()));
    std::vector<Span> ::const_iterator _iter47;
    for (_iter47 = this->spans.begin(); _iter47 != this->spans.end(); ++_iter47)
    {
      xfer += (*_iter47).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Batch &a, Batch &b) {
  using ::std::swap;
  swap(a.process, b.process);
  swap(a.spans, b.spans);
}

Batch::Batch(const Batch& other48) {
  process = other48.process;
  spans = other48.spans;
}
Batch& Batch::operator=(const Batch& other49) {
  process = other49.process;
  spans = other49.spans;
  return *this;
}

}} // namespace
