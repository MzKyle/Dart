// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_VISIONDATA_FOXGLOVE_H_
#define FLATBUFFERS_GENERATED_VISIONDATA_FOXGLOVE_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 23 &&
              FLATBUFFERS_VERSION_MINOR == 5 &&
              FLATBUFFERS_VERSION_REVISION == 26,
             "Non-compatible flatbuffers version included");

namespace foxglove {

struct VisionData;
struct VisionDataBuilder;

struct VisionData FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef VisionDataBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_YAW_ERROR = 4,
    VT_TARGET_STATUS = 6
  };
  float yaw_error() const {
    return GetField<float>(VT_YAW_ERROR, 0.0f);
  }
  bool mutate_yaw_error(float _yaw_error = 0.0f) {
    return SetField<float>(VT_YAW_ERROR, _yaw_error, 0.0f);
  }
  uint8_t target_status() const {
    return GetField<uint8_t>(VT_TARGET_STATUS, 0);
  }
  bool mutate_target_status(uint8_t _target_status = 0) {
    return SetField<uint8_t>(VT_TARGET_STATUS, _target_status, 0);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<float>(verifier, VT_YAW_ERROR, 4) &&
           VerifyField<uint8_t>(verifier, VT_TARGET_STATUS, 1) &&
           verifier.EndTable();
  }
};

struct VisionDataBuilder {
  typedef VisionData Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_yaw_error(float yaw_error) {
    fbb_.AddElement<float>(VisionData::VT_YAW_ERROR, yaw_error, 0.0f);
  }
  void add_target_status(uint8_t target_status) {
    fbb_.AddElement<uint8_t>(VisionData::VT_TARGET_STATUS, target_status, 0);
  }
  explicit VisionDataBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<VisionData> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<VisionData>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<VisionData> CreateVisionData(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    float yaw_error = 0.0f,
    uint8_t target_status = 0) {
  VisionDataBuilder builder_(_fbb);
  builder_.add_yaw_error(yaw_error);
  builder_.add_target_status(target_status);
  return builder_.Finish();
}

inline const foxglove::VisionData *GetVisionData(const void *buf) {
  return ::flatbuffers::GetRoot<foxglove::VisionData>(buf);
}

inline const foxglove::VisionData *GetSizePrefixedVisionData(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<foxglove::VisionData>(buf);
}

inline VisionData *GetMutableVisionData(void *buf) {
  return ::flatbuffers::GetMutableRoot<VisionData>(buf);
}

inline foxglove::VisionData *GetMutableSizePrefixedVisionData(void *buf) {
  return ::flatbuffers::GetMutableSizePrefixedRoot<foxglove::VisionData>(buf);
}

inline bool VerifyVisionDataBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<foxglove::VisionData>(nullptr);
}

inline bool VerifySizePrefixedVisionDataBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<foxglove::VisionData>(nullptr);
}

inline void FinishVisionDataBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<foxglove::VisionData> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedVisionDataBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<foxglove::VisionData> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace foxglove

#endif  // FLATBUFFERS_GENERATED_VISIONDATA_FOXGLOVE_H_
