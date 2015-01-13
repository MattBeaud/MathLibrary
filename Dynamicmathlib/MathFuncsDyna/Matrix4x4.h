#pragma once
#include <math.h>
#include "MathLib.h"
class DLLEXPORT Matrix4x4
{
public:
	Matrix4x4();

	~Matrix4x4();

	//--------------------------------------------
	Vector3Math Scale(Vector3Math Other);
	Vector4Math TransformVector(Vector4Math Other);
	Matrix4x4 rotationX(float Rads);
	Matrix4x4 rotationY(float Rads);
	Matrix4x4 rotationZ(float Rads);
	//float Magnitude();




	float matrix[16];
	Matrix4x4 operator + (Matrix4x4 Other);
	Matrix4x4 operator - (Matrix4x4 Other);
	Matrix4x4 operator * (Matrix4x4 Other);

	//-------------------------------------------
};

