#pragma once
#include <iostream>
#include <string>
#include "snackslot.h"

class Product
{
private:
	std::string product;

public:
	Product(const std::string& snackName);
	std::string getName() const;
};

