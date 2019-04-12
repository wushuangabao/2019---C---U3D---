// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msg.proto

#ifndef PROTOBUF_msg_2eproto__INCLUDED
#define PROTOBUF_msg_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace mymsg {
class msg;
class msgDefaultTypeInternal;
extern msgDefaultTypeInternal _msg_default_instance_;
}  // namespace mymsg

namespace mymsg {

namespace protobuf_msg_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_msg_2eproto

enum msg_Type {
  msg_Type_SENDMSG = 0,
  msg_Type_DISCONNECT = 1
};
bool msg_Type_IsValid(int value);
const msg_Type msg_Type_Type_MIN = msg_Type_SENDMSG;
const msg_Type msg_Type_Type_MAX = msg_Type_DISCONNECT;
const int msg_Type_Type_ARRAYSIZE = msg_Type_Type_MAX + 1;

const ::google::protobuf::EnumDescriptor* msg_Type_descriptor();
inline const ::std::string& msg_Type_Name(msg_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    msg_Type_descriptor(), value);
}
inline bool msg_Type_Parse(
    const ::std::string& name, msg_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<msg_Type>(
    msg_Type_descriptor(), name, value);
}
// ===================================================================

class msg : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mymsg.msg) */ {
 public:
  msg();
  virtual ~msg();

  msg(const msg& from);

  inline msg& operator=(const msg& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const msg& default_instance();

  static inline const msg* internal_default_instance() {
    return reinterpret_cast<const msg*>(
               &_msg_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(msg* other);

  // implements Message ----------------------------------------------

  inline msg* New() const PROTOBUF_FINAL { return New(NULL); }

  msg* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const msg& from);
  void MergeFrom(const msg& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(msg* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef msg_Type Type;
  static const Type SENDMSG =
    msg_Type_SENDMSG;
  static const Type DISCONNECT =
    msg_Type_DISCONNECT;
  static inline bool Type_IsValid(int value) {
    return msg_Type_IsValid(value);
  }
  static const Type Type_MIN =
    msg_Type_Type_MIN;
  static const Type Type_MAX =
    msg_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    msg_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return msg_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return msg_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return msg_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required string data = 1;
  bool has_data() const;
  void clear_data();
  static const int kDataFieldNumber = 1;
  const ::std::string& data() const;
  void set_data(const ::std::string& value);
  #if LANG_CXX11
  void set_data(::std::string&& value);
  #endif
  void set_data(const char* value);
  void set_data(const char* value, size_t size);
  ::std::string* mutable_data();
  ::std::string* release_data();
  void set_allocated_data(::std::string* data);

  // required .mymsg.msg.Type type = 2 [default = SENDMSG];
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 2;
  ::mymsg::msg_Type type() const;
  void set_type(::mymsg::msg_Type value);

  // @@protoc_insertion_point(class_scope:mymsg.msg)
 private:
  void set_has_data();
  void clear_has_data();
  void set_has_type();
  void clear_has_type();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr data_;
  int type_;
  friend struct protobuf_msg_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// msg

// required string data = 1;
inline bool msg::has_data() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void msg::set_has_data() {
  _has_bits_[0] |= 0x00000001u;
}
inline void msg::clear_has_data() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void msg::clear_data() {
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_data();
}
inline const ::std::string& msg::data() const {
  // @@protoc_insertion_point(field_get:mymsg.msg.data)
  return data_.GetNoArena();
}
inline void msg::set_data(const ::std::string& value) {
  set_has_data();
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:mymsg.msg.data)
}
#if LANG_CXX11
inline void msg::set_data(::std::string&& value) {
  set_has_data();
  data_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:mymsg.msg.data)
}
#endif
inline void msg::set_data(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_data();
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mymsg.msg.data)
}
inline void msg::set_data(const char* value, size_t size) {
  set_has_data();
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mymsg.msg.data)
}
inline ::std::string* msg::mutable_data() {
  set_has_data();
  // @@protoc_insertion_point(field_mutable:mymsg.msg.data)
  return data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* msg::release_data() {
  // @@protoc_insertion_point(field_release:mymsg.msg.data)
  clear_has_data();
  return data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void msg::set_allocated_data(::std::string* data) {
  if (data != NULL) {
    set_has_data();
  } else {
    clear_has_data();
  }
  data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:mymsg.msg.data)
}

// required .mymsg.msg.Type type = 2 [default = SENDMSG];
inline bool msg::has_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void msg::set_has_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void msg::clear_has_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void msg::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::mymsg::msg_Type msg::type() const {
  // @@protoc_insertion_point(field_get:mymsg.msg.type)
  return static_cast< ::mymsg::msg_Type >(type_);
}
inline void msg::set_type(::mymsg::msg_Type value) {
  assert(::mymsg::msg_Type_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:mymsg.msg.type)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace mymsg

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::mymsg::msg_Type> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::mymsg::msg_Type>() {
  return ::mymsg::msg_Type_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_msg_2eproto__INCLUDED
