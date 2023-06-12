#include"/SecondTask/LinkedList/List/List.h"
int main()
{
	setlocale(LC_ALL, "RUS");
	try {
		List list1;
		list1.PushBack(9);
		list1.PushBack(8);
		list1.PushBack(6);
		std::cout << list1[2];
		//list1.GetSize();
		//std::cout << list1.GetSize();
		//list1.Clear();
		list1.PopBack();
		std::cout << list1[2];
		//list1.GetSize();
		//std::cout << list1.GetSize();



		return 0;
	}

	catch (std::exception& error)
	{
		std::cerr << error.what();
		return 1;
	}
}