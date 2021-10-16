#include "pch.h"
#include "CppUnitTest.h"

//calling the function from main.c
extern "C" int setLength(int input, int* length);
extern "C" int setWidth(int input, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Assignment2Task2
{
	TEST_CLASS(LengthWidthInputTests)
	{
	public:

		TEST_METHOD(setLength_Length_Fail)
		{
			//testing the perimeter function using 5 and 5
			int length = 99;
			int input = 99;
			int CompareValue = 100;
			int test1 = length < CompareValue;
			int Result = 0;

			//using "&" for length and width to assign them pointers
			Result = setLength(input, &length);

			//if the perimeter equation works, this should succeed.
			Assert::IsTrue(&test1);
		}
	};
}


