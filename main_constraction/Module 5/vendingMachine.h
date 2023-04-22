#pragma once
#include "snackslot.h"
#include "product.h"
class VendingMachine
{
private:
	int avalibleSlot;

public:
	VendingMachine(int count);
	friend class SnackSlot;
	friend class Product;
	void setSlot(SnackSlot& other);
	int getCountAvalibleSlots();
};

