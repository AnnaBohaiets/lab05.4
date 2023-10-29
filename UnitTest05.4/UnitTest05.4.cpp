#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05.4/lab05.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest054
{
	TEST_CLASS(UnitTest054)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double g;
			g = S2(1, 6);
			Assert::AreEqual(g, 9.79631, 0.0001);
		}
	};
}
