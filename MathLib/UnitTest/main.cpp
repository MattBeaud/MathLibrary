#include <gtest\gtest.h>

#include <iostream>

#include <MathLib.h>

/*
TEST(dum, dum)
{
	EXPECT_EQ(0, 0);
	EXPECT_FLOAT_EQ(0.0f, 0.0f);
	EXPECT_TRUE(true);
	EXPECT_FALSE(false);
}
*/

//Vector 2 Tests
//----------------------------------------
TEST(Vector2, Equality)
{
	Vector2Math left;
	left.x = 1;
	left.y = 2;
	Vector2Math right;
	right.x = 1;
	right.y = 2;

	EXPECT_TRUE(left == right);
}
//------
TEST(Vector2, Addition)
{
	Vector2Math left;
	left.x = 1;
	left.y = 2;
	Vector2Math right;
	right.x = 1;
	right.y = 3;

	Vector2Math expected;
	expected.x = 2;
	expected.y = 5;

	EXPECT_EQ(expected, left + right);
}
//------
TEST(Vector2, Subtraction)
{
	Vector2Math left;
	left.x = 2;
	left.y = 4;
	Vector2Math right;
	right.x = 1;
	right.y = 2;

	Vector2Math expected;
	expected.x = 1;
	expected.y = 2;

	EXPECT_EQ(expected, left - right);
}
//----
TEST(Vector2, Normalize)
{
	Vector2Math left;
	left.x = 2;
	left.y = 4;

	left.Normalize();

	Vector2Math expected;
	expected.x = 0.447213590f;
	expected.y = 0.894427180f;

	EXPECT_EQ(expected, left);
}
//-------
TEST(Vector2Math, LinInter)
{
	Vector2Math Start;
	Start.x = 1;
	Start.y = 2;
	Vector2Math End;
	End.x = 2;
	End.y = 4;
	
	Vector2Math expected;
	expected.x = 1.5f;
	expected.y = 3.f; 

	EXPECT_EQ(expected, Start.lerp(End, 0.5f));
}
//-------
TEST(Vector2Math, Magnitude)
{
	Vector2Math left;
	left.x = 1;
	left.y = 3;

	float expected;
	expected = 3.1622776f;

	EXPECT_FLOAT_EQ(expected, left.Magnitude());
}
//-------
TEST(Vector2Math, DotProd)
{
	Vector2Math left;
	left.x = 1;
	left.y = 2;
	Vector2Math right;
	right.x = 3;
	right.y = 4;

	float expected;
	expected = 11;

	EXPECT_EQ(expected, left.x * (right.x + left.y * right.y));
}
//----------------------------------------------------------------

//Vector 3 Tests
//------------------------------------------------------
TEST(Vector3, Equality)
{
	Vector3Math left;
	left.x = 1;
	left.y = 2;
	left.z = 3;

	Vector3Math right;
	right.x = 1;
	right.y = 2;
	right.z = 3;

	EXPECT_TRUE(left == right);
}
//------
TEST(Vector3, Addition)
{
	Vector3Math left;
	left.x = 1;
	left.y = 2;
	left.z = 3;
	Vector3Math right;
	right.x = 1;
	right.y = 2;
	right.z = 3;

	Vector3Math expected;
	expected.x = 2;
	expected.y = 4;
	expected.z = 6;

	EXPECT_EQ(expected, left + right);
}
//------
TEST(Vector3, Subtraction)
{
	Vector3Math left;
	left.x = 2;
	left.y = 4;
	left.z = 6;
	Vector3Math right;
	right.x = 1;
	right.y = 2;
	right.z = 3;

	Vector3Math expected;
	expected.x = 1;
	expected.y = 2;
	expected.z = 3;

	EXPECT_EQ(expected, left - right);
}
//-----
TEST(Vector3, Normalize)
{
	Vector3Math left;
	left.x = 2;
	left.y = 4;
	left.z = 6;

	left.Normalize();

	Vector3Math expected;
	expected.x = 0.267261f;
	expected.y = 0.534522f;
	expected.z = 0.801784f;

	EXPECT_EQ(expected, left);
}
//-----
TEST(Vector3, LinInter)
{
	Vector3Math Start;
	Start.x = 1;
	Start.y = 2;
	Start.z = 3;
	Vector3Math End;
	End.x = 2;
	End.y = 4;
	End.z = 5;

	Vector3Math expected;
	expected.x = 1.5f;
	expected.y = 3.f;
	expected.z = 4.f;

	EXPECT_EQ(expected, Start.lerp(End, 0.5f));
}
//-----
TEST(Vector3, Magnitude)
{
	Vector3Math left;
	left.x = 1;
	left.y = 3;
	left.z = 6;

	float expected;
	expected = 6.7823299f;

	EXPECT_FLOAT_EQ(expected, left.Magnitude());
}
//-----
TEST(Vector3, DotProd)
{
	Vector3Math left;
	left.x = 1;
	left.y = 2;
	left.z = 3;
	Vector3Math right;
	right.x = 2;
	right.y = 3;
	right.z = 4;

	float expected;
	expected = 20;

	float dotproduct = left.DotProd(right);

	EXPECT_EQ(expected, dotproduct);
}
//-----
TEST(Vector3, CrossProd)
{
	Vector3Math left;
	left.x = 1;
	left.y = 2;
	left.z = 3;
	Vector3Math right;
	right.x = 4;
	right.y = 5;
	right.z = 6;

	Vector3Math expected;
	expected.x = -3;
	expected.y = 6;
	expected.z = -3;

	Vector3Math crossproduct = left.CrossProd(right);

	EXPECT_EQ(expected, crossproduct);
}
//--------------------------------------------------------

//Vector 4 Tests
//---------------------------------------------------------

TEST(Vector4, Equality)
{
	Vector4Math left;
	left.x = 1;
	left.y = 2;
	left.z = 3;
	left.w = 4;
	Vector4Math right;
	right.x = 1;
	right.y = 2;
	right.z = 3;
	right.w = 4;


	EXPECT_TRUE(left == right);
}

TEST(Vector4, Normalization)
{
	Vector4Math left;
	left.x = 2;
	left.y = 4;
	left.z = 6;
	left.w = 8;

	left.Normalize();

	Vector4Math expected;
	expected.x = 0.182574004f;
	expected.y = 0.365148008f;
	expected.z = 0.547722995f;
 	expected.w = 0.730297029f;

	EXPECT_EQ(expected, left);
}

TEST(Vector4, Hexadecimal)
{
	Vector4Math color;

	color = color.Hexadecimal(0xFFFFFFFF);

	Vector4Math expected;
	expected.x = 1;
	expected.y = 1;
	expected.z = 1;
	expected.w = 1;
	EXPECT_EQ(expected, color);

}

TEST(Main, PowofTwo)
{

}

TEST(Main, degtorad)
{
	unsigned int rad = (3.1415926 / 180);
	int expected = 0.01745329;
	EXPECT_EQ(expected, rad);
}

TEST(Main, radtodeg)
{
	unsigned int deg =(180 / 3.1415926) * 4;
	int expected = deg;
	EXPECT_EQ(expected, deg);
}

int main(int argc, char * argv[])
{
	::testing::InitGoogleTest(&argc, argv);

	int result = RUN_ALL_TESTS();

	std::cout << "Press enter to continue...\n";
	std::cin.get();

	return result;
}