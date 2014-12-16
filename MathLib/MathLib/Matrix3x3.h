#pragma once
#include <math.h>
#include "MathLib.h"
class Matrix3x3
{
public:
	Matrix3x3();
	

	~Matrix3x3();
	//--------------------------------------------
	Vector2Math Scale(Vector2Math Other);
	
	//float Magnitude();

	//float z;
	


	float matrix[9];
	Matrix3x3 operator + (Matrix3x3 Other);
	Matrix3x3 operator - (Matrix3x3 Other);
	Matrix3x3 operator * (Matrix3x3 Other);

	//-------------------------------------------

};
