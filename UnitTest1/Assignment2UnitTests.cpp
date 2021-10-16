#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);
extern "C" int setLength(int input, int* length);
extern "C" int setWidth(int input, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Assignment2UnitTests
{
	TEST_CLASS(PerimiterAreaTests)
	{
	public:
		
		TEST_METHOD(getPerimeter_PositiveLengthPositiveWidth_findPerimiter)
		{
			//testing the perimeter function using 5 and 5
			int length = 5;
			int width = 5;
			int Result = 0;

			//using "&" for length and width to assign them pointers
			Result = getPerimeter(&length, &width);
			Assert::AreEqual(20, Result);
		}
			
		TEST_METHOD(getArea_PositiveLengthPositiveWidth_findArea) {
			//testing the area function using 7 and 8
			int length = 7;
			int width = 8;
			int Result = 0;

			//using "&" for length and width to assign them pointers
			Result = getArea(&length, &width);
			Assert::AreEqual(56, Result);
		}
	};
	TEST_CLASS(SetLengthSetWidthTests)
	{
	public:

		TEST_METHOD(setLength_Length_GreaterThan99)
		{
			//testing the perimeter function using 5 and 5
			int length = 100;
			int input = 100;
			int Result = 0;

			//using "&" for to assign them pointers
			Result = setLength(input, &length);
			Assert::(100, Result);
		}
		TEST_METHOD(setLength_Length_Lessthan1)
		{
			//testing the perimeter function using 5 and 5
			int length = 0;
			int input = 0;
			int Result = 0;

			//using "&" for to assign them pointers
			Result = setLength(input, &length);
			Assert::AreNotEqual(0, Result);
		}
	};
}
