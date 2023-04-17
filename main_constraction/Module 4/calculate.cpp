#include <iostream>
#include "calculate.h"

int Plus(int a, int b)
{
	return a + b;
}

int Minus(int a, int b)
{
	return a - b;
}

int Multiplication(int a,int b)
{
	return a * b;
}

float Degree(float a, float b)
{
	if (a == 0)
	{
		std::cout << "Делить на ноль нельзя!" << std::endl;
	}
	else if (b == 0)
	{
		std::cout << "Делить на ноль нельзя!" << std::endl;
	}
	else
	{
		return a / b;
	}
}

int Factorial(int a)
{
	if (a == 1)
	{
		return 1;
	}
	else
	{
		return a * Factorial(a - 1);
	}
}

int pow(int a, int b) 
{
	int tmp = 1;
	for (int i = 1; i <= b; i++)
	{
		tmp *= a;
	}
	return tmp;

}