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

Vector4Math Vector4Math::Hexadecimal(unsigned int Other)
{
	Vector4Math Storage;
	Storage.x = ((Other >> 24) & 0xFF) / 255.0;
	Storage.y = ((Other >> 16) & 0xFF) / 255.0;
	Storage.z = ((Other >> 8) & 0xFF) / 255.0;
	Storage.w = ((Other)& 0xFF) / 255.0;

	return Storage;
	
}
//Vector4Math::~Vector4()
//{
//
//}
