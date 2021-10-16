#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);

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
}
