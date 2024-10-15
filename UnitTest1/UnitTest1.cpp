#include "pch.h"
#include "CppUnitTest.h"
#include "../LR6.3it/LR6.3it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int k = 20, sum = 0, ssum = 0;

			auto* b = new int[k];
			createArr(b, k);
			PositiveSum(b, k, sum);

			int* expected = new int[20];
			createArr(expected, k);
			PositiveSum(expected, k, ssum);

			Assert::AreEqual(sum, ssum, 0.00001);
		}
	};
}
