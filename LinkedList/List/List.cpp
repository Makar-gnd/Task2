#include"List.h"

List::List() : size(0), head(nullptr)
{

}

List::~List()
{
	Clear();
}

List::List(std::initializer_list<int> list) :head(nullptr), size(0)
{
	for (int data : list)
	{
		this->PushBack(data);
	}
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

void List::Clear()
{
	while (size)
	{
		PopFront();
	}
};

size_t List::GetSize()
{
	return size;
}

int& List::operator[](int index)
{
	int counter = 0;
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

std::string List::ToString() const
{
	std::stringstream buffer;
	Node* current = this->head;
	while (current != nullptr)
	{
		buffer << current->data;
		current = current->pNext;
	}
	return buffer.str();
}

bool List::operator==(List& list)
{
	return (this->ToString() == list.ToString());
}

void List::PushFront(int data)
{
	if (head == nullptr)
	{
		head = new Node(data);
	}
	else
	{
		head = new Node(data, head);
	}
	size++;
}

List::List(const List& other) :size(0), head(nullptr)
{
	Node* _pNext = nullptr;
	for (Node* _node = other.head; _node != nullptr; _node = _node->pNext)
	{
		Node* item = new Node(_node->data);
		if (!head)
		{
			head = item;
		}
		else
		{
			_pNext->pNext = item;
		}
		_pNext = item;
		size++;
	}
}

List List::operator=(const List& other)
{
	if (!this->IsEmpty())
	{
		this->Clear();
	}
	Node* current = other.head;
	while (current != nullptr)
	{
		this->PushBack(current->data);
		current = current->pNext;
	}
	return *this;
}

bool List::IsEmpty() const
{
	return this->head == nullptr;
}
;


