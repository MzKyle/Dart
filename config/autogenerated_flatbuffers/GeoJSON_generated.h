// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_GEOJSON_FOXGLOVE_H_
#define FLATBUFFERS_GENERATED_GEOJSON_FOXGLOVE_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 23 &&
              FLATBUFFERS_VERSION_MINOR == 5 &&
              FLATBUFFERS_VERSION_REVISION == 26,
             "Non-compatible flatbuffers version included");

namespace foxglove {

struct GeoJSON;
struct GeoJSONBuilder;

/// GeoJSON data for annotating maps
struct GeoJSON FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef GeoJSONBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_GEOJSON = 4
  };
  /// GeoJSON data encoded as a UTF-8 string
  const ::flatbuffers::String *geojson() const {
    return GetPointer<const ::flatbuffers::String *>(VT_GEOJSON);
  }
  ::flatbuffers::String *mutable_geojson() {
    return GetPointer<::flatbuffers::String *>(VT_GEOJSON);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_GEOJSON) &&
           verifier.VerifyString(geojson()) &&
           verifier.EndTable();
  }
};

struct GeoJSONBuilder {
  typedef GeoJSON Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_geojson(::flatbuffers::Offset<::flatbuffers::String> geojson) {
    fbb_.AddOffset(GeoJSON::VT_GEOJSON, geojson);
  }
  explicit GeoJSONBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<GeoJSON> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<GeoJSON>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<GeoJSON> CreateGeoJSON(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::String> geojson = 0) {
  GeoJSONBuilder builder_(_fbb);
  builder_.add_geojson(geojson);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<GeoJSON> CreateGeoJSONDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const char *geojson = nullptr) {
  auto geojson__ = geojson ? _fbb.CreateString(geojson) : 0;
  return foxglove::CreateGeoJSON(
      _fbb,
      geojson__);
}

inline const foxglove::GeoJSON *GetGeoJSON(const void *buf) {
  return ::flatbuffers::GetRoot<foxglove::GeoJSON>(buf);
}

inline const foxglove::GeoJSON *GetSizePrefixedGeoJSON(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<foxglove::GeoJSON>(buf);
}

inline GeoJSON *GetMutableGeoJSON(void *buf) {
  return ::flatbuffers::GetMutableRoot<GeoJSON>(buf);
}

inline foxglove::GeoJSON *GetMutableSizePrefixedGeoJSON(void *buf) {
  return ::flatbuffers::GetMutableSizePrefixedRoot<foxglove::GeoJSON>(buf);
}

inline bool VerifyGeoJSONBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<foxglove::GeoJSON>(nullptr);
}

inline bool VerifySizePrefixedGeoJSONBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<foxglove::GeoJSON>(nullptr);
}

inline void FinishGeoJSONBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<foxglove::GeoJSON> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedGeoJSONBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<foxglove::GeoJSON> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace foxglove

#endif  // FLATBUFFERS_GENERATED_GEOJSON_FOXGLOVE_H_
