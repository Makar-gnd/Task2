#include "pch.h"
#include "CppUnitTest.h"
#include "/SecondTask/LinkedList/List/List.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace miit::LList;
namespace UnitTestList
{
	TEST_CLASS(UnitTestList)
	{
	public:
		TEST_METHOD(PushBack_ValidData_Success)
		{
			///Arrange
			List First;
			First.PushBack(2);

			///Act
			int a = 2;

			///Assert
			Assert::IsTrue(First[0] == 2);
		}
	};
}
