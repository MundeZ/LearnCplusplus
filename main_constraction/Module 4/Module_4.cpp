#include <iostream>

int main()
{

	setlocale(LC_ALL, "Russian");

	int a, b, x, result = 0, tmp = 1;
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
			result = a + b;
			break;
		case 2:
			std::cout << "������� �������� �: ";
			std::cin >> a;
			std::cout << "������� �������� �: ";
			std::cin >> b;
			result = a - b;
			break;
		case 3:
			std::cout << "������� �������� �: ";
			std::cin >> a;
			std::cout << "������� �������� �: ";
			std::cin >> b;
			result = a * b;
			break;
		case 4:
			std::cout << "������� �������� �: ";
			std::cin >> a;
			std::cout << "������� �������� �: ";
			std::cin >> b;
			if (a == 0)
			{
				std::cout << "������ �� ���� ������!" << std::endl;
				break;
			}
			else if (b == 0)
			{
				std::cout << "������ �� ���� ������!" << std::endl;
				break;
			}
			else
			{
				result = a / b;
				break;
			}

		case 5:
			std::cout << "��������� ������ ����� �� ������ ����� ? ";
			std::cin >> a;
			tmp = 1;
			for (int i = 1; i <= a; i++)
			{
				tmp *= i;
			}
			result = tmp;
			break;
		case 6:
			std::cout << "������� �����: ";
			std::cin >> a;
			std::cout << "������� �������: ";
			std::cin >> b;
			tmp = 1;
			for (int i = 1; i <= b; i++)
			{
				tmp *= a;
			}
			result = tmp;
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
