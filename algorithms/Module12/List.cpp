#include "List.h"
#include <iostream>

void List::push_back(int data)
{
	Node* node = new Node(data);
	if (m_head == nullptr)
	{
		m_head = node;
		return;
	}
	Node* last = m_head;

	while (last->m_next != nullptr)
	{
		last = last->m_next;
	}

	last->m_next = node;
	return;
}

void List::push_front(int data)
{
	Node* node = new Node(data);
	node->m_next = m_head;
	m_head = node;
}

void List::insert(int pos, int data)
{
    // ������� ����� ���� 
    Node* newNode = new Node(data);
    if (m_head == nullptr)
    {
        // ���� ������ ����, ����� ���� � ����� ������� ������
        m_head = newNode;
        return;
    }

    if (pos == 0)
    {
        // ������� ������ - �������  � ������ ������
        newNode->m_next = m_head;
        m_head = newNode;
        return;
    }

    int currPos = 0;

    Node* current = m_head;
    // � ����� ���� �� ������, ���� ������ �� ��������, ��� ���� �� ������ �� �������
    while (currPos < pos - 1 && current->m_next != nullptr)
    {
        current = current->m_next;
        currPos++;
    }
    // ������ ��������� �� ��������� ���� �� ��������� �� ����� ����
    Node* next = current->m_next;
    current->m_next = newNode;
    // ��������� ������ �������, ������ ��������� �� ����, ��������� ����� ������ ����, �� ��������� �� ����, ��������� �� current
    newNode->m_next = next;
}

void List::show()
{
    Node* current = m_head;

    while (current != nullptr)
    {
        std::cout << current->m_data << " ";
        current = current->m_next;
    }
    std::cout << " " << "\n";
}

void List::deleteNodeByValue(int data)
{
    Node* temp = m_head;
    Node* prev = nullptr;

    if (temp && temp->m_data == data)
    {
        m_head = temp->m_next;
        delete temp;
        return;
    }
    while (temp && temp->m_data != data)
    {
        prev = temp;
        temp = temp->m_next;
    }
    if (!temp)
    {
        return;
    }
    prev->m_next = temp->m_next;
    delete temp;
}

void List::deleteNodeByKey(int position)
{
    if (m_head == nullptr)
    {
        // ������ ������, ������ �� �������
        return;
    }

    if (position == 0)
    {
        // ��������� ���� - ������ � ������
        Node* temp = m_head;
        m_head = m_head->m_next;
        delete temp;
        return;
    }

    Node* prev = nullptr;
    Node* current = m_head;

    int currPos = 0;

    while (current != nullptr && currPos < position)
    {
        prev = current;
        current = current->m_next;
        currPos++;
    }

    if (current == nullptr)
    {
        // ��������� ������� ��������� �� ��������� ������
        return;
    }

    if (prev != nullptr)
    {
        prev->m_next = current->m_next;
    }
    delete current;
}

void List::clear()
{
    Node* current = m_head;

    while (current != nullptr)
    {
        Node* next = current->m_next; // ��������� ��������� �� ��������� ����
        delete current; // ������� ������� ����
        current = next; // ��������� � ���������� ����
    }

    m_head = nullptr; // �������� ��������� �� ������ ������
}

bool List::find(int data)
{
    Node* current = m_head;

    while (current != nullptr)
    {
        if (current->m_data == data)
        {
            std::cout << "yes";
            return true;
        }

        current = current->m_next;
    }
    std::cout << "false";
    return false;
}