#pragma once
#include "Node.h"
#include <iostream>
#include <exception>
#include <string>
#include <sstream>


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
	* @brief Конструктор списка через initializer_list.
	* @param list Список.
	*/
	List(std::initializer_list<int> list);

	/*
	* @brief Функция удаляющая первый элемент списка.
	* @exception Если список пуст.
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
	int& operator[] (int index);

	/*
	* @brief Функция которая выводит список в виде строки.
	* @return Возвращает строку.
	*/
	std::string ToString() const;

	/*
	* @brief Переопределение оператора сравнения.
	* @param list Список с которым сравниваем.
	* @return this->ToString() == list.ToString().
	*/
	bool operator==(List& list);

	/*
	* @brief Функция добавляющая элемент в начало списка.
	* @param data Данные которые добавляются в список.
	*/
	void PushFront(int data);

	/*
	* @brief Конструктор копирования.
	* @param other Принимаемый объект.
	*/
	List(const List& other);

	/*
	* @brief Перегрузка оператора для копирования.
	* @param other Список для копирования.
	* @return Скопированный список.
	*/
	List operator=(const List& other);
	
	/*
	* @brief Функция проверающая пустой список или нет.
	* @return false Если список пуст.
	*/
	bool IsEmpty() const;
};

