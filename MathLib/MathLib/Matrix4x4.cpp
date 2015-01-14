#include "Matrix4x4.h"


Matrix4x4::Matrix4x4()
{
	//Modifiable Numbers for the Matrix.
	matrix[0] = 0;
	matrix[1] = 0;
	matrix[2] = 0;
	matrix[3] = 0;
	matrix[4] = 0;
	matrix[5] = 0;
	matrix[6] = 0;
	matrix[7] = 0;
	matrix[8] = 0;
	matrix[9] = 0;
	matrix[10] = 0;
	matrix[11] = 0;
	matrix[12] = 0;
	matrix[13] = 0;
	matrix[14] = 0;
	matrix[15] = 0;
	
	
}
//float matrix[3][3] = { { a2, b2, c2 }  };

Vector3Math Matrix4x4::Scale(Vector3Math Other)
{
	Vector3Math result;
	result.x = matrix[0] * Other.x;
	result.y = matrix[4] * Other.y;
	result.z = matrix[8] * Other.z;
	return result;

}

Matrix4x4 OrthoProj(float Top, float Bottom, float Left, float Right, float Far, float Near)
{
	Matrix4x4 Result;

	Result.matrix[0] = 2 / (Right - Left);
	Result.matrix[1] = 0;
	Result.matrix[2] = 0;
	Result.matrix[3] = 0;
	Result.matrix[4] = 0;
	Result.matrix[5] = 2 / (Top - Bottom);
	Result.matrix[6] = 0;
	Result.matrix[7] = 0;
	Result.matrix[8] = 0;
	Result.matrix[9] = 0;
	Result.matrix[10] = -2 / (Far - Near);
	Result.matrix[11] = 0;
	Result.matrix[12] = -((Right + Left) / (Right - Left));
	Result.matrix[13] = -((Top + Bottom) / (Top - Bottom));
	Result.matrix[14] = -((Far + Near) / (Far - Near));
	Result.matrix[15] = 1;

	return Result;
}

//X Roatation
Matrix4x4 Matrix4x4::rotationX(float Rads)
{
	  // / / / / / / / / / / / / / / / / / //
	 //U/N/D/E/R/ /C/O/N/S/T/R/U/C/T/I/O/N//
	// / / / / / / / / / / / / / / / / / //


	matrix[0] = 1; matrix[1] = 0;	matrix[2] = 0;
	matrix[3] = 0; matrix[4] = cos(Rads); matrix[5] = sin(Rads);
	matrix[6] = 0; matrix[7] = -sin(Rads); matrix[8] = cos(Rads);
	return *this;
}


//Y Rotation
Matrix4x4 Matrix4x4::rotationY(float Rads)
{
	matrix[0] = cos(Rads); matrix[1] = 0; matrix[2] = -sin(Rads);
	matrix[3] = 0; matrix[4] = 1; matrix[5] = 0;
	matrix[6] = sin(Rads); matrix[7] = 0; matrix[8] = cos(Rads);
	return *this;
}


//Z Rotation
Matrix4x4 Matrix4x4::rotationZ(float Rads)
{
	matrix[0] = cos(Rads); matrix[1] = sin(Rads); matrix[2] = 0;
	matrix[3] = -sin(Rads); matrix[4] = cos(Rads); matrix[5] = 0;
	matrix[6] = 0; matrix[7] = 0; matrix[8] = 1;
	return *this;
}


//Vector Transforming
Vector4Math Matrix4x4::TransformVector(Vector4Math Other)
{
	  // / / / / / / / / / / / / / / / / / //
	 //U/N/D/E/R/ /C/O/N/S/T/R/U/C/T/I/O/N//
	// / / / / / / / / / / / / / / / / / //
	Other.x = Other.x * matrix[0] + Other.y * matrix[4] + Other.z * matrix[8] + Other.w * matrix[12];
	Other.y = Other.x * matrix[1] + Other.y * matrix[5] + Other.z * matrix[9] + Other.w * matrix[13];
	Other.z = Other.x * matrix[2] + Other.y * matrix[6] + Other.z * matrix[10] + Other.w * matrix[14];
	Other.w = Other.x * matrix[3] + Other.y * matrix[7] + Other.z * matrix[11] + Other.w * matrix[15];

	return Other;
}


//Addition Operatorx
Matrix4x4 Matrix4x4::operator+(Matrix4x4 Other)
{
	Matrix4x4 Result;
	//Result.matrix[0] = matrix[0] + Other.matrix[0];
	//Result.matrix[1] = matrix[1] + Other.matrix[1];

	//This for loop goes through each line of the array
	for (int loopCount = 0; loopCount < 9; loopCount++)
	{
		Result.matrix[loopCount] = matrix[loopCount] + Other.matrix[loopCount];
	}

	return Result;

}

//Subtraction Operator
Matrix4x4 Matrix4x4::operator-(Matrix4x4 Other)
{
	Matrix4x4 Result;
	//Result.matrix[0] = matrix[0] + Other.matrix[0];
	//Result.matrix[1] = matrix[1] + Other.matrix[1];

	//This for loop goes through each line of the array
	for (int loopCount = 0; loopCount < 9; loopCount++)
	{
		Result.matrix[loopCount] = matrix[loopCount] - Other.matrix[loopCount];
	}

	return Result;

}

//Multiplication Operator
Matrix4x4 Matrix4x4::operator*(Matrix4x4 Other)
{
	Matrix4x4 Result;
	//Result.matrix[0] = matrix[0] + Other.matrix[0];
	//Result.matrix[1] = matrix[1] + Other.matrix[1];

	//Multiplication. Follows the formula for Row I believe
	
	//Left
	matrix[0] * Other.matrix[0] + matrix[4] * Other.matrix[1] + matrix[8] * Other.matrix[2] + matrix[12] + Other.matrix[3];
	matrix[1] * Other.matrix[0] + matrix[5] * Other.matrix[1] + matrix[9] * Other.matrix[2] + matrix[13] + Other.matrix[3];
	matrix[2] * Other.matrix[0] + matrix[6] * Other.matrix[1] + matrix[10] * Other.matrix[2] + matrix[14] + Other.matrix[3];
	matrix[3] * Other.matrix[0] + matrix[7] * Other.matrix[1] + matrix[11] * Other.matrix[2] + matrix[15] + Other.matrix[3];

	//Mid Left
	matrix[0] * Other.matrix[4] + matrix[4] * Other.matrix[5] + matrix[8] * Other.matrix[6] + matrix[12] * Other.matrix[7];
	matrix[1] * Other.matrix[4] + matrix[5] * Other.matrix[5] + matrix[9] * Other.matrix[6] + matrix[13] * Other.matrix[7];
	matrix[2] * Other.matrix[4] + matrix[6] * Other.matrix[5] + matrix[10] * Other.matrix[6] + matrix[14] * Other.matrix[7];
	matrix[3] * Other.matrix[4] + matrix[7] * Other.matrix[5] + matrix[11] * Other.matrix[6] + matrix[15] * Other.matrix[7];

	//Mid Right
	matrix[0] * Other.matrix[8] + matrix[4] * Other.matrix[9] + matrix[8] * Other.matrix[10] + matrix[12] * Other.matrix[11];
	matrix[1] * Other.matrix[8] + matrix[5] * Other.matrix[9] + matrix[9] * Other.matrix[10] + matrix[13] * Other.matrix[11];
	matrix[2] * Other.matrix[8] + matrix[6] * Other.matrix[9] + matrix[10] * Other.matrix[10] + matrix[14] * Other.matrix[11];
	matrix[3] * Other.matrix[8] + matrix[7] * Other.matrix[9] + matrix[11] * Other.matrix[10] + matrix[15] * Other.matrix[11];

	//Right
	matrix[0] * Other.matrix[12] + matrix[4] * Other.matrix[13] + matrix[8] * Other.matrix[14] + matrix[12] * Other.matrix[15];
	matrix[1] * Other.matrix[12] + matrix[5] * Other.matrix[13] + matrix[9] * Other.matrix[14] + matrix[13] * Other.matrix[15];
	matrix[2] * Other.matrix[12] + matrix[6] * Other.matrix[13] + matrix[10] * Other.matrix[14] + matrix[14] * Other.matrix[15];
	matrix[3] * Other.matrix[12] + matrix[7] * Other.matrix[13] + matrix[11] * Other.matrix[14] + matrix[15] * Other.matrix[15];

	return Result;

}

//int Matrix3by3 = One * Four, Two

Matrix4x4::~Matrix4x4()
{
}
