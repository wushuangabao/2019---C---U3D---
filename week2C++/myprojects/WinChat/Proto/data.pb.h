// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: data.proto

#ifndef PROTOBUF_data_2eproto__INCLUDED
#define PROTOBUF_data_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_data_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsdataImpl();
void InitDefaultsdata();
inline void InitDefaults() {
  InitDefaultsdata();
}
}  // namespace protobuf_data_2eproto
namespace chat {
class data;
class dataDefaultTypeInternal;
extern dataDefaultTypeInternal _data_default_instance_;
}  // namespace chat
namespace chat {

// ===================================================================

class data : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:chat.data) */ {
 public:
  data();
  virtual ~data();

  data(const data& from);

  inline data& operator=(const data& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  data(data&& from) noexcept
    : data() {
    *this = ::std::move(from);
  }

  inline data& operator=(data&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const data& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const data* internal_default_instance() {
    return reinterpret_cast<const data*>(
               &_data_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(data* other);
  friend void swap(data& a, data& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline data* New() const PROTOBUF_FINAL { return New(NULL); }

  data* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const data& from);
  void MergeFrom(const data& from);
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
  void InternalSwap(data* other);
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

  // accessors -------------------------------------------------------

  // repeated bytes nameinnumber = 1;
  int nameinnumber_size() const;
  void clear_nameinnumber();
  static const int kNameinnumberFieldNumber = 1;
  const ::std::string& nameinnumber(int index) const;
  ::std::string* mutable_nameinnumber(int index);
  void set_nameinnumber(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_nameinnumber(int index, ::std::string&& value);
  #endif
  void set_nameinnumber(int index, const char* value);
  void set_nameinnumber(int index, const void* value, size_t size);
  ::std::string* add_nameinnumber();
  void add_nameinnumber(const ::std::string& value);
  #if LANG_CXX11
  void add_nameinnumber(::std::string&& value);
  #endif
  void add_nameinnumber(const char* value);
  void add_nameinnumber(const void* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& nameinnumber() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_nameinnumber();

  // optional bytes name = 2;
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const void* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional bytes str = 3;
  bool has_str() const;
  void clear_str();
  static const int kStrFieldNumber = 3;
  const ::std::string& str() const;
  void set_str(const ::std::string& value);
  #if LANG_CXX11
  void set_str(::std::string&& value);
  #endif
  void set_str(const char* value);
  void set_str(const void* value, size_t size);
  ::std::string* mutable_str();
  ::std::string* release_str();
  void set_allocated_str(::std::string* str);

  // optional bytes ins = 4;
  bool has_ins() const;
  void clear_ins();
  static const int kInsFieldNumber = 4;
  const ::std::string& ins() const;
  void set_ins(const ::std::string& value);
  #if LANG_CXX11
  void set_ins(::std::string&& value);
  #endif
  void set_ins(const char* value);
  void set_ins(const void* value, size_t size);
  ::std::string* mutable_ins();
  ::std::string* release_ins();
  void set_allocated_ins(::std::string* ins);

  // @@protoc_insertion_point(class_scope:chat.data)
 private:
  void set_has_name();
  void clear_has_name();
  void set_has_str();
  void clear_has_str();
  void set_has_ins();
  void clear_has_ins();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::std::string> nameinnumber_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr str_;
  ::google::protobuf::internal::ArenaStringPtr ins_;
  friend struct ::protobuf_data_2eproto::TableStruct;
  friend void ::protobuf_data_2eproto::InitDefaultsdataImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// data

// repeated bytes nameinnumber = 1;
inline int data::nameinnumber_size() const {
  return nameinnumber_.size();
}
inline void data::clear_nameinnumber() {
  nameinnumber_.Clear();
}
inline const ::std::string& data::nameinnumber(int index) const {
  // @@protoc_insertion_point(field_get:chat.data.nameinnumber)
  return nameinnumber_.Get(index);
}
inline ::std::string* data::mutable_nameinnumber(int index) {
  // @@protoc_insertion_point(field_mutable:chat.data.nameinnumber)
  return nameinnumber_.Mutable(index);
}
inline void data::set_nameinnumber(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:chat.data.nameinnumber)
  nameinnumber_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void data::set_nameinnumber(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:chat.data.nameinnumber)
  nameinnumber_.Mutable(index)->assign(std::move(value));
}
#endif
inline void data::set_nameinnumber(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  nameinnumber_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:chat.data.nameinnumber)
}
inline void data::set_nameinnumber(int index, const void* value, size_t size) {
  nameinnumber_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:chat.data.nameinnumber)
}
inline ::std::string* data::add_nameinnumber() {
  // @@protoc_insertion_point(field_add_mutable:chat.data.nameinnumber)
  return nameinnumber_.Add();
}
inline void data::add_nameinnumber(const ::std::string& value) {
  nameinnumber_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:chat.data.nameinnumber)
}
#if LANG_CXX11
inline void data::add_nameinnumber(::std::string&& value) {
  nameinnumber_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:chat.data.nameinnumber)
}
#endif
inline void data::add_nameinnumber(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  nameinnumber_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:chat.data.nameinnumber)
}
inline void data::add_nameinnumber(const void* value, size_t size) {
  nameinnumber_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:chat.data.nameinnumber)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
data::nameinnumber() const {
  // @@protoc_insertion_point(field_list:chat.data.nameinnumber)
  return nameinnumber_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
data::mutable_nameinnumber() {
  // @@protoc_insertion_point(field_mutable_list:chat.data.nameinnumber)
  return &nameinnumber_;
}

// optional bytes name = 2;
inline bool data::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void data::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void data::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void data::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
inline const ::std::string& data::name() const {
  // @@protoc_insertion_point(field_get:chat.data.name)
  return name_.GetNoArena();
}
inline void data::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:chat.data.name)
}
#if LANG_CXX11
inline void data::set_name(::std::string&& value) {
  set_has_name();
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:chat.data.name)
}
#endif
inline void data::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:chat.data.name)
}
inline void data::set_name(const void* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:chat.data.name)
}
inline ::std::string* data::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:chat.data.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* data::release_name() {
  // @@protoc_insertion_point(field_release:chat.data.name)
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void data::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:chat.data.name)
}

// optional bytes str = 3;
inline bool data::has_str() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void data::set_has_str() {
  _has_bits_[0] |= 0x00000002u;
}
inline void data::clear_has_str() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void data::clear_str() {
  str_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_str();
}
inline const ::std::string& data::str() const {
  // @@protoc_insertion_point(field_get:chat.data.str)
  return str_.GetNoArena();
}
inline void data::set_str(const ::std::string& value) {
  set_has_str();
  str_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:chat.data.str)
}
#if LANG_CXX11
inline void data::set_str(::std::string&& value) {
  set_has_str();
  str_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:chat.data.str)
}
#endif
inline void data::set_str(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_str();
  str_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:chat.data.str)
}
inline void data::set_str(const void* value, size_t size) {
  set_has_str();
  str_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:chat.data.str)
}
inline ::std::string* data::mutable_str() {
  set_has_str();
  // @@protoc_insertion_point(field_mutable:chat.data.str)
  return str_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* data::release_str() {
  // @@protoc_insertion_point(field_release:chat.data.str)
  clear_has_str();
  return str_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void data::set_allocated_str(::std::string* str) {
  if (str != NULL) {
    set_has_str();
  } else {
    clear_has_str();
  }
  str_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), str);
  // @@protoc_insertion_point(field_set_allocated:chat.data.str)
}

// optional bytes ins = 4;
inline bool data::has_ins() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void data::set_has_ins() {
  _has_bits_[0] |= 0x00000004u;
}
inline void data::clear_has_ins() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void data::clear_ins() {
  ins_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_ins();
}
inline const ::std::string& data::ins() const {
  // @@protoc_insertion_point(field_get:chat.data.ins)
  return ins_.GetNoArena();
}
inline void data::set_ins(const ::std::string& value) {
  set_has_ins();
  ins_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:chat.data.ins)
}
#if LANG_CXX11
inline void data::set_ins(::std::string&& value) {
  set_has_ins();
  ins_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:chat.data.ins)
}
#endif
inline void data::set_ins(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_ins();
  ins_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:chat.data.ins)
}
inline void data::set_ins(const void* value, size_t size) {
  set_has_ins();
  ins_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:chat.data.ins)
}
inline ::std::string* data::mutable_ins() {
  set_has_ins();
  // @@protoc_insertion_point(field_mutable:chat.data.ins)
  return ins_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* data::release_ins() {
  // @@protoc_insertion_point(field_release:chat.data.ins)
  clear_has_ins();
  return ins_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void data::set_allocated_ins(::std::string* ins) {
  if (ins != NULL) {
    set_has_ins();
  } else {
    clear_has_ins();
  }
  ins_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ins);
  // @@protoc_insertion_point(field_set_allocated:chat.data.ins)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace chat

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_data_2eproto__INCLUDED
