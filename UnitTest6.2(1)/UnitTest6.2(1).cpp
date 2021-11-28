#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.2(1)/lab6.2(1).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest621
{
	TEST_CLASS(UnitTest621)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const int str = 5;
			const int stb = 10;
			int ar[str][stb];
			int sum = 0;
			for (int i = 0; i < str; i++);
			int ave;
			ave = sum / (str * stb);

			Assert::AreEqual(sum);

		}
	};
}
