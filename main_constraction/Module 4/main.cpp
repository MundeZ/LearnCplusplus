#include <iostream>
#include "calculate.h"

int main()
{

	setlocale(LC_ALL, "Russian");

	int a, b, x,  result = 0, tmp = 1;
	char ext = 'n';


	while (ext == 'n') {

		std::cout << "�������� ����� �������� ������ ���������:" << std::endl
			<< "������� 1 ��� ������ +" << std::endl
			<< "������� 2 ��� ������ -" << std::endl
			<< "������� 3 ��� ������ *" << std::endl
			<< "������� 4 ��� ������ /" << std::endl
			<< "������� 5 ��� ������ !" << std::endl
			<< "������� 6 ��� ������ ^" << std::endl;
		std::cin >> x;
		switch (x) {
		case 1:
			std::cout << "������� �������� �: ";
			std::cin >> a;
			std::cout << "������� �������� �: ";
			std::cin >> b;
			result = Plus(a, b);
			break;
		case 2:
			std::cout << "������� �������� �: ";
			std::cin >> a;
			std::cout << "������� �������� �: ";
			std::cin >> b;
			result = Minus(a, b);
			break;
		case 3:
			std::cout << "������� �������� �: ";
			std::cin >> a;
			std::cout << "������� �������� �: ";
			std::cin >> b;
			result = Multiplication(a, b);
			break;
		case 4:
			std::cout << "������� �������� �: ";
			std::cin >> a;
			std::cout << "������� �������� �: ";
			std::cin >> b;
			result = Degree(a, b);
			break;

		case 5:
			std::cout << "��������� ������ ����� �� ������ ����� ? ";
			std::cin >> a;
			result = Factorial(a);
			break;
		case 6:
			std::cout << "������� �����: ";
			std::cin >> a;
			std::cout << "������� �������: ";
			std::cin >> b;
			result = pow(a,b);
			break;
		default:
			break;
		}

		std::cout << "���������: " << result << std::endl;
		std::cout << "������� ����� ���� ��� ����������, ��� n ��� �����������: " << std::endl;
		char tmp2;
		std::cin >> tmp2;
		ext = tmp2;
	}


}
