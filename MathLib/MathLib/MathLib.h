#ifndef _MATHLIB_H_
#define _MATHLIB_H_
#include <iostream>
using namespace std;


class Vector2Math
{
public:
	float x;
	float y;
	

	
	float DotProd(Vector2Math Other);
	void Normalize();
	float Magnitude();
	
	Vector2Math lerp(Vector2Math End, float T);
	Vector2Math operator + (Vector2Math Other);
	Vector2Math operator - (Vector2Math Other);
	Vector2Math operator * (float Other);

	friend bool operator==(const Vector2Math& left, const Vector2Math& right);
	

};

class Vector3Math
{
public:
	float x;
	float y;
	float z;
	//float w;	//@JUSTIN LOOK AT ME
	
	
	Vector3Math CrossProd(Vector3Math Other);
	float DotProd(Vector3Math Other);
	void Normalize();
	float Magnitude();

	Vector3Math lerp(Vector3Math End, float T);
	Vector3Math operator + (Vector3Math Other);
	Vector3Math operator - (Vector3Math Other);
	Vector3Math operator * (float Other);
	friend bool operator==(const Vector3Math& left, const Vector3Math& right);

};
class Vector4Math
{
public:
	float x;
	float y;
	float z;
	float w;

	Vector4Math operator + (Vector4Math Other);
	Vector4Math operator - (Vector4Math Other);
	friend bool operator==(const Vector4Math& left, const Vector4Math& right);

	void Normalize();
	float Magnitude();
	Vector4Math Hexadecimal(unsigned int Other);



};

static float lerp(float Start, float End, float T)
{
	return Start + (End - Start) * T;
}



#endif

