// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: data.proto

#ifndef PROTOBUF_data_2eproto__INCLUDED
#define PROTOBUF_data_2eproto__INCLUDED

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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)
namespace TuriCreate {
namespace Annotation {
namespace Specification {
class Data;
class DataDefaultTypeInternal;
extern DataDefaultTypeInternal _Data_default_instance_;
class Datum;
class DatumDefaultTypeInternal;
extern DatumDefaultTypeInternal _Datum_default_instance_;
class ImageDatum;
class ImageDatumDefaultTypeInternal;
extern ImageDatumDefaultTypeInternal _ImageDatum_default_instance_;
class TextDatum;
class TextDatumDefaultTypeInternal;
extern TextDatumDefaultTypeInternal _TextDatum_default_instance_;
}  // namespace Specification
}  // namespace Annotation
}  // namespace TuriCreate

namespace TuriCreate {
namespace Annotation {
namespace Specification {

namespace protobuf_data_2eproto {
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
}  // namespace protobuf_data_2eproto

// ===================================================================

class ImageDatum : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:TuriCreate.Annotation.Specification.ImageDatum) */ {
 public:
  ImageDatum();
  virtual ~ImageDatum();

  ImageDatum(const ImageDatum& from);

  inline ImageDatum& operator=(const ImageDatum& from) {
    CopyFrom(from);
    return *this;
  }

  static const ImageDatum& default_instance();

  static inline const ImageDatum* internal_default_instance() {
    return reinterpret_cast<const ImageDatum*>(
               &_ImageDatum_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(ImageDatum* other);

  // implements Message ----------------------------------------------

  inline ImageDatum* New() const PROTOBUF_FINAL { return New(NULL); }

  ImageDatum* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const ImageDatum& from);
  void MergeFrom(const ImageDatum& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ImageDatum* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // bytes imgData = 10;
  void clear_imgdata();
  static const int kImgDataFieldNumber = 10;
  const ::std::string& imgdata() const;
  void set_imgdata(const ::std::string& value);
  #if LANG_CXX11
  void set_imgdata(::std::string&& value);
  #endif
  void set_imgdata(const char* value);
  void set_imgdata(const void* value, size_t size);
  ::std::string* mutable_imgdata();
  ::std::string* release_imgdata();
  void set_allocated_imgdata(::std::string* imgdata);

  // int32 width = 1;
  void clear_width();
  static const int kWidthFieldNumber = 1;
  ::google::protobuf::int32 width() const;
  void set_width(::google::protobuf::int32 value);

  // int32 height = 2;
  void clear_height();
  static const int kHeightFieldNumber = 2;
  ::google::protobuf::int32 height() const;
  void set_height(::google::protobuf::int32 value);

  // int32 channels = 3;
  void clear_channels();
  static const int kChannelsFieldNumber = 3;
  ::google::protobuf::int32 channels() const;
  void set_channels(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:TuriCreate.Annotation.Specification.ImageDatum)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr imgdata_;
  ::google::protobuf::int32 width_;
  ::google::protobuf::int32 height_;
  ::google::protobuf::int32 channels_;
  mutable int _cached_size_;
  friend struct protobuf_data_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class TextDatum : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:TuriCreate.Annotation.Specification.TextDatum) */ {
 public:
  TextDatum();
  virtual ~TextDatum();

  TextDatum(const TextDatum& from);

  inline TextDatum& operator=(const TextDatum& from) {
    CopyFrom(from);
    return *this;
  }

  static const TextDatum& default_instance();

  static inline const TextDatum* internal_default_instance() {
    return reinterpret_cast<const TextDatum*>(
               &_TextDatum_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(TextDatum* other);

  // implements Message ----------------------------------------------

  inline TextDatum* New() const PROTOBUF_FINAL { return New(NULL); }

  TextDatum* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const TextDatum& from);
  void MergeFrom(const TextDatum& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(TextDatum* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string text = 1;
  void clear_text();
  static const int kTextFieldNumber = 1;
  const ::std::string& text() const;
  void set_text(const ::std::string& value);
  #if LANG_CXX11
  void set_text(::std::string&& value);
  #endif
  void set_text(const char* value);
  void set_text(const char* value, size_t size);
  ::std::string* mutable_text();
  ::std::string* release_text();
  void set_allocated_text(::std::string* text);

  // @@protoc_insertion_point(class_scope:TuriCreate.Annotation.Specification.TextDatum)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr text_;
  mutable int _cached_size_;
  friend struct protobuf_data_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Datum : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:TuriCreate.Annotation.Specification.Datum) */ {
 public:
  Datum();
  virtual ~Datum();

  Datum(const Datum& from);

  inline Datum& operator=(const Datum& from) {
    CopyFrom(from);
    return *this;
  }

  static const Datum& default_instance();

  static inline const Datum* internal_default_instance() {
    return reinterpret_cast<const Datum*>(
               &_Datum_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(Datum* other);

  // implements Message ----------------------------------------------

  inline Datum* New() const PROTOBUF_FINAL { return New(NULL); }

  Datum* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const Datum& from);
  void MergeFrom(const Datum& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Datum* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .TuriCreate.Annotation.Specification.ImageDatum images = 10;
  int images_size() const;
  void clear_images();
  static const int kImagesFieldNumber = 10;
  const ::TuriCreate::Annotation::Specification::ImageDatum& images(int index) const;
  ::TuriCreate::Annotation::Specification::ImageDatum* mutable_images(int index);
  ::TuriCreate::Annotation::Specification::ImageDatum* add_images();
  ::google::protobuf::RepeatedPtrField< ::TuriCreate::Annotation::Specification::ImageDatum >*
      mutable_images();
  const ::google::protobuf::RepeatedPtrField< ::TuriCreate::Annotation::Specification::ImageDatum >&
      images() const;

  // repeated .TuriCreate.Annotation.Specification.TextDatum text = 20;
  int text_size() const;
  void clear_text();
  static const int kTextFieldNumber = 20;
  const ::TuriCreate::Annotation::Specification::TextDatum& text(int index) const;
  ::TuriCreate::Annotation::Specification::TextDatum* mutable_text(int index);
  ::TuriCreate::Annotation::Specification::TextDatum* add_text();
  ::google::protobuf::RepeatedPtrField< ::TuriCreate::Annotation::Specification::TextDatum >*
      mutable_text();
  const ::google::protobuf::RepeatedPtrField< ::TuriCreate::Annotation::Specification::TextDatum >&
      text() const;

  // int64 rowIndex = 1;
  void clear_rowindex();
  static const int kRowIndexFieldNumber = 1;
  ::google::protobuf::int64 rowindex() const;
  void set_rowindex(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:TuriCreate.Annotation.Specification.Datum)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::TuriCreate::Annotation::Specification::ImageDatum > images_;
  ::google::protobuf::RepeatedPtrField< ::TuriCreate::Annotation::Specification::TextDatum > text_;
  ::google::protobuf::int64 rowindex_;
  mutable int _cached_size_;
  friend struct protobuf_data_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Data : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:TuriCreate.Annotation.Specification.Data) */ {
 public:
  Data();
  virtual ~Data();

  Data(const Data& from);

  inline Data& operator=(const Data& from) {
    CopyFrom(from);
    return *this;
  }

  static const Data& default_instance();

  static inline const Data* internal_default_instance() {
    return reinterpret_cast<const Data*>(
               &_Data_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(Data* other);

  // implements Message ----------------------------------------------

  inline Data* New() const PROTOBUF_FINAL { return New(NULL); }

  Data* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const Data& from);
  void MergeFrom(const Data& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Data* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .TuriCreate.Annotation.Specification.Datum data = 1;
  int data_size() const;
  void clear_data();
  static const int kDataFieldNumber = 1;
  const ::TuriCreate::Annotation::Specification::Datum& data(int index) const;
  ::TuriCreate::Annotation::Specification::Datum* mutable_data(int index);
  ::TuriCreate::Annotation::Specification::Datum* add_data();
  ::google::protobuf::RepeatedPtrField< ::TuriCreate::Annotation::Specification::Datum >*
      mutable_data();
  const ::google::protobuf::RepeatedPtrField< ::TuriCreate::Annotation::Specification::Datum >&
      data() const;

  // @@protoc_insertion_point(class_scope:TuriCreate.Annotation.Specification.Data)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::TuriCreate::Annotation::Specification::Datum > data_;
  mutable int _cached_size_;
  friend struct protobuf_data_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ImageDatum

// int32 width = 1;
inline void ImageDatum::clear_width() {
  width_ = 0;
}
inline ::google::protobuf::int32 ImageDatum::width() const {
  // @@protoc_insertion_point(field_get:TuriCreate.Annotation.Specification.ImageDatum.width)
  return width_;
}
inline void ImageDatum::set_width(::google::protobuf::int32 value) {
  
  width_ = value;
  // @@protoc_insertion_point(field_set:TuriCreate.Annotation.Specification.ImageDatum.width)
}

// int32 height = 2;
inline void ImageDatum::clear_height() {
  height_ = 0;
}
inline ::google::protobuf::int32 ImageDatum::height() const {
  // @@protoc_insertion_point(field_get:TuriCreate.Annotation.Specification.ImageDatum.height)
  return height_;
}
inline void ImageDatum::set_height(::google::protobuf::int32 value) {
  
  height_ = value;
  // @@protoc_insertion_point(field_set:TuriCreate.Annotation.Specification.ImageDatum.height)
}

// int32 channels = 3;
inline void ImageDatum::clear_channels() {
  channels_ = 0;
}
inline ::google::protobuf::int32 ImageDatum::channels() const {
  // @@protoc_insertion_point(field_get:TuriCreate.Annotation.Specification.ImageDatum.channels)
  return channels_;
}
inline void ImageDatum::set_channels(::google::protobuf::int32 value) {
  
  channels_ = value;
  // @@protoc_insertion_point(field_set:TuriCreate.Annotation.Specification.ImageDatum.channels)
}

// bytes imgData = 10;
inline void ImageDatum::clear_imgdata() {
  imgdata_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ImageDatum::imgdata() const {
  // @@protoc_insertion_point(field_get:TuriCreate.Annotation.Specification.ImageDatum.imgData)
  return imgdata_.GetNoArena();
}
inline void ImageDatum::set_imgdata(const ::std::string& value) {
  
  imgdata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:TuriCreate.Annotation.Specification.ImageDatum.imgData)
}
#if LANG_CXX11
inline void ImageDatum::set_imgdata(::std::string&& value) {
  
  imgdata_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:TuriCreate.Annotation.Specification.ImageDatum.imgData)
}
#endif
inline void ImageDatum::set_imgdata(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  imgdata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:TuriCreate.Annotation.Specification.ImageDatum.imgData)
}
inline void ImageDatum::set_imgdata(const void* value, size_t size) {
  
  imgdata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:TuriCreate.Annotation.Specification.ImageDatum.imgData)
}
inline ::std::string* ImageDatum::mutable_imgdata() {
  
  // @@protoc_insertion_point(field_mutable:TuriCreate.Annotation.Specification.ImageDatum.imgData)
  return imgdata_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ImageDatum::release_imgdata() {
  // @@protoc_insertion_point(field_release:TuriCreate.Annotation.Specification.ImageDatum.imgData)
  
  return imgdata_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ImageDatum::set_allocated_imgdata(::std::string* imgdata) {
  if (imgdata != NULL) {
    
  } else {
    
  }
  imgdata_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), imgdata);
  // @@protoc_insertion_point(field_set_allocated:TuriCreate.Annotation.Specification.ImageDatum.imgData)
}

// -------------------------------------------------------------------

// TextDatum

// string text = 1;
inline void TextDatum::clear_text() {
  text_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& TextDatum::text() const {
  // @@protoc_insertion_point(field_get:TuriCreate.Annotation.Specification.TextDatum.text)
  return text_.GetNoArena();
}
inline void TextDatum::set_text(const ::std::string& value) {
  
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:TuriCreate.Annotation.Specification.TextDatum.text)
}
#if LANG_CXX11
inline void TextDatum::set_text(::std::string&& value) {
  
  text_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:TuriCreate.Annotation.Specification.TextDatum.text)
}
#endif
inline void TextDatum::set_text(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:TuriCreate.Annotation.Specification.TextDatum.text)
}
inline void TextDatum::set_text(const char* value, size_t size) {
  
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:TuriCreate.Annotation.Specification.TextDatum.text)
}
inline ::std::string* TextDatum::mutable_text() {
  
  // @@protoc_insertion_point(field_mutable:TuriCreate.Annotation.Specification.TextDatum.text)
  return text_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TextDatum::release_text() {
  // @@protoc_insertion_point(field_release:TuriCreate.Annotation.Specification.TextDatum.text)
  
  return text_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TextDatum::set_allocated_text(::std::string* text) {
  if (text != NULL) {
    
  } else {
    
  }
  text_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), text);
  // @@protoc_insertion_point(field_set_allocated:TuriCreate.Annotation.Specification.TextDatum.text)
}

// -------------------------------------------------------------------

// Datum

// int64 rowIndex = 1;
inline void Datum::clear_rowindex() {
  rowindex_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 Datum::rowindex() const {
  // @@protoc_insertion_point(field_get:TuriCreate.Annotation.Specification.Datum.rowIndex)
  return rowindex_;
}
inline void Datum::set_rowindex(::google::protobuf::int64 value) {
  
  rowindex_ = value;
  // @@protoc_insertion_point(field_set:TuriCreate.Annotation.Specification.Datum.rowIndex)
}

// repeated .TuriCreate.Annotation.Specification.ImageDatum images = 10;
inline int Datum::images_size() const {
  return images_.size();
}
inline void Datum::clear_images() {
  images_.Clear();
}
inline const ::TuriCreate::Annotation::Specification::ImageDatum& Datum::images(int index) const {
  // @@protoc_insertion_point(field_get:TuriCreate.Annotation.Specification.Datum.images)
  return images_.Get(index);
}
inline ::TuriCreate::Annotation::Specification::ImageDatum* Datum::mutable_images(int index) {
  // @@protoc_insertion_point(field_mutable:TuriCreate.Annotation.Specification.Datum.images)
  return images_.Mutable(index);
}
inline ::TuriCreate::Annotation::Specification::ImageDatum* Datum::add_images() {
  // @@protoc_insertion_point(field_add:TuriCreate.Annotation.Specification.Datum.images)
  return images_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::TuriCreate::Annotation::Specification::ImageDatum >*
Datum::mutable_images() {
  // @@protoc_insertion_point(field_mutable_list:TuriCreate.Annotation.Specification.Datum.images)
  return &images_;
}
inline const ::google::protobuf::RepeatedPtrField< ::TuriCreate::Annotation::Specification::ImageDatum >&
Datum::images() const {
  // @@protoc_insertion_point(field_list:TuriCreate.Annotation.Specification.Datum.images)
  return images_;
}

// repeated .TuriCreate.Annotation.Specification.TextDatum text = 20;
inline int Datum::text_size() const {
  return text_.size();
}
inline void Datum::clear_text() {
  text_.Clear();
}
inline const ::TuriCreate::Annotation::Specification::TextDatum& Datum::text(int index) const {
  // @@protoc_insertion_point(field_get:TuriCreate.Annotation.Specification.Datum.text)
  return text_.Get(index);
}
inline ::TuriCreate::Annotation::Specification::TextDatum* Datum::mutable_text(int index) {
  // @@protoc_insertion_point(field_mutable:TuriCreate.Annotation.Specification.Datum.text)
  return text_.Mutable(index);
}
inline ::TuriCreate::Annotation::Specification::TextDatum* Datum::add_text() {
  // @@protoc_insertion_point(field_add:TuriCreate.Annotation.Specification.Datum.text)
  return text_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::TuriCreate::Annotation::Specification::TextDatum >*
Datum::mutable_text() {
  // @@protoc_insertion_point(field_mutable_list:TuriCreate.Annotation.Specification.Datum.text)
  return &text_;
}
inline const ::google::protobuf::RepeatedPtrField< ::TuriCreate::Annotation::Specification::TextDatum >&
Datum::text() const {
  // @@protoc_insertion_point(field_list:TuriCreate.Annotation.Specification.Datum.text)
  return text_;
}

// -------------------------------------------------------------------

// Data

// repeated .TuriCreate.Annotation.Specification.Datum data = 1;
inline int Data::data_size() const {
  return data_.size();
}
inline void Data::clear_data() {
  data_.Clear();
}
inline const ::TuriCreate::Annotation::Specification::Datum& Data::data(int index) const {
  // @@protoc_insertion_point(field_get:TuriCreate.Annotation.Specification.Data.data)
  return data_.Get(index);
}
inline ::TuriCreate::Annotation::Specification::Datum* Data::mutable_data(int index) {
  // @@protoc_insertion_point(field_mutable:TuriCreate.Annotation.Specification.Data.data)
  return data_.Mutable(index);
}
inline ::TuriCreate::Annotation::Specification::Datum* Data::add_data() {
  // @@protoc_insertion_point(field_add:TuriCreate.Annotation.Specification.Data.data)
  return data_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::TuriCreate::Annotation::Specification::Datum >*
Data::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:TuriCreate.Annotation.Specification.Data.data)
  return &data_;
}
inline const ::google::protobuf::RepeatedPtrField< ::TuriCreate::Annotation::Specification::Datum >&
Data::data() const {
  // @@protoc_insertion_point(field_list:TuriCreate.Annotation.Specification.Data.data)
  return data_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace Specification
}  // namespace Annotation
}  // namespace TuriCreate

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_data_2eproto__INCLUDED
