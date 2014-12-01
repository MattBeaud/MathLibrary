#include "MathLib.h"
#include <math.h>
#include <iostream>




void Vector3Math::Normalize()
{
	float Length = Magnitude();
	x /= Length;
	y /= Length;
	z /= Length;

}

Vector3Math Vector3Math::CrossProd(Vector3Math Other)
{
	Vector3Math crossProduct;
	crossProduct.x = y * Other.z - z * Other.y;
	crossProduct.y = z * Other.x - x * Other.z;
	crossProduct.z = x * Other.y - y * Other.x;
	return crossProduct;
}

float Vector3Math::DotProd(Vector3Math Other)
{
	float dotProd = x * Other.x + y * Other.y + Other.z;
	return dotProd;
}

float Vector3Math::Magnitude()
{
	float Magnitude = sqrt((x*x + y*y + z*z));
	return Magnitude;
}

Vector3Math Vector3Math::operator+(Vector3Math Other)
{
	Vector3Math Result;
	Result.x = x + Other.x;
	Result.y = y + Other.y;
	Result.z = z + Other.z;
	return Result;

}

Vector3Math Vector3Math::operator-(Vector3Math Other)
{
	Vector3Math Result;
	Result.x = x - Other.x;
	Result.y = y - Other.y;
	Result.z = z - Other.z;
	return Result;

}

Vector3Math Vector3Math::operator*(float Other)
{
	Vector3Math Result;
	Result.x = x * Other;
	Result.y = y * Other;
	Result.z = z * Other;
	return Result;
}

