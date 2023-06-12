#pragma once
#include "Node.h"
#include <iostream>
#include <exception>
/*
* @brief Конструктор List.
* @param head Указатель на первый элемент.
* @param size размер списка.
*/
class List
{
	private:
	int size;
	Node* head;

	public:

	/*
	* @brief Пустой конструктор.
	*/
		List();

	/*
	* @brief Пустой деструктор.
	*/
	~List();

	/*
	* @brief Функция удаляющая элемент с конца списка.
	*/
	void PopBack();

	/*
	* @brief Функция удаляющая первый элемент списка.
	*/
	void PopFront();

	/*
	* @brief Функция добавляющая элемент в конец списка.
	* @param data Данные добавляемые в список.
	*/
	void PushBack(int data);

	/*
	* @brief Функция очистки списка.
	*/
	void Clear();

	/*
	* @brief Функция возвращающая количество элементов в списке.
	* @return size количество элементов в списке.
	*/
	size_t GetSize();

	/*
	* @brief Переопределение оператора квадратных скобок.
	* @param index индекс элемента списка.
	*/
	int& operator[] (const size_t index);

};

