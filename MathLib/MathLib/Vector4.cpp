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


//Vector4Math::~Vector4()
//{
//
//}
