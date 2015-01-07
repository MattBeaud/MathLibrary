//#include "Vector4.h"
#include "MathLib.h"

void Vector4Math::Normalize()
{
	float Length = Magnitude();
	x /= Length;
	y /= Length;
	z /= Length;
	w /= Length;

}

float Vector4Math::Magnitude()
{
	float Magnitude = sqrt((x*x + y*y + z*z + w*w));
	return Magnitude;
}

Vector4Math Vector4Math::Hexadecimal(unsigned int Other)
{
	Vector4Math Storage;
	Storage.x = ((Other >> 24) & 0xFF) / 255.0;
	Storage.y = ((Other >> 16) & 0xFF) / 255.0;
	Storage.z = ((Other >> 8) & 0xFF) / 255.0;
	Storage.w = ((Other)& 0xFF) / 255.0;

	return Storage;
	
}

Vector4Math Vector4Math::operator-(Vector4Math Other)
{
	Vector4Math Result;
	Result.x = x - Other.x;
	Result.y = y - Other.y;
	Result.z = z - Other.z;
	Result.w = w - Other.w;
	return Result;

}

Vector4Math Vector4Math::operator+(Vector4Math Other)
{
	Vector4Math Result;
	Result.x = x + Other.x;
	Result.y = y + Other.y;
	Result.z = z + Other.z;
	Result.w = w + Other.w;
	return Result;

}

bool operator==(const Vector4Math& left, const Vector4Math& right)
{
	if (std::abs(left.x - right.x) < 0.001f &&
		std::abs(left.y - right.y) < 0.001f &&
		std::abs(left.z - right.z) < 0.001f &&
		std::abs(left.w - right.w) < 0.001f)
	{
		return true;
	}
	return false;
}

//Vector4Math::~Vector4()
//{
//
//}
