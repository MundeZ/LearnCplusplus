#include <fstream> 	// Для типа ifstream 
#include <iostream>	// Для cout
using namespace std;

int main () {
    // Создаем объект типа ifstream с именем file_reader
    ifstream file_reader( "input_file.txt" );
    
    // Проверяем, открылся ли файл, если нет, то выходим из программы
    if( ! file_reader.is_open() ) {
        cout << "Could not open input file!" << '\n';
        return 1;
    }

    int number;
    // Проверяем успешность считывания целого значения
    if ( file_reader >> number ) {
        cout << "The value is: " << number;
    }
    return 0;
}
