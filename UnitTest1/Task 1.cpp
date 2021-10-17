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
			int input = 99;
			setLength(input, &length);

			//testing the upper possible integer. any higher will cause failure.
			Assert::AreEqual(input, length);
		}

		TEST_METHOD(setLength_PositiveLength_TestLowerLimit) {
			//testing the lower lmit of the setLength function
			int length = 99;
			int input = 1;
			setLength(input, &length);

			//testing the lowest possible integer. any lower will cause failure.
			Assert::AreEqual(input, length);
		}

		TEST_METHOD(setLength_PositiveLength_TestLowerLimit_iAmFillerFixMe) {
			//testing the lower lmit of the setLength function
			int length = 99;
			int input = 1;
			setLength(input, &length);

			//testing the lowest possible integer. any lower will cause failure.
			Assert::AreEqual(input, length);
		}

		TEST_METHOD(setWidth_PositiveLength_TestUpperLimit) {
			//testing the lower lmit of the setWidth function
			int length = 1;
			int input = 99;
			setLength(input, &length);

			//testing the lowest possible integer. any lower will cause failure.
			Assert::AreEqual(input, length);
		}

		TEST_METHOD(setWidth_PositiveLength_TestLowerLimit) {
			//testing the lower lmit of the setWidth function
			int length = 99;
			int input = 1;
			setLength(input, &length);

			//testing the lowest possible integer. any lower will cause failure.
			Assert::AreEqual(input, length);

		}
		
		TEST_METHOD(setWidth_PositiveLength_TestLowerLimit_IWillBeThirdTask) {
			//testing the lower lmit of the setWidth function
			int length = 99;
			int input = 1;
			setLength(input, &length);

			//testing the lowest possible integer. any lower will cause failure.
			Assert::AreEqual(input, length);

		}
	};
}

