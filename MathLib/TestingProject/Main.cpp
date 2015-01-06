#include <MathLib.h>

#include <math.h>

float degtorad(float deg)
{
	return (3.1415926 / 180) * deg;
}

float radtodeg(float rad)
{
	return (180 / 3.1415926) * rad;
}

float PowofTwo(float value) // 2047
{
	float pow = 2;

	while (true)
	{
		// Is it a power of two?
		if (value == pow)
		{
			return value;
		}
		// Does the pow exceed the value?
		else if (value < pow)
		{
			// What's the closest power of two?
			float diff1 = pow - value;	// the difference between the current pow and the value
			float diff2 = value - (pow / 2);	// the difference between the value and previous pow

			if (diff1 < diff2)
			{
				// then the greater pow is the closer power
				return pow;
			}
			else
			{
				// then the lesser pow is the closer power
				return pow / 2;
			}
		}

		pow *= 2;
	}
}

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
	// Matrix Test
	


	system("pause");
}