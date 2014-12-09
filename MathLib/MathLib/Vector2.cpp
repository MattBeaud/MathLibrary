#include "MathLib.h"
#include <math.h>





void Vector2Math::Normalize()
{
	float Length = Magnitude();
	x /= Length;
	y /= Length;

}

float Vector2Math::DotProd(Vector2Math Other)
{
	float dotProd = x * Other.x + y * Other.y;
	return dotProd;
}


float Vector2Math::Magnitude()
{
	float Magnitude = sqrt((x*x + y*y));
	return Magnitude;
}

Vector2Math Vector2Math::operator+(Vector2Math Other)
{
	Vector2Math Result;
	Result.x = x + Other.x;
	Result.y = y + Other.y;
	return Result;

}

Vector2Math Vector2Math::operator-(Vector2Math Other)
{
	Vector2Math Result;
	Result.x = x - Other.x;
	Result.y = y - Other.y;
	return Result;

}
Vector2Math Vector2Math::operator*(float Other)
{
	Vector2Math Result;
	Result.x = x * Other;
	Result.y = y * Other;
	return Result;
}
Vector2Math Vector2Math::lerp(Vector2Math Start, Vector2Math End, float T)
{
	return Start + (End - Start) * T;
}

