// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MachineList.proto
#include "stdafx.h"
#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MachineList.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace YogiFit {

namespace {

const ::google::protobuf::Descriptor* Machine_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Machine_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Machine_MachineType_descriptor_ = NULL;
const ::google::protobuf::Descriptor* MachineList_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MachineList_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MachineList_2eproto() {
  protobuf_AddDesc_MachineList_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MachineList.proto");
  GOOGLE_CHECK(file != NULL);
  Machine_descriptor_ = file->message_type(0);
  static const int Machine_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Machine, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Machine, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Machine, type_),
  };
  Machine_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Machine_descriptor_,
      Machine::default_instance_,
      Machine_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Machine, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Machine, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Machine));
  Machine_MachineType_descriptor_ = Machine_descriptor_->enum_type(0);
  MachineList_descriptor_ = file->message_type(1);
  static const int MachineList_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MachineList, machine_),
  };
  MachineList_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MachineList_descriptor_,
      MachineList::default_instance_,
      MachineList_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MachineList, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MachineList, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MachineList));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MachineList_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Machine_descriptor_, &Machine::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MachineList_descriptor_, &MachineList::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MachineList_2eproto() {
  delete Machine::default_instance_;
  delete Machine_reflection_;
  delete MachineList::default_instance_;
  delete MachineList_reflection_;
}

void protobuf_AddDesc_MachineList_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\021MachineList.proto\022\007YogiFit\"}\n\007Machine\022"
    "\014\n\004name\030\001 \002(\t\022\n\n\002id\030\002 \002(\005\022*\n\004type\030\004 \002(\0162"
    "\034.YogiFit.Machine.MachineType\",\n\013Machine"
    "Type\022\016\n\nBENCHPRESS\020\000\022\r\n\tTREADMILL\020\001\"0\n\013M"
    "achineList\022!\n\007machine\030\001 \003(\0132\020.YogiFit.Ma"
    "chine", 205);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MachineList.proto", &protobuf_RegisterTypes);
  Machine::default_instance_ = new Machine();
  MachineList::default_instance_ = new MachineList();
  Machine::default_instance_->InitAsDefaultInstance();
  MachineList::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MachineList_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MachineList_2eproto {
  StaticDescriptorInitializer_MachineList_2eproto() {
    protobuf_AddDesc_MachineList_2eproto();
  }
} static_descriptor_initializer_MachineList_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* Machine_MachineType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Machine_MachineType_descriptor_;
}
bool Machine_MachineType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Machine_MachineType Machine::BENCHPRESS;
const Machine_MachineType Machine::TREADMILL;
const Machine_MachineType Machine::MachineType_MIN;
const Machine_MachineType Machine::MachineType_MAX;
const int Machine::MachineType_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int Machine::kNameFieldNumber;
const int Machine::kIdFieldNumber;
const int Machine::kTypeFieldNumber;
#endif  // !_MSC_VER

Machine::Machine()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:YogiFit.Machine)
}

void Machine::InitAsDefaultInstance() {
}

Machine::Machine(const Machine& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:YogiFit.Machine)
}

void Machine::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  id_ = 0;
  type_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Machine::~Machine() {
  // @@protoc_insertion_point(destructor:YogiFit.Machine)
  SharedDtor();
}

void Machine::SharedDtor() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (this != default_instance_) {
  }
}

void Machine::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Machine::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Machine_descriptor_;
}

const Machine& Machine::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MachineList_2eproto();
  return *default_instance_;
}

Machine* Machine::default_instance_ = NULL;

Machine* Machine::New() const {
  return new Machine;
}

void Machine::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<Machine*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 7) {
    ZR_(id_, type_);
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        name_->clear();
      }
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Machine::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:YogiFit.Machine)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_id;
        break;
      }

      // required int32 id = 2;
      case 2: {
        if (tag == 16) {
         parse_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_type;
        break;
      }

      // required .YogiFit.Machine.MachineType type = 4;
      case 4: {
        if (tag == 32) {
         parse_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::YogiFit::Machine_MachineType_IsValid(value)) {
            set_type(static_cast< ::YogiFit::Machine_MachineType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(4, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:YogiFit.Machine)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:YogiFit.Machine)
  return false;
#undef DO_
}

void Machine::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:YogiFit.Machine)
  // required string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // required int32 id = 2;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->id(), output);
  }

  // required .YogiFit.Machine.MachineType type = 4;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      4, this->type(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:YogiFit.Machine)
}

::google::protobuf::uint8* Machine::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:YogiFit.Machine)
  // required string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // required int32 id = 2;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->id(), target);
  }

  // required .YogiFit.Machine.MachineType type = 4;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      4, this->type(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:YogiFit.Machine)
  return target;
}

int Machine::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string name = 1;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // required int32 id = 2;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // required .YogiFit.Machine.MachineType type = 4;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Machine::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Machine* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Machine*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Machine::MergeFrom(const Machine& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_name()) {
      set_name(from.name());
    }
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_type()) {
      set_type(from.type());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Machine::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Machine::CopyFrom(const Machine& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Machine::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void Machine::Swap(Machine* other) {
  if (other != this) {
    std::swap(name_, other->name_);
    std::swap(id_, other->id_);
    std::swap(type_, other->type_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Machine::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Machine_descriptor_;
  metadata.reflection = Machine_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int MachineList::kMachineFieldNumber;
#endif  // !_MSC_VER

MachineList::MachineList()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:YogiFit.MachineList)
}

void MachineList::InitAsDefaultInstance() {
}

MachineList::MachineList(const MachineList& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:YogiFit.MachineList)
}

void MachineList::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MachineList::~MachineList() {
  // @@protoc_insertion_point(destructor:YogiFit.MachineList)
  SharedDtor();
}

void MachineList::SharedDtor() {
  if (this != default_instance_) {
  }
}

void MachineList::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MachineList::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MachineList_descriptor_;
}

const MachineList& MachineList::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MachineList_2eproto();
  return *default_instance_;
}

MachineList* MachineList::default_instance_ = NULL;

MachineList* MachineList::New() const {
  return new MachineList;
}

void MachineList::Clear() {
  machine_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MachineList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:YogiFit.MachineList)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .YogiFit.Machine machine = 1;
      case 1: {
        if (tag == 10) {
         parse_machine:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_machine()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_machine;
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:YogiFit.MachineList)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:YogiFit.MachineList)
  return false;
#undef DO_
}

void MachineList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:YogiFit.MachineList)
  // repeated .YogiFit.Machine machine = 1;
  for (int i = 0; i < this->machine_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->machine(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:YogiFit.MachineList)
}

::google::protobuf::uint8* MachineList::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:YogiFit.MachineList)
  // repeated .YogiFit.Machine machine = 1;
  for (int i = 0; i < this->machine_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->machine(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:YogiFit.MachineList)
  return target;
}

int MachineList::ByteSize() const {
  int total_size = 0;

  // repeated .YogiFit.Machine machine = 1;
  total_size += 1 * this->machine_size();
  for (int i = 0; i < this->machine_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->machine(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MachineList::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MachineList* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MachineList*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MachineList::MergeFrom(const MachineList& from) {
  GOOGLE_CHECK_NE(&from, this);
  machine_.MergeFrom(from.machine_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MachineList::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MachineList::CopyFrom(const MachineList& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MachineList::IsInitialized() const {

  if (!::google::protobuf::internal::AllAreInitialized(this->machine())) return false;
  return true;
}

void MachineList::Swap(MachineList* other) {
  if (other != this) {
    machine_.Swap(&other->machine_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MachineList::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MachineList_descriptor_;
  metadata.reflection = MachineList_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace YogiFit

// @@protoc_insertion_point(global_scope)
