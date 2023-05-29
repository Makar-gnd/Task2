#pragma once
#include "Node.h"
#include <iostream>

/*
* @brief Конструктор List.
* @param first Указатель на первый элемент.
* @param last Указатель на последний элемент.
*/
struct List {
	Node* First;
	Node* Last;
	List(Node* first, Node* last);
};
