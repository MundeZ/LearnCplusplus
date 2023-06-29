#include <iostream>
#include <algorithm>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <chrono>

int getMax(int* arr, int n) // функция для нахождения максимального элемента в массиве
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}


void countSort(int* arr, int n)
{
	// шаг 0 находим максимальный элемент массива, если нам не известно m
	int max = getMax(arr, n);

	// шаг 1 создам массив частот размером m + 1 и временный массив размером n
	int* count = new int[max + 1];
	int* output = new int[n];
	for (size_t i = 0; i < max + 1; i++)
	{
		count[i] = 0;
	}

	// шаг 2 подсчитываем частоту повторения элементов
	for (size_t i = 0; i < n; i++)
	{
		count[arr[i]]++;
	}

	// шаг 3 подсчитываем накопленные частоты
	for (size_t i = 1; i < max + 1; i++)
	{
		count[i] += count[i - 1];
	}

	// шаг 4 записываем временный массив значения входного используя в качестве индекса во временном массиве значения накопленной частоты
	for (size_t i = 0; i < n; i++)
	{
		output[count[arr[i]] - 1] = arr[i];
		count[arr[i]]--;
	}

	for (size_t i = 0; i < n; i++)
		arr[i] = output[i];
	delete[] count;
	delete[] output;

}
void bubbleSort(int* arr, int n)
{
	for (size_t i = 0; i < n - 1; i++)
	{
		for (size_t j = 0; j < n - 1; j++)
		{
			if (arr[j] > arr[j + 1]) 
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

void write_arr(const std::string& filename, const int* arr, int n)
{
	std::fstream fs;
	fs.open(filename, std::fstream::out);
	if (fs.is_open())
	{
		fs << n << '\n';
		for (size_t i = 0; i < n; i++)
		{
			fs << arr[i] << ' ';
		}
		fs << '\n';
		fs.close();
	}
}
void read_arr(const std::string& filename, int*& arr, int& n)
{
	std::fstream fs;
	fs.open(filename, std::fstream::in);
	if (fs.is_open())
	{
		fs >> n;
		arr = new int[n];
		for (size_t i = 0; i < n; i++)
		{
			fs >> arr[i];
		}
		fs.close();
	}	
}

int main()
{
	std::string filename = "C://LearnCplusplus//filename.txt";
	const int size = 50000;
	int* rand_arr = new int[size];
	std::srand(time(nullptr));
	int lef_border = 5;
	int range_len = 1000; //правая граница = range_len + left_border
	
	for (size_t i = 0; i < size; i++)
	{
		rand_arr[i] = lef_border + rand() % range_len; // генерируем число в указанном диапазоне и записываем в массив
	}

	write_arr(filename, rand_arr, size); // записываем массив рандомных чисел в файл.

	int* array_from_file = nullptr;
	int n = 0;
	read_arr(filename, array_from_file, n); // читаем массив из файла.

	auto start = std::chrono::high_resolution_clock::now(); // сохраняем время начала работы алгоритма
	countSort(array_from_file, n);
	auto finish = std::chrono::high_resolution_clock::now(); // сохраняем конец работы алгоритма
	std::chrono::duration<double> elapsed = finish - start;
	
	std::cout << "elapsed time: " << elapsed.count() << " sec" << std::endl; // вычисляем продолжительность работы в сек

	delete[] rand_arr;
	delete[] array_from_file;

	return 0;
}