#include "product.h"

Product::Product(const std::string& snackName)
{
	this->product = snackName;
}

std::string Product::getName() const
{
	return this->product;
}