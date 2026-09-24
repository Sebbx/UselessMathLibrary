#pragma once
#include <cmath>

namespace UML {

struct Vec3 {
	float x{0.0f}, y{0.0f}, z{0.0f};
	constexpr Vec3() = default;
	constexpr Vec3(float x, float y, float z) : x(x), y(y), z(z) {}
	constexpr Vec3 operator+(const Vec3& o) const { return {x + o.x, y + o.y, z + o.z}; }
	constexpr Vec3 operator-(const Vec3& o) const { return {x - o.x, y - o.y, z - o.z}; }
	constexpr Vec3 operator*(float s) const { return {x * s, y * s, z * s}; }
	float length() const {
		return std::sqrt(x * x + y * y + z * z);
		}
};

} // namespace UML