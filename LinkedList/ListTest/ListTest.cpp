#include "pch.h"
#include "CppUnitTest.h"
#include "../List/List.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ListTest
{
	TEST_CLASS(ListTest)
	{
	public:
		
		TEST_METHOD(ToString_ValidData_Success)
		{
			List A;
			A.PushBack(4);
			Assert::IsTrue(A.ToString() == "4");
		}
		TEST_METHOD(PushBack_ValidData_Success)
		{
			List B;
			B.PushBack(5);
			B.PushBack(7);
			List C;
			C.PushBack(5);
			C.PushBack(7);
			Assert::IsTrue(B.ToString() == C.ToString());
		}
		TEST_METHOD(PopFront_ValidData_Success)
		{
			List X;
			X.PushBack(5);
			X.PushBack(4);
			X.PopFront();
			Assert::IsTrue(X.ToString() == "4");
		}
		TEST_METHOD(PushFront_ValidData_Success)
		{
			List Z;
			Z.PushBack(5);
			Z.PushFront(2);
			Assert::IsTrue(Z.ToString() == "25");
		}
		TEST_METHOD(CompareOperator_ValidData_Success)
		{
			List T;
			T.PushFront(5);
			T.PushFront(6);
			List C;
			C.PushBack(6);
			C.PushBack(5);
			Assert::IsTrue(C.ToString() == T.ToString());
		}
		TEST_METHOD(CopyOperator_ValidDataSuccess)
		{
			List K{ 1, 2, 3 };
			List M{ 4, 5, 6 };
			K = M;
			Assert::IsTrue(K.ToString() == M.ToString());
		}
		TEST_METHOD(PopFront_ExceptionExpected)
		{
			List D;
			Assert::ExpectException<std::invalid_argument>([]()
				{auto list = List({}); list.PopFront(); });
		}
	};
}
