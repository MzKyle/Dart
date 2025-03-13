// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_LOCATIONFIX_FOXGLOVE_H_
#define FLATBUFFERS_GENERATED_LOCATIONFIX_FOXGLOVE_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 23 &&
              FLATBUFFERS_VERSION_MINOR == 5 &&
              FLATBUFFERS_VERSION_REVISION == 26,
             "Non-compatible flatbuffers version included");

#include "Time_generated.h"

namespace foxglove {

struct LocationFix;
struct LocationFixBuilder;

/// Type of position covariance
enum PositionCovarianceType : uint8_t {
  PositionCovarianceType_UNKNOWN = 0,
  PositionCovarianceType_APPROXIMATED = 1,
  PositionCovarianceType_DIAGONAL_KNOWN = 2,
  PositionCovarianceType_KNOWN = 3,
  PositionCovarianceType_MIN = PositionCovarianceType_UNKNOWN,
  PositionCovarianceType_MAX = PositionCovarianceType_KNOWN
};

inline const PositionCovarianceType (&EnumValuesPositionCovarianceType())[4] {
  static const PositionCovarianceType values[] = {
    PositionCovarianceType_UNKNOWN,
    PositionCovarianceType_APPROXIMATED,
    PositionCovarianceType_DIAGONAL_KNOWN,
    PositionCovarianceType_KNOWN
  };
  return values;
}

inline const char * const *EnumNamesPositionCovarianceType() {
  static const char * const names[5] = {
    "UNKNOWN",
    "APPROXIMATED",
    "DIAGONAL_KNOWN",
    "KNOWN",
    nullptr
  };
  return names;
}

inline const char *EnumNamePositionCovarianceType(PositionCovarianceType e) {
  if (::flatbuffers::IsOutRange(e, PositionCovarianceType_UNKNOWN, PositionCovarianceType_KNOWN)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesPositionCovarianceType()[index];
}

/// A navigation satellite fix for any Global Navigation Satellite System
struct LocationFix FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef LocationFixBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TIMESTAMP = 4,
    VT_FRAME_ID = 6,
    VT_LATITUDE = 8,
    VT_LONGITUDE = 10,
    VT_ALTITUDE = 12,
    VT_POSITION_COVARIANCE = 14,
    VT_POSITION_COVARIANCE_TYPE = 16
  };
  /// Timestamp of the message
  const foxglove::Time *timestamp() const {
    return GetStruct<const foxglove::Time *>(VT_TIMESTAMP);
  }
  foxglove::Time *mutable_timestamp() {
    return GetStruct<foxglove::Time *>(VT_TIMESTAMP);
  }
  /// Frame for the sensor. Latitude and longitude readings are at the origin of the frame.
  const ::flatbuffers::String *frame_id() const {
    return GetPointer<const ::flatbuffers::String *>(VT_FRAME_ID);
  }
  ::flatbuffers::String *mutable_frame_id() {
    return GetPointer<::flatbuffers::String *>(VT_FRAME_ID);
  }
  /// Latitude in degrees
  double latitude() const {
    return GetField<double>(VT_LATITUDE, 0.0);
  }
  bool mutate_latitude(double _latitude = 0.0) {
    return SetField<double>(VT_LATITUDE, _latitude, 0.0);
  }
  /// Longitude in degrees
  double longitude() const {
    return GetField<double>(VT_LONGITUDE, 0.0);
  }
  bool mutate_longitude(double _longitude = 0.0) {
    return SetField<double>(VT_LONGITUDE, _longitude, 0.0);
  }
  /// Altitude in meters
  double altitude() const {
    return GetField<double>(VT_ALTITUDE, 0.0);
  }
  bool mutate_altitude(double _altitude = 0.0) {
    return SetField<double>(VT_ALTITUDE, _altitude, 0.0);
  }
  /// Position covariance (m^2) defined relative to a tangential plane through the reported position. The components are East, North, and Up (ENU), in row-major order.
  /// length 9
  const ::flatbuffers::Vector<double> *position_covariance() const {
    return GetPointer<const ::flatbuffers::Vector<double> *>(VT_POSITION_COVARIANCE);
  }
  ::flatbuffers::Vector<double> *mutable_position_covariance() {
    return GetPointer<::flatbuffers::Vector<double> *>(VT_POSITION_COVARIANCE);
  }
  /// If `position_covariance` is available, `position_covariance_type` must be set to indicate the type of covariance.
  foxglove::PositionCovarianceType position_covariance_type() const {
    return static_cast<foxglove::PositionCovarianceType>(GetField<uint8_t>(VT_POSITION_COVARIANCE_TYPE, 0));
  }
  bool mutate_position_covariance_type(foxglove::PositionCovarianceType _position_covariance_type = static_cast<foxglove::PositionCovarianceType>(0)) {
    return SetField<uint8_t>(VT_POSITION_COVARIANCE_TYPE, static_cast<uint8_t>(_position_covariance_type), 0);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<foxglove::Time>(verifier, VT_TIMESTAMP, 4) &&
           VerifyOffset(verifier, VT_FRAME_ID) &&
           verifier.VerifyString(frame_id()) &&
           VerifyField<double>(verifier, VT_LATITUDE, 8) &&
           VerifyField<double>(verifier, VT_LONGITUDE, 8) &&
           VerifyField<double>(verifier, VT_ALTITUDE, 8) &&
           VerifyOffset(verifier, VT_POSITION_COVARIANCE) &&
           verifier.VerifyVector(position_covariance()) &&
           VerifyField<uint8_t>(verifier, VT_POSITION_COVARIANCE_TYPE, 1) &&
           verifier.EndTable();
  }
};

struct LocationFixBuilder {
  typedef LocationFix Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_timestamp(const foxglove::Time *timestamp) {
    fbb_.AddStruct(LocationFix::VT_TIMESTAMP, timestamp);
  }
  void add_frame_id(::flatbuffers::Offset<::flatbuffers::String> frame_id) {
    fbb_.AddOffset(LocationFix::VT_FRAME_ID, frame_id);
  }
  void add_latitude(double latitude) {
    fbb_.AddElement<double>(LocationFix::VT_LATITUDE, latitude, 0.0);
  }
  void add_longitude(double longitude) {
    fbb_.AddElement<double>(LocationFix::VT_LONGITUDE, longitude, 0.0);
  }
  void add_altitude(double altitude) {
    fbb_.AddElement<double>(LocationFix::VT_ALTITUDE, altitude, 0.0);
  }
  void add_position_covariance(::flatbuffers::Offset<::flatbuffers::Vector<double>> position_covariance) {
    fbb_.AddOffset(LocationFix::VT_POSITION_COVARIANCE, position_covariance);
  }
  void add_position_covariance_type(foxglove::PositionCovarianceType position_covariance_type) {
    fbb_.AddElement<uint8_t>(LocationFix::VT_POSITION_COVARIANCE_TYPE, static_cast<uint8_t>(position_covariance_type), 0);
  }
  explicit LocationFixBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<LocationFix> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<LocationFix>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<LocationFix> CreateLocationFix(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const foxglove::Time *timestamp = nullptr,
    ::flatbuffers::Offset<::flatbuffers::String> frame_id = 0,
    double latitude = 0.0,
    double longitude = 0.0,
    double altitude = 0.0,
    ::flatbuffers::Offset<::flatbuffers::Vector<double>> position_covariance = 0,
    foxglove::PositionCovarianceType position_covariance_type = foxglove::PositionCovarianceType_UNKNOWN) {
  LocationFixBuilder builder_(_fbb);
  builder_.add_altitude(altitude);
  builder_.add_longitude(longitude);
  builder_.add_latitude(latitude);
  builder_.add_position_covariance(position_covariance);
  builder_.add_frame_id(frame_id);
  builder_.add_timestamp(timestamp);
  builder_.add_position_covariance_type(position_covariance_type);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<LocationFix> CreateLocationFixDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const foxglove::Time *timestamp = nullptr,
    const char *frame_id = nullptr,
    double latitude = 0.0,
    double longitude = 0.0,
    double altitude = 0.0,
    const std::vector<double> *position_covariance = nullptr,
    foxglove::PositionCovarianceType position_covariance_type = foxglove::PositionCovarianceType_UNKNOWN) {
  auto frame_id__ = frame_id ? _fbb.CreateString(frame_id) : 0;
  auto position_covariance__ = position_covariance ? _fbb.CreateVector<double>(*position_covariance) : 0;
  return foxglove::CreateLocationFix(
      _fbb,
      timestamp,
      frame_id__,
      latitude,
      longitude,
      altitude,
      position_covariance__,
      position_covariance_type);
}

inline const foxglove::LocationFix *GetLocationFix(const void *buf) {
  return ::flatbuffers::GetRoot<foxglove::LocationFix>(buf);
}

inline const foxglove::LocationFix *GetSizePrefixedLocationFix(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<foxglove::LocationFix>(buf);
}

inline LocationFix *GetMutableLocationFix(void *buf) {
  return ::flatbuffers::GetMutableRoot<LocationFix>(buf);
}

inline foxglove::LocationFix *GetMutableSizePrefixedLocationFix(void *buf) {
  return ::flatbuffers::GetMutableSizePrefixedRoot<foxglove::LocationFix>(buf);
}

inline bool VerifyLocationFixBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<foxglove::LocationFix>(nullptr);
}

inline bool VerifySizePrefixedLocationFixBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<foxglove::LocationFix>(nullptr);
}

inline void FinishLocationFixBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<foxglove::LocationFix> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedLocationFixBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<foxglove::LocationFix> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace foxglove

#endif  // FLATBUFFERS_GENERATED_LOCATIONFIX_FOXGLOVE_H_
