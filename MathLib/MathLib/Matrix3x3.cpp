#include "Matrix3x3.h"


Matrix3x3::Matrix3x3()
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
}
//float matrix[3][3] = { { a2, b2, c2 }  };

Vector2Math Matrix3x3::Scale(Vector2Math Other)
{
	 // / / / / / / / / / / / / / / / / / //
	//U/N/D/E/R/ /C/O/N/S/T/R/U/C/T/I/O/N//
   // / / / / / / / / / / / / / / / / / //
	Vector2Math result;
	result.x = matrix[0] * Other.x;
	result.y = matrix[4] * Other.y;
	//matrix[8] * z;
	return result;

}


//Addition Operator
Matrix3x3 Matrix3x3::operator+(Matrix3x3 Other)
{
	Matrix3x3 Result;
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
Matrix3x3 Matrix3x3::operator-(Matrix3x3 Other)
{
	Matrix3x3 Result;
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
Matrix3x3 Matrix3x3::operator*(Matrix3x3 Other)
{
	Matrix3x3 Result;
	//Result.matrix[0] = matrix[0] + Other.matrix[0];
	//Result.matrix[1] = matrix[1] + Other.matrix[1];

	//Multiplication. Follows the formula for Row I believe
	Result.matrix[0] = matrix[0] * Other.matrix[0] + matrix[1] * Other.matrix[3] + matrix[2] * Other.matrix[6];
	Result.matrix[3] = matrix[0] * Other.matrix[1] + matrix[1] * Other.matrix[4] + matrix[2] * Other.matrix[7];
	Result.matrix[6] = matrix[0] * Other.matrix[2] + matrix[1] * Other.matrix[5] + matrix[2] * Other.matrix[8];

	Result.matrix[1] = matrix[3] * Other.matrix[0] + matrix[4] * Other.matrix[3] + matrix[5] * Other.matrix[6];
	Result.matrix[4] = matrix[3] * Other.matrix[1] + matrix[4] * Other.matrix[4] + matrix[5] * Other.matrix[7];
	Result.matrix[7] = matrix[3] * Other.matrix[2] + matrix[4] * Other.matrix[5] + matrix[5] * Other.matrix[8];

	Result.matrix[2] = matrix[6] * Other.matrix[0] + matrix[7] * Other.matrix[3] + matrix[8] * Other.matrix[6];
	Result.matrix[5] = matrix[6] * Other.matrix[1] + matrix[7] * Other.matrix[4] + matrix[8] * Other.matrix[7];
	Result.matrix[8] = matrix[6] * Other.matrix[2] + matrix[7] * Other.matrix[5] + matrix[8] * Other.matrix[8];
	
	
	
	
	
	

	return Result;

}

//int Matrix3by3 = One * Four, Two


Matrix3x3::~Matrix3x3()
{
}
