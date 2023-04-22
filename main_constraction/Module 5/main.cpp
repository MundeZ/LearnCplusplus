#include <iostream>
#include "product.h"
#include "snackslot.h"
#include "vendingMachine.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	Product* bounty = new Product("Bounty");
	Product* twix = new Product("Twix");
	SnackSlot* slot = new SnackSlot(10);
	slot->addSlot(*bounty);
	slot->addSlot(*twix);

	VendingMachine* vm = new VendingMachine(15);

	vm->setSlot(*slot);

	std::cout << "Количество свободных слотов в вендинговой машине для батончиков:" << vm->getCountAvalibleSlots() << std::endl;


	delete vm;
	delete bounty;
	delete twix;
	delete slot;
}