#include "MathLib.h"
#include <math.h>




//Normilization
void Vector2Math::Normalize()
{
	float Length = Magnitude();
	x /= Length;
	y /= Length;

}
//Dot Product
float Vector2Math::DotProd(Vector2Math Other)
{
	float dotProd = x * Other.x + y * Other.y;
	return dotProd;
}

//Magnitude
float Vector2Math::Magnitude()
{
	float Magnitude = sqrt((x*x + y*y));
	return Magnitude;
}
//Addition Operator
Vector2Math Vector2Math::operator+(Vector2Math Other)
{
	Vector2Math Result;
	Result.x = x + Other.x;
	Result.y = y + Other.y;
	return Result;

}
//Subtraction Operator
Vector2Math Vector2Math::operator-(Vector2Math Other)
{
	Vector2Math Result;
	Result.x = x - Other.x;
	Result.y = y - Other.y;
	return Result;

}
//Multiplication Operator
Vector2Math Vector2Math::operator*(float Other)
{
	Vector2Math Result;
	Result.x = x * Other;
	Result.y = y * Other;
	return Result;
}
Vector2Math Vector2Math::lerp(Vector2Math End, float T)
{
	return *this + (End - *this) * T;
}

bool operator==(const Vector2Math& left, const Vector2Math& right)
{
	if (std::abs(left.x - right.x) < 0.0001f &&
		std::abs(left.y - right.y) < 0.0001f)
	{
		return true;
	}
	return false;
}