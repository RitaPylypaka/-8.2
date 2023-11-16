#include "pch.h"
#include "CppUnitTest.h"
#include <string>
#include <sstream>
#include "../пр8.2/8.2.cpp"
using namespace std;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest82
{
	TEST_CLASS(UnitTest82)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string input = "0000545782.87452";
			string expectedOutput = "545782.87452";

			
			string result = FormatNumbers(input);  
			Assert::AreEqual(expectedOutput, result, L"Formatting numbers failed", LINE_INFO());
		}

	};
}
