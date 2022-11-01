#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int R;
			int a;
			int s;
			
			R = -(2 * 2 / (4 * 1 * 1 - 2 * 1));
			a = 1;
			s = a;
			a *= R;
			s += a;

			Assert::AreEqual(R, -2);
			Assert::AreEqual(a, -2);
			Assert::AreEqual(s, -1);
		}
	};
}
