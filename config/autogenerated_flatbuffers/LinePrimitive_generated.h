// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_LINEPRIMITIVE_FOXGLOVE_H_
#define FLATBUFFERS_GENERATED_LINEPRIMITIVE_FOXGLOVE_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 23 &&
              FLATBUFFERS_VERSION_MINOR == 5 &&
              FLATBUFFERS_VERSION_REVISION == 26,
             "Non-compatible flatbuffers version included");

#include "Color_generated.h"
#include "Point3_generated.h"
#include "Pose_generated.h"

namespace foxglove {

struct LinePrimitive;
struct LinePrimitiveBuilder;

/// An enumeration indicating how input points should be interpreted to create lines
enum LineType : uint8_t {
  /// Connected line segments: 0-1, 1-2, ..., (n-1)-n
  LineType_LINE_STRIP = 0,
  /// Closed polygon: 0-1, 1-2, ..., (n-1)-n, n-0
  LineType_LINE_LOOP = 1,
  /// Individual line segments: 0-1, 2-3, 4-5, ...
  LineType_LINE_LIST = 2,
  LineType_MIN = LineType_LINE_STRIP,
  LineType_MAX = LineType_LINE_LIST
};

inline const LineType (&EnumValuesLineType())[3] {
  static const LineType values[] = {
    LineType_LINE_STRIP,
    LineType_LINE_LOOP,
    LineType_LINE_LIST
  };
  return values;
}

inline const char * const *EnumNamesLineType() {
  static const char * const names[4] = {
    "LINE_STRIP",
    "LINE_LOOP",
    "LINE_LIST",
    nullptr
  };
  return names;
}

inline const char *EnumNameLineType(LineType e) {
  if (::flatbuffers::IsOutRange(e, LineType_LINE_STRIP, LineType_LINE_LIST)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesLineType()[index];
}

/// A primitive representing a series of points connected by lines
struct LinePrimitive FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef LinePrimitiveBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TYPE = 4,
    VT_POSE = 6,
    VT_THICKNESS = 8,
    VT_SCALE_INVARIANT = 10,
    VT_POINTS = 12,
    VT_COLOR = 14,
    VT_COLORS = 16,
    VT_INDICES = 18
  };
  /// Drawing primitive to use for lines
  foxglove::LineType type() const {
    return static_cast<foxglove::LineType>(GetField<uint8_t>(VT_TYPE, 0));
  }
  bool mutate_type(foxglove::LineType _type = static_cast<foxglove::LineType>(0)) {
    return SetField<uint8_t>(VT_TYPE, static_cast<uint8_t>(_type), 0);
  }
  /// Origin of lines relative to reference frame
  const foxglove::Pose *pose() const {
    return GetPointer<const foxglove::Pose *>(VT_POSE);
  }
  foxglove::Pose *mutable_pose() {
    return GetPointer<foxglove::Pose *>(VT_POSE);
  }
  /// Line thickness
  double thickness() const {
    return GetField<double>(VT_THICKNESS, 0.0);
  }
  bool mutate_thickness(double _thickness = 0.0) {
    return SetField<double>(VT_THICKNESS, _thickness, 0.0);
  }
  /// Indicates whether `thickness` is a fixed size in screen pixels (true), or specified in world coordinates and scales with distance from the camera (false)
  bool scale_invariant() const {
    return GetField<uint8_t>(VT_SCALE_INVARIANT, 0) != 0;
  }
  bool mutate_scale_invariant(bool _scale_invariant = 0) {
    return SetField<uint8_t>(VT_SCALE_INVARIANT, static_cast<uint8_t>(_scale_invariant), 0);
  }
  /// Points along the line
  const ::flatbuffers::Vector<::flatbuffers::Offset<foxglove::Point3>> *points() const {
    return GetPointer<const ::flatbuffers::Vector<::flatbuffers::Offset<foxglove::Point3>> *>(VT_POINTS);
  }
  ::flatbuffers::Vector<::flatbuffers::Offset<foxglove::Point3>> *mutable_points() {
    return GetPointer<::flatbuffers::Vector<::flatbuffers::Offset<foxglove::Point3>> *>(VT_POINTS);
  }
  /// Solid color to use for the whole line. One of `color` or `colors` must be provided.
  const foxglove::Color *color() const {
    return GetPointer<const foxglove::Color *>(VT_COLOR);
  }
  foxglove::Color *mutable_color() {
    return GetPointer<foxglove::Color *>(VT_COLOR);
  }
  /// Per-point colors (if specified, must have the same length as `points`). One of `color` or `colors` must be provided.
  const ::flatbuffers::Vector<::flatbuffers::Offset<foxglove::Color>> *colors() const {
    return GetPointer<const ::flatbuffers::Vector<::flatbuffers::Offset<foxglove::Color>> *>(VT_COLORS);
  }
  ::flatbuffers::Vector<::flatbuffers::Offset<foxglove::Color>> *mutable_colors() {
    return GetPointer<::flatbuffers::Vector<::flatbuffers::Offset<foxglove::Color>> *>(VT_COLORS);
  }
  /// Indices into the `points` and `colors` attribute arrays, which can be used to avoid duplicating attribute data.
  /// 
  /// If omitted or empty, indexing will not be used. This default behavior is equivalent to specifying [0, 1, ..., N-1] for the indices (where N is the number of `points` provided).
  const ::flatbuffers::Vector<uint32_t> *indices() const {
    return GetPointer<const ::flatbuffers::Vector<uint32_t> *>(VT_INDICES);
  }
  ::flatbuffers::Vector<uint32_t> *mutable_indices() {
    return GetPointer<::flatbuffers::Vector<uint32_t> *>(VT_INDICES);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_TYPE, 1) &&
           VerifyOffset(verifier, VT_POSE) &&
           verifier.VerifyTable(pose()) &&
           VerifyField<double>(verifier, VT_THICKNESS, 8) &&
           VerifyField<uint8_t>(verifier, VT_SCALE_INVARIANT, 1) &&
           VerifyOffset(verifier, VT_POINTS) &&
           verifier.VerifyVector(points()) &&
           verifier.VerifyVectorOfTables(points()) &&
           VerifyOffset(verifier, VT_COLOR) &&
           verifier.VerifyTable(color()) &&
           VerifyOffset(verifier, VT_COLORS) &&
           verifier.VerifyVector(colors()) &&
           verifier.VerifyVectorOfTables(colors()) &&
           VerifyOffset(verifier, VT_INDICES) &&
           verifier.VerifyVector(indices()) &&
           verifier.EndTable();
  }
};

struct LinePrimitiveBuilder {
  typedef LinePrimitive Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_type(foxglove::LineType type) {
    fbb_.AddElement<uint8_t>(LinePrimitive::VT_TYPE, static_cast<uint8_t>(type), 0);
  }
  void add_pose(::flatbuffers::Offset<foxglove::Pose> pose) {
    fbb_.AddOffset(LinePrimitive::VT_POSE, pose);
  }
  void add_thickness(double thickness) {
    fbb_.AddElement<double>(LinePrimitive::VT_THICKNESS, thickness, 0.0);
  }
  void add_scale_invariant(bool scale_invariant) {
    fbb_.AddElement<uint8_t>(LinePrimitive::VT_SCALE_INVARIANT, static_cast<uint8_t>(scale_invariant), 0);
  }
  void add_points(::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<foxglove::Point3>>> points) {
    fbb_.AddOffset(LinePrimitive::VT_POINTS, points);
  }
  void add_color(::flatbuffers::Offset<foxglove::Color> color) {
    fbb_.AddOffset(LinePrimitive::VT_COLOR, color);
  }
  void add_colors(::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<foxglove::Color>>> colors) {
    fbb_.AddOffset(LinePrimitive::VT_COLORS, colors);
  }
  void add_indices(::flatbuffers::Offset<::flatbuffers::Vector<uint32_t>> indices) {
    fbb_.AddOffset(LinePrimitive::VT_INDICES, indices);
  }
  explicit LinePrimitiveBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<LinePrimitive> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<LinePrimitive>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<LinePrimitive> CreateLinePrimitive(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    foxglove::LineType type = foxglove::LineType_LINE_STRIP,
    ::flatbuffers::Offset<foxglove::Pose> pose = 0,
    double thickness = 0.0,
    bool scale_invariant = false,
    ::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<foxglove::Point3>>> points = 0,
    ::flatbuffers::Offset<foxglove::Color> color = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<foxglove::Color>>> colors = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<uint32_t>> indices = 0) {
  LinePrimitiveBuilder builder_(_fbb);
  builder_.add_thickness(thickness);
  builder_.add_indices(indices);
  builder_.add_colors(colors);
  builder_.add_color(color);
  builder_.add_points(points);
  builder_.add_pose(pose);
  builder_.add_scale_invariant(scale_invariant);
  builder_.add_type(type);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<LinePrimitive> CreateLinePrimitiveDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    foxglove::LineType type = foxglove::LineType_LINE_STRIP,
    ::flatbuffers::Offset<foxglove::Pose> pose = 0,
    double thickness = 0.0,
    bool scale_invariant = false,
    const std::vector<::flatbuffers::Offset<foxglove::Point3>> *points = nullptr,
    ::flatbuffers::Offset<foxglove::Color> color = 0,
    const std::vector<::flatbuffers::Offset<foxglove::Color>> *colors = nullptr,
    const std::vector<uint32_t> *indices = nullptr) {
  auto points__ = points ? _fbb.CreateVector<::flatbuffers::Offset<foxglove::Point3>>(*points) : 0;
  auto colors__ = colors ? _fbb.CreateVector<::flatbuffers::Offset<foxglove::Color>>(*colors) : 0;
  auto indices__ = indices ? _fbb.CreateVector<uint32_t>(*indices) : 0;
  return foxglove::CreateLinePrimitive(
      _fbb,
      type,
      pose,
      thickness,
      scale_invariant,
      points__,
      color,
      colors__,
      indices__);
}

inline const foxglove::LinePrimitive *GetLinePrimitive(const void *buf) {
  return ::flatbuffers::GetRoot<foxglove::LinePrimitive>(buf);
}

inline const foxglove::LinePrimitive *GetSizePrefixedLinePrimitive(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<foxglove::LinePrimitive>(buf);
}

inline LinePrimitive *GetMutableLinePrimitive(void *buf) {
  return ::flatbuffers::GetMutableRoot<LinePrimitive>(buf);
}

inline foxglove::LinePrimitive *GetMutableSizePrefixedLinePrimitive(void *buf) {
  return ::flatbuffers::GetMutableSizePrefixedRoot<foxglove::LinePrimitive>(buf);
}

inline bool VerifyLinePrimitiveBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<foxglove::LinePrimitive>(nullptr);
}

inline bool VerifySizePrefixedLinePrimitiveBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<foxglove::LinePrimitive>(nullptr);
}

inline void FinishLinePrimitiveBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<foxglove::LinePrimitive> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedLinePrimitiveBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<foxglove::LinePrimitive> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace foxglove

#endif  // FLATBUFFERS_GENERATED_LINEPRIMITIVE_FOXGLOVE_H_
