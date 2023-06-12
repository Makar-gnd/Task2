#include"List.h"

List::List() : head(nullptr), size(0)
{
	
}

List::~List()
{
	
}

void List::PopFront()
{
	if (head == nullptr)
	{
		throw std::invalid_argument("Список пуст!");
	}
	else
	{
		Node* temp = head;
		head = head->pNext;
		delete temp;
		size--;
	}
}

void List::PushBack(int data)
{
	if (head == nullptr)
	{
		head = new Node(data);
	}
	else
	{
		Node* current = this->head;
		while (current->pNext != nullptr)
		{
			current = current->pNext;
		}
		current->pNext = new Node(data);
	}
	size++;
}

size_t List::GetSize()
{
	return size;
}


int& List::operator[](const size_t index)
{
	size_t counter = 0;
	Node* current = this->head;
	while (current != nullptr)
	{
		if (counter == index)
		{
			return current->data;
		}
	current = current->pNext;
	counter++;
	}
};

void List::Clear()
{
	while (size)
	{
		PopFront();
	}
}

void List::PopBack()
{
	Node* current = this->head;
	while (current->pNext != nullptr)
	{
		current = current->pNext;
	}
	delete current;
	size--;
}
