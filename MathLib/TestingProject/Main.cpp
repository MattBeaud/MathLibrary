#include <MathLib.h>
#include <iostream>
#include <math.h>



void main()
{
	//Vector 2 Tests######################################
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
	//###############################################
	
	Vector3Math VectorA3;
	Vector3Math VectorB3;
	Vector3Math VectorC3;

	VectorA3.x = 5;
	VectorA3.y = 3;
	VectorB3.x = 2;
	VectorB3.y = 4;

	VectorC3 = VectorA3 + VectorB3;

	std::cout << VectorC3.x << "\n";
	std::cout << VectorC3.y << "\n";
	//-----------------------------------
	//Subtraction Test
	Vector3Math Sub1B;
	Vector3Math Sub2B;
	Vector3Math SubResultB;

	Sub1B.x = 24;
	Sub1B.y = 32;
	Sub2B.x = 42;
	Sub2B.y = 84;

	SubResultB = Sub1B - Sub2B;

	std::cout << SubResultB.x << "\n";
	std::cout << SubResultB.y << "\n";
	//************************************
	//Multiplication Test
	Vector2Math Mult1B;
	Vector2Math MultRB;

	Mult1B.x = 4;
	Mult1B.y = 6;

	MultRB = Mult1 * 2;


	std::cout << MultRB.x << "\n";
	std::cout << MultRB.y << "\n";


	system("pause");
}