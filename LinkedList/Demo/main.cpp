#include "../List/List.h"
int main()
{
	setlocale(LC_ALL, "RUS");
	try 
	{
	//List list1{2,3};
		List list2{1};
		std::cout << list2.IsEmpty();
	//list2 = list1;
	//list1.~List();
	//std::cout << list2.ToString();
	//std::cout << list1.GetSize();
	//list1.GetSize();
	//std::cout << list1.GetSize();
	//list1.Clear();
	//list1.PopBack();
	//std::cout << list1[2];
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
