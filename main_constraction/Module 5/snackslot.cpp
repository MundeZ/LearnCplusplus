#include "snackslot.h"


SnackSlot::SnackSlot(int countSlot)
{
	this->countSlot = countSlot;
}

void SnackSlot::addSlot(Product& other)
{
	if (countSlot > 0)
	{
		this->slot = other.getName();
		--countSlot;
	}
	else
	{
		std::cout << "��� ��������� ������ ��� ����������" << std::endl;
	}
}

std::string SnackSlot::getName()
{
	return this->slot;
}

const int SnackSlot::getCountSlots() const
{
	return this->countSlot;
}