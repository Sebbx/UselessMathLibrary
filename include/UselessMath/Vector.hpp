#pragma once
#include <cmath>

struct Vector2D
{
	float x, y;
	constexpr Vector2D() = default;
	constexpr Vector2D(float x, float y) : x(x), y(y) {}

	constexpr Vector2D operator+(const Vector2D& b) const
	{
		return {x + b.x, y + b.y};
	}

	constexpr Vector2D operator-(const Vector2D& b) const
	{
		return {x - b.x, y - b.y};
	}

	constexpr float Length() const
	{
		 return std::sqrt(x*x + y*y);
	}
};
