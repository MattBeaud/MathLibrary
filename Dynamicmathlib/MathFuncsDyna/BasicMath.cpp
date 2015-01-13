#include "MathLib.h"
#include <iostream>

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