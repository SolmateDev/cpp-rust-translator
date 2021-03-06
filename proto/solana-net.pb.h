// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/solana-net.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2fsolana_2dnet_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2fsolana_2dnet_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019003 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2fsolana_2dnet_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2fsolana_2dnet_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fsolana_2dnet_2eproto;
namespace solananet {
class SendBatchRequest;
struct SendBatchRequestDefaultTypeInternal;
extern SendBatchRequestDefaultTypeInternal _SendBatchRequest_default_instance_;
class SendBatchResponse;
struct SendBatchResponseDefaultTypeInternal;
extern SendBatchResponseDefaultTypeInternal _SendBatchResponse_default_instance_;
}  // namespace solananet
PROTOBUF_NAMESPACE_OPEN
template<> ::solananet::SendBatchRequest* Arena::CreateMaybeMessage<::solananet::SendBatchRequest>(Arena*);
template<> ::solananet::SendBatchResponse* Arena::CreateMaybeMessage<::solananet::SendBatchResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace solananet {

enum ConfirmationLevel : int {
  PROCESSED = 0,
  CONFIRMED = 1,
  FINALIZED = 2,
  ConfirmationLevel_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  ConfirmationLevel_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool ConfirmationLevel_IsValid(int value);
constexpr ConfirmationLevel ConfirmationLevel_MIN = PROCESSED;
constexpr ConfirmationLevel ConfirmationLevel_MAX = FINALIZED;
constexpr int ConfirmationLevel_ARRAYSIZE = ConfirmationLevel_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ConfirmationLevel_descriptor();
template<typename T>
inline const std::string& ConfirmationLevel_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ConfirmationLevel>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ConfirmationLevel_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ConfirmationLevel_descriptor(), enum_t_value);
}
inline bool ConfirmationLevel_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ConfirmationLevel* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ConfirmationLevel>(
    ConfirmationLevel_descriptor(), name, value);
}
// ===================================================================

class SendBatchRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:solananet.SendBatchRequest) */ {
 public:
  inline SendBatchRequest() : SendBatchRequest(nullptr) {}
  ~SendBatchRequest() override;
  explicit constexpr SendBatchRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SendBatchRequest(const SendBatchRequest& from);
  SendBatchRequest(SendBatchRequest&& from) noexcept
    : SendBatchRequest() {
    *this = ::std::move(from);
  }

  inline SendBatchRequest& operator=(const SendBatchRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline SendBatchRequest& operator=(SendBatchRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const SendBatchRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const SendBatchRequest* internal_default_instance() {
    return reinterpret_cast<const SendBatchRequest*>(
               &_SendBatchRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SendBatchRequest& a, SendBatchRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(SendBatchRequest* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SendBatchRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SendBatchRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SendBatchRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SendBatchRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const SendBatchRequest& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SendBatchRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "solananet.SendBatchRequest";
  }
  protected:
  explicit SendBatchRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTxFieldNumber = 1,
    kConfirmationLevelFieldNumber = 2,
  };
  // repeated bytes tx = 1;
  int tx_size() const;
  private:
  int _internal_tx_size() const;
  public:
  void clear_tx();
  const std::string& tx(int index) const;
  std::string* mutable_tx(int index);
  void set_tx(int index, const std::string& value);
  void set_tx(int index, std::string&& value);
  void set_tx(int index, const char* value);
  void set_tx(int index, const void* value, size_t size);
  std::string* add_tx();
  void add_tx(const std::string& value);
  void add_tx(std::string&& value);
  void add_tx(const char* value);
  void add_tx(const void* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& tx() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_tx();
  private:
  const std::string& _internal_tx(int index) const;
  std::string* _internal_add_tx();
  public:

  // .solananet.ConfirmationLevel confirmation_level = 2;
  void clear_confirmation_level();
  ::solananet::ConfirmationLevel confirmation_level() const;
  void set_confirmation_level(::solananet::ConfirmationLevel value);
  private:
  ::solananet::ConfirmationLevel _internal_confirmation_level() const;
  void _internal_set_confirmation_level(::solananet::ConfirmationLevel value);
  public:

  // @@protoc_insertion_point(class_scope:solananet.SendBatchRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> tx_;
  int confirmation_level_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2fsolana_2dnet_2eproto;
};
// -------------------------------------------------------------------

class SendBatchResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:solananet.SendBatchResponse) */ {
 public:
  inline SendBatchResponse() : SendBatchResponse(nullptr) {}
  ~SendBatchResponse() override;
  explicit constexpr SendBatchResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SendBatchResponse(const SendBatchResponse& from);
  SendBatchResponse(SendBatchResponse&& from) noexcept
    : SendBatchResponse() {
    *this = ::std::move(from);
  }

  inline SendBatchResponse& operator=(const SendBatchResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline SendBatchResponse& operator=(SendBatchResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const SendBatchResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const SendBatchResponse* internal_default_instance() {
    return reinterpret_cast<const SendBatchResponse*>(
               &_SendBatchResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(SendBatchResponse& a, SendBatchResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(SendBatchResponse* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SendBatchResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SendBatchResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SendBatchResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SendBatchResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const SendBatchResponse& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SendBatchResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "solananet.SendBatchResponse";
  }
  protected:
  explicit SendBatchResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSignatureFieldNumber = 1,
  };
  // repeated bytes signature = 1;
  int signature_size() const;
  private:
  int _internal_signature_size() const;
  public:
  void clear_signature();
  const std::string& signature(int index) const;
  std::string* mutable_signature(int index);
  void set_signature(int index, const std::string& value);
  void set_signature(int index, std::string&& value);
  void set_signature(int index, const char* value);
  void set_signature(int index, const void* value, size_t size);
  std::string* add_signature();
  void add_signature(const std::string& value);
  void add_signature(std::string&& value);
  void add_signature(const char* value);
  void add_signature(const void* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& signature() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_signature();
  private:
  const std::string& _internal_signature(int index) const;
  std::string* _internal_add_signature();
  public:

  // @@protoc_insertion_point(class_scope:solananet.SendBatchResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> signature_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2fsolana_2dnet_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SendBatchRequest

// repeated bytes tx = 1;
inline int SendBatchRequest::_internal_tx_size() const {
  return tx_.size();
}
inline int SendBatchRequest::tx_size() const {
  return _internal_tx_size();
}
inline void SendBatchRequest::clear_tx() {
  tx_.Clear();
}
inline std::string* SendBatchRequest::add_tx() {
  std::string* _s = _internal_add_tx();
  // @@protoc_insertion_point(field_add_mutable:solananet.SendBatchRequest.tx)
  return _s;
}
inline const std::string& SendBatchRequest::_internal_tx(int index) const {
  return tx_.Get(index);
}
inline const std::string& SendBatchRequest::tx(int index) const {
  // @@protoc_insertion_point(field_get:solananet.SendBatchRequest.tx)
  return _internal_tx(index);
}
inline std::string* SendBatchRequest::mutable_tx(int index) {
  // @@protoc_insertion_point(field_mutable:solananet.SendBatchRequest.tx)
  return tx_.Mutable(index);
}
inline void SendBatchRequest::set_tx(int index, const std::string& value) {
  tx_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:solananet.SendBatchRequest.tx)
}
inline void SendBatchRequest::set_tx(int index, std::string&& value) {
  tx_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:solananet.SendBatchRequest.tx)
}
inline void SendBatchRequest::set_tx(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  tx_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:solananet.SendBatchRequest.tx)
}
inline void SendBatchRequest::set_tx(int index, const void* value, size_t size) {
  tx_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:solananet.SendBatchRequest.tx)
}
inline std::string* SendBatchRequest::_internal_add_tx() {
  return tx_.Add();
}
inline void SendBatchRequest::add_tx(const std::string& value) {
  tx_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:solananet.SendBatchRequest.tx)
}
inline void SendBatchRequest::add_tx(std::string&& value) {
  tx_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:solananet.SendBatchRequest.tx)
}
inline void SendBatchRequest::add_tx(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  tx_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:solananet.SendBatchRequest.tx)
}
inline void SendBatchRequest::add_tx(const void* value, size_t size) {
  tx_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:solananet.SendBatchRequest.tx)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
SendBatchRequest::tx() const {
  // @@protoc_insertion_point(field_list:solananet.SendBatchRequest.tx)
  return tx_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
SendBatchRequest::mutable_tx() {
  // @@protoc_insertion_point(field_mutable_list:solananet.SendBatchRequest.tx)
  return &tx_;
}

// .solananet.ConfirmationLevel confirmation_level = 2;
inline void SendBatchRequest::clear_confirmation_level() {
  confirmation_level_ = 0;
}
inline ::solananet::ConfirmationLevel SendBatchRequest::_internal_confirmation_level() const {
  return static_cast< ::solananet::ConfirmationLevel >(confirmation_level_);
}
inline ::solananet::ConfirmationLevel SendBatchRequest::confirmation_level() const {
  // @@protoc_insertion_point(field_get:solananet.SendBatchRequest.confirmation_level)
  return _internal_confirmation_level();
}
inline void SendBatchRequest::_internal_set_confirmation_level(::solananet::ConfirmationLevel value) {
  
  confirmation_level_ = value;
}
inline void SendBatchRequest::set_confirmation_level(::solananet::ConfirmationLevel value) {
  _internal_set_confirmation_level(value);
  // @@protoc_insertion_point(field_set:solananet.SendBatchRequest.confirmation_level)
}

// -------------------------------------------------------------------

// SendBatchResponse

// repeated bytes signature = 1;
inline int SendBatchResponse::_internal_signature_size() const {
  return signature_.size();
}
inline int SendBatchResponse::signature_size() const {
  return _internal_signature_size();
}
inline void SendBatchResponse::clear_signature() {
  signature_.Clear();
}
inline std::string* SendBatchResponse::add_signature() {
  std::string* _s = _internal_add_signature();
  // @@protoc_insertion_point(field_add_mutable:solananet.SendBatchResponse.signature)
  return _s;
}
inline const std::string& SendBatchResponse::_internal_signature(int index) const {
  return signature_.Get(index);
}
inline const std::string& SendBatchResponse::signature(int index) const {
  // @@protoc_insertion_point(field_get:solananet.SendBatchResponse.signature)
  return _internal_signature(index);
}
inline std::string* SendBatchResponse::mutable_signature(int index) {
  // @@protoc_insertion_point(field_mutable:solananet.SendBatchResponse.signature)
  return signature_.Mutable(index);
}
inline void SendBatchResponse::set_signature(int index, const std::string& value) {
  signature_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:solananet.SendBatchResponse.signature)
}
inline void SendBatchResponse::set_signature(int index, std::string&& value) {
  signature_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:solananet.SendBatchResponse.signature)
}
inline void SendBatchResponse::set_signature(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  signature_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:solananet.SendBatchResponse.signature)
}
inline void SendBatchResponse::set_signature(int index, const void* value, size_t size) {
  signature_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:solananet.SendBatchResponse.signature)
}
inline std::string* SendBatchResponse::_internal_add_signature() {
  return signature_.Add();
}
inline void SendBatchResponse::add_signature(const std::string& value) {
  signature_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:solananet.SendBatchResponse.signature)
}
inline void SendBatchResponse::add_signature(std::string&& value) {
  signature_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:solananet.SendBatchResponse.signature)
}
inline void SendBatchResponse::add_signature(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  signature_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:solananet.SendBatchResponse.signature)
}
inline void SendBatchResponse::add_signature(const void* value, size_t size) {
  signature_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:solananet.SendBatchResponse.signature)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
SendBatchResponse::signature() const {
  // @@protoc_insertion_point(field_list:solananet.SendBatchResponse.signature)
  return signature_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
SendBatchResponse::mutable_signature() {
  // @@protoc_insertion_point(field_mutable_list:solananet.SendBatchResponse.signature)
  return &signature_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace solananet

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::solananet::ConfirmationLevel> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::solananet::ConfirmationLevel>() {
  return ::solananet::ConfirmationLevel_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2fsolana_2dnet_2eproto
