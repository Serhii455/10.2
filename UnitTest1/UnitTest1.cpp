#include "pch.h"
#include "CppUnitTest.h"
#include "../Pr_10.2/10.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string filename = "t1.txt";
			int A = 0;

			int g = IfFileOpen(filename);

			Assert::AreEqual(A, g);
		}
	};
}
