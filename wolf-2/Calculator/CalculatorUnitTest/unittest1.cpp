#include "stdafx.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication1/Calculator.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorUnitTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Calculator* calc = new Calculator();
			string ret = calc->Solve("3/5 + 2");
			Assert::AreEqual(ret, (string)"11+22=33");
			// TODO: 在此输入测试代码
		}

	};
}