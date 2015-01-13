#include "MathLib.h"
#include <math.h>




//Normilization
void Vector3Math::Normalize()
{
	float Length = Magnitude();
	x /= Length;
	y /= Length;
	z /= Length;

}
//Cross Product
Vector3Math Vector3Math::CrossProd(Vector3Math Other)
{
	Vector3Math crossProduct;
	crossProduct.x = y * Other.z - z * Other.y;
	crossProduct.y = z * Other.x - x * Other.z;
	crossProduct.z = x * Other.y - y * Other.x;
	return crossProduct;
}
//Dot Product
float Vector3Math::DotProd(Vector3Math Other)
{
	float dotProd = x * Other.x + y * Other.y + z * Other.z;
	return dotProd;
}
//Magnitdue
float Vector3Math::Magnitude()
{
	float Magnitude = sqrt((x*x + y*y + z*z));
	return Magnitude;
}
//Addition Operator
Vector3Math Vector3Math::operator+(Vector3Math Other)
{
	Vector3Math Result;
	Result.x = x + Other.x;
	Result.y = y + Other.y;
	Result.z = z + Other.z;
	return Result;

}
//Subtraction Operator
Vector3Math Vector3Math::operator-(Vector3Math Other)
{
	Vector3Math Result;
	Result.x = x - Other.x;
	Result.y = y - Other.y;
	Result.z = z - Other.z;
	return Result;

}
//Multiplication Operator
Vector3Math Vector3Math::operator*(float Other)
{
	Vector3Math Result;
	Result.x = x * Other;
	Result.y = y * Other;
	Result.z = z * Other;
	return Result;
}
bool operator==(const Vector3Math& left, const Vector3Math& right)
{
	if (std::abs(left.x - right.x) < 0.0001f &&
		std::abs(left.y - right.y) < 0.0001f &&
		std::abs(left.z - right.z) < 0.0001f)
	{
		return true;
	}
	return false;
}

Vector3Math Vector3Math::lerp(Vector3Math End, float T)
{
	return *this + (End - *this) * T;
}
