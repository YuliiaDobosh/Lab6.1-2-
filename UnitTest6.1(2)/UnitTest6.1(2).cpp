#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab6.1(2)\Lab6.1(2).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest612
{
	TEST_CLASS(UnitTest612)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A[] = { 0,3,6,9 };
			int tmp = Count(A,4,0);
			Assert::AreEqual(6,tmp);
	
		}
	};
}
