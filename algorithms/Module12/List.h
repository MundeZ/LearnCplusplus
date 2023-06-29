#pragma once
#include "Node.h"

class List
{
public:
	List() : m_head(nullptr) {};
	void push_back(int data);
	void push_front(int data);
	void insert(int pos, int data);
	void show();
	void deleteNodeByValue(int data);
	void deleteNodeByKey(int position);
	void clear();
	bool find(int data);
private:
	Node* m_head;
};