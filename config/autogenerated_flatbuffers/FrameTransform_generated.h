// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_FRAMETRANSFORM_FOXGLOVE_H_
#define FLATBUFFERS_GENERATED_FRAMETRANSFORM_FOXGLOVE_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 23 &&
              FLATBUFFERS_VERSION_MINOR == 5 &&
              FLATBUFFERS_VERSION_REVISION == 26,
             "Non-compatible flatbuffers version included");

#include "Quaternion_generated.h"
#include "Time_generated.h"
#include "Vector3_generated.h"

namespace foxglove {

struct FrameTransform;
struct FrameTransformBuilder;

/// A transform between two reference frames in 3D space
struct FrameTransform FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef FrameTransformBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TIMESTAMP = 4,
    VT_PARENT_FRAME_ID = 6,
    VT_CHILD_FRAME_ID = 8,
    VT_TRANSLATION = 10,
    VT_ROTATION = 12
  };
  /// Timestamp of transform
  const foxglove::Time *timestamp() const {
    return GetStruct<const foxglove::Time *>(VT_TIMESTAMP);
  }
  foxglove::Time *mutable_timestamp() {
    return GetStruct<foxglove::Time *>(VT_TIMESTAMP);
  }
  /// Name of the parent frame
  const ::flatbuffers::String *parent_frame_id() const {
    return GetPointer<const ::flatbuffers::String *>(VT_PARENT_FRAME_ID);
  }
  ::flatbuffers::String *mutable_parent_frame_id() {
    return GetPointer<::flatbuffers::String *>(VT_PARENT_FRAME_ID);
  }
  /// Name of the child frame
  const ::flatbuffers::String *child_frame_id() const {
    return GetPointer<const ::flatbuffers::String *>(VT_CHILD_FRAME_ID);
  }
  ::flatbuffers::String *mutable_child_frame_id() {
    return GetPointer<::flatbuffers::String *>(VT_CHILD_FRAME_ID);
  }
  /// Translation component of the transform
  const foxglove::Vector3 *translation() const {
    return GetPointer<const foxglove::Vector3 *>(VT_TRANSLATION);
  }
  foxglove::Vector3 *mutable_translation() {
    return GetPointer<foxglove::Vector3 *>(VT_TRANSLATION);
  }
  /// Rotation component of the transform
  const foxglove::Quaternion *rotation() const {
    return GetPointer<const foxglove::Quaternion *>(VT_ROTATION);
  }
  foxglove::Quaternion *mutable_rotation() {
    return GetPointer<foxglove::Quaternion *>(VT_ROTATION);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<foxglove::Time>(verifier, VT_TIMESTAMP, 4) &&
           VerifyOffset(verifier, VT_PARENT_FRAME_ID) &&
           verifier.VerifyString(parent_frame_id()) &&
           VerifyOffset(verifier, VT_CHILD_FRAME_ID) &&
           verifier.VerifyString(child_frame_id()) &&
           VerifyOffset(verifier, VT_TRANSLATION) &&
           verifier.VerifyTable(translation()) &&
           VerifyOffset(verifier, VT_ROTATION) &&
           verifier.VerifyTable(rotation()) &&
           verifier.EndTable();
  }
};

struct FrameTransformBuilder {
  typedef FrameTransform Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_timestamp(const foxglove::Time *timestamp) {
    fbb_.AddStruct(FrameTransform::VT_TIMESTAMP, timestamp);
  }
  void add_parent_frame_id(::flatbuffers::Offset<::flatbuffers::String> parent_frame_id) {
    fbb_.AddOffset(FrameTransform::VT_PARENT_FRAME_ID, parent_frame_id);
  }
  void add_child_frame_id(::flatbuffers::Offset<::flatbuffers::String> child_frame_id) {
    fbb_.AddOffset(FrameTransform::VT_CHILD_FRAME_ID, child_frame_id);
  }
  void add_translation(::flatbuffers::Offset<foxglove::Vector3> translation) {
    fbb_.AddOffset(FrameTransform::VT_TRANSLATION, translation);
  }
  void add_rotation(::flatbuffers::Offset<foxglove::Quaternion> rotation) {
    fbb_.AddOffset(FrameTransform::VT_ROTATION, rotation);
  }
  explicit FrameTransformBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<FrameTransform> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<FrameTransform>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<FrameTransform> CreateFrameTransform(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const foxglove::Time *timestamp = nullptr,
    ::flatbuffers::Offset<::flatbuffers::String> parent_frame_id = 0,
    ::flatbuffers::Offset<::flatbuffers::String> child_frame_id = 0,
    ::flatbuffers::Offset<foxglove::Vector3> translation = 0,
    ::flatbuffers::Offset<foxglove::Quaternion> rotation = 0) {
  FrameTransformBuilder builder_(_fbb);
  builder_.add_rotation(rotation);
  builder_.add_translation(translation);
  builder_.add_child_frame_id(child_frame_id);
  builder_.add_parent_frame_id(parent_frame_id);
  builder_.add_timestamp(timestamp);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<FrameTransform> CreateFrameTransformDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const foxglove::Time *timestamp = nullptr,
    const char *parent_frame_id = nullptr,
    const char *child_frame_id = nullptr,
    ::flatbuffers::Offset<foxglove::Vector3> translation = 0,
    ::flatbuffers::Offset<foxglove::Quaternion> rotation = 0) {
  auto parent_frame_id__ = parent_frame_id ? _fbb.CreateString(parent_frame_id) : 0;
  auto child_frame_id__ = child_frame_id ? _fbb.CreateString(child_frame_id) : 0;
  return foxglove::CreateFrameTransform(
      _fbb,
      timestamp,
      parent_frame_id__,
      child_frame_id__,
      translation,
      rotation);
}

inline const foxglove::FrameTransform *GetFrameTransform(const void *buf) {
  return ::flatbuffers::GetRoot<foxglove::FrameTransform>(buf);
}

inline const foxglove::FrameTransform *GetSizePrefixedFrameTransform(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<foxglove::FrameTransform>(buf);
}

inline FrameTransform *GetMutableFrameTransform(void *buf) {
  return ::flatbuffers::GetMutableRoot<FrameTransform>(buf);
}

inline foxglove::FrameTransform *GetMutableSizePrefixedFrameTransform(void *buf) {
  return ::flatbuffers::GetMutableSizePrefixedRoot<foxglove::FrameTransform>(buf);
}

inline bool VerifyFrameTransformBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<foxglove::FrameTransform>(nullptr);
}

inline bool VerifySizePrefixedFrameTransformBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<foxglove::FrameTransform>(nullptr);
}

inline void FinishFrameTransformBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<foxglove::FrameTransform> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedFrameTransformBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<foxglove::FrameTransform> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace foxglove

#endif  // FLATBUFFERS_GENERATED_FRAMETRANSFORM_FOXGLOVE_H_
