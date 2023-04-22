#pragma once
#include <iostream>
#include <string>
#include "product.h"

class SnackSlot
{
private:
    int countSlot;
    std::string slot;
    friend class Product;
public:
    SnackSlot(int countSlot);
    void addSlot(Product& other);
    std::string getName();
    const int getCountSlots() const;
};

