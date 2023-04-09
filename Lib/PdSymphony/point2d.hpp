#pragma once

#include "vector2d.hpp"

namespace PdSymphony {
namespace Math {
class Point2d {
public:
  Point2d() : x(0.0f), y(0.0f) {}

  Point2d(float new_x, float new_y) : x(new_x), y(new_y) {}

  Vector2d operator-(const Point2d &p) const {
    return Vector2d(x - p.x, y - p.y);
  }

  Point2d operator-(const Vector2d &v) const {
    return Point2d(x - v.x, y - v.y);
  }

  Point2d operator+(const Vector2d &v) const {
    return Point2d(x + v.x, y + v.y);
  }

  float x;
  float y;
};
} // namespace Math
} // namespace PdSymphony
