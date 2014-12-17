#ifndef _MATHLIB_H_
#define _MATHLIB_H_




class Vector2Math
{
public:
	float x;
	float y;
	

	
	float DotProd(Vector2Math Other);
	void Normalize();
	float Magnitude();
	
	Vector2Math lerp(Vector2Math Start, Vector2Math End, float T);
	Vector2Math operator + (Vector2Math Other);
	Vector2Math operator - (Vector2Math Other);
	Vector2Math operator * (float Other);

	

};

class Vector3Math
{
public:
	float x;
	float y;
	float z;
	float w;
	
	
	Vector3Math CrossProd(Vector3Math Other);
	float DotProd(Vector3Math Other);
	void Normalize();
	float Magnitude();

	Vector3Math lerp(Vector3Math Start, Vector3Math End, float T);
	Vector3Math operator + (Vector3Math Other);
	Vector3Math operator - (Vector3Math Other);
	Vector3Math operator * (float Other);


};



#endif

