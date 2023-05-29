#pragma once
#include<iostream>

/*
* @brief Конструктор Node.
* @param data Данные элемента.
* @param next Указатель на следующий элемент.
*/
struct Node {
	int Data;
	Node* Next;
	Node(int data, Node* next = nullptr);
};