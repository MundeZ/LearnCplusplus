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
    // создаем новый узел 
    Node* newNode = new Node(data);
    if (m_head == nullptr)
    {
        // если список пуст, новый узел и будет началом списка
        m_head = newNode;
        return;
    }

    if (pos == 0)
    {
        // крайний случай - вставка  в начало списка
        newNode->m_next = m_head;
        m_head = newNode;
        return;
    }

    int currPos = 0;

    Node* current = m_head;
    // в цикле идем по списку, пока список не кончится, или пока не дойдем до позиции
    while (currPos < pos - 1 && current->m_next != nullptr)
    {
        current = current->m_next;
        currPos++;
    }
    // меняем указатель на следующий узел на указатель на новый узел
    Node* next = current->m_next;
    current->m_next = newNode;
    // связываем список обратно, меняем указатель на узел, следующий после нового узла, на указатель на узел, следующий за current
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
        // Список пустой, ничего не удаляем
        return;
    }

    if (position == 0)
    {
        // Удаляемый узел - первый в списке
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
        // Указанная позиция находится за пределами списка
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
        Node* next = current->m_next; // Сохраняем указатель на следующий узел
        delete current; // Удаляем текущий узел
        current = next; // Переходим к следующему узлу
    }

    m_head = nullptr; // Обнуляем указатель на голову списка
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