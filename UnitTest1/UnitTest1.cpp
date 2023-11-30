#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab №8.1string/Lab №8.1string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestContainsAllLetters_Negative)
		{
			std::string testInput = "randomtext"; 

			// Перевіряємо, чи функція containsAllLetters повертає false для рядка, який не містить усі літери з "while"
			Assert::IsFalse(containsAllLetters(testInput));
		}

		TEST_METHOD(TestReplaceWhile)
		{
			std::string testInput = "while hello while world"; 

			std::string expectedResult = "** hello ** world";
			std::string actualResult = replaceWhile(testInput);

			// Перевіряємо, чи функція replaceWhile виконує заміну правильно
			Assert::AreEqual(expectedResult, actualResult);
		}
	};
}
