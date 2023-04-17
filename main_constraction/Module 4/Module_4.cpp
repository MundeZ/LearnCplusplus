#include <iostream>

int main()
{

	setlocale(LC_ALL, "Russian");

	int a, b, x, result = 0, tmp = 1;
	char ext = 'n';


	while (ext == 'n') {

		std::cout << "Выберите какую операцию хотите совершить:" << std::endl
			<< "Введите 1 для выбора +" << std::endl
			<< "Введите 2 для выбора -" << std::endl
			<< "Введите 3 для выбора *" << std::endl
			<< "Введите 4 для выбора /" << std::endl
			<< "Введите 5 для выбора !" << std::endl
			<< "Введите 6 для выбора ^" << std::endl;
		std::cin >> x;
		switch (x) {
		case 1:
			std::cout << "Введите значения А: ";
			std::cin >> a;
			std::cout << "Введите значения Б: ";
			std::cin >> b;
			result = a + b;
			break;
		case 2:
			std::cout << "Введите значения А: ";
			std::cin >> a;
			std::cout << "Введите значения Б: ";
			std::cin >> b;
			result = a - b;
			break;
		case 3:
			std::cout << "Введите значения А: ";
			std::cin >> a;
			std::cout << "Введите значения Б: ";
			std::cin >> b;
			result = a * b;
			break;
		case 4:
			std::cout << "Введите значения А: ";
			std::cin >> a;
			std::cout << "Введите значения Б: ";
			std::cin >> b;
			if (a == 0)
			{
				std::cout << "Делить на ноль нельзя!" << std::endl;
				break;
			}
			else if (b == 0)
			{
				std::cout << "Делить на ноль нельзя!" << std::endl;
				break;
			}
			else
			{
				result = a / b;
				break;
			}

		case 5:
			std::cout << "Факториал какого числа вы хотите найти ? ";
			std::cin >> a;
			tmp = 1;
			for (int i = 1; i <= a; i++)
			{
				tmp *= i;
			}
			result = tmp;
			break;
		case 6:
			std::cout << "Введите число: ";
			std::cin >> a;
			std::cout << "Введите степень: ";
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

		std::cout << "Результат: " << result << std::endl;
		std::cout << "Введите любой знак для завершения, или n для продолжения: " << std::endl;
		char tmp2;
		std::cin >> tmp2;
		ext = tmp2;
	}


}
