#pragma once
#include <cmath>

struct Vector2D
{
	float x = 0.f;
	float y = 0.f;

	constexpr Vector2D() = default;
	constexpr Vector2D(const float x, const float y) : x(x), y(y) {}

	constexpr Vector2D operator+(const Vector2D& b) const
	{
		return {x + b.x, y + b.y};
	}

	constexpr Vector2D operator-(const Vector2D& b) const
	{
		return {x - b.x, y - b.y};
	}

	constexpr Vector2D operator*(const float& b) const
	{
		return {x * b, y * b};
	}

	constexpr Vector2D operator/(const float& b) const
	{
		return {x / b, y / b};
	}

	constexpr float Length() const
	{
		 return std::sqrt(x*x + y*y);
	}

	constexpr float LengthSqr() const
	{
		return (x*x + y*y);
	}

	Vector2D Normalized() const
	{
		return *this / Length();
	}
};
