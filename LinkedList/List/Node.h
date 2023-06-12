#pragma once
#include<iostream>

/*
* @brief Конструктор Node.
* @param data Данные элемента.
* @param next Указатель на следующий элемент.
*/
struct Node
{
	Node(int data = 0, Node* pNext = nullptr);
	Node* pNext;
	int data;
};

