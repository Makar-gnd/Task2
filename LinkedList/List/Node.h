#pragma once
#include<iostream>

struct Node
{
	/*
	* @brief Конструктор Node.
	* @param data Данные элемента.
	* @param next Указатель на следующий элемент.
	*/
	Node(int data = 0, Node* pNext = nullptr);
	int data;
	Node* pNext;
};

