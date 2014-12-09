#include <MathLib.h>
#include <iostream>
#include <math.h>



void main()
{
	//+++++++++++++++++++++++++++++++++++
	//Addition test
	Vector2Math VectorA;
	Vector2Math VectorB;
	Vector2Math VectorC;

	VectorA.x = 5;
	VectorA.y = 3;
	VectorB.x = 2;
	VectorB.y = 4;

	VectorC = VectorA + VectorB;

	std::cout << VectorC.x << "\n";
	std::cout << VectorC.y << "\n";
	
	//-----------------------------------
	//Subtraction Test
	Vector2Math Sub1;
	Vector2Math Sub2;
	Vector2Math SubResult;

	Sub1.x = 24;
	Sub1.y = 32;
	Sub2.x = 42;
	Sub2.y = 84;

	SubResult = Sub1 - Sub2;

	std::cout << SubResult.x << "\n";
	std::cout << SubResult.y << "\n";
	//************************************
	//Multiplication Test
	Vector2Math Mult1;
	Vector2Math MultR;

	Mult1.x = 4;
	Mult1.y = 6;
		
	MultR = Mult1 * 2;

	
	std::cout << MultR.x << "\n";
	std::cout << MultR.y << "\n";



	system("pause");
}