#include "vendingMachine.h"

VendingMachine::VendingMachine(int count)
{
	this->avalibleSlot = count;
}


void VendingMachine::setSlot(SnackSlot& other)
{
	if (avalibleSlot > 0)
	{
		avalibleSlot -= other.getCountSlots();
	}
}


int VendingMachine::getCountAvalibleSlots()
{
	return this->avalibleSlot;
}
