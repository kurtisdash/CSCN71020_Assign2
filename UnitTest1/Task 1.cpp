#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);
extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* width);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Assignment2UnitTests
{
	TEST_CLASS(PerimiterAreaTests)
	{
	public:

		//TASK 1

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

		//TASK 2
		TEST_METHOD(setLength_PositiveLength_TestUpperLimit) {
			//testing the upper lmit of the setLength function
			int length = 1;
			int input = 100;
			setLength(input, &length);

			//testing the an integer one out of range. one lower will be in range
			Assert::IsFalse(input == length);
		}

		TEST_METHOD(setLength_PositiveLength_TestLowerLimit) {
			//testing the lower lmit of the setLength function
			int length = 99;
			int input = 0;
			setLength(input, &length);

			//testing an integer one out of range. one higher will be in range
			Assert::IsFalse (input == length);
		}

		TEST_METHOD(setLength_PositiveLength_TakesInput) {
			//testing the lower lmit of the setLength function
			int length = 60;
			int input = 50;
			setLength(input, &length);

			//testing to see if some arbitary number that should work works.
			Assert::AreEqual(input, length);
		}
		// WIDTH
		TEST_METHOD(setWidth_PositiveLength_TestUpperLimit) {
			//testing the lower lmit of the setWidth function
			int length = 1;
			int input = 100;
			setLength(input, &length);

			//testing an integer that is one out of range. one less will be in range.
			Assert::IsFalse(input == length);
		}

		TEST_METHOD(setWidth_PositiveLength_TestLowerLimit) {
			//testing the lower lmit of the setWidth function
			int length = 60;
			int input = 0;
			setLength(input, &length);

			//testing the lowest possible integer. one higher will be in range.
			Assert::IsFalse(input == length);

		}
		
		TEST_METHOD(setWidth_PositiveLength_TakesInput) {
			//testing the lower lmit of the setWidth function
			int length = 99;
			int input = 50;
			setLength(input, &length);

			//testing some arbitary number that should work
			Assert::AreEqual(input, length);

		}
	};
}

