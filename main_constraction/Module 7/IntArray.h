#pragma once
#include <iostream>
using namespace std;

class IntArray
{
private:
    int _length{};
    int* _data{};

public:
    IntArray(const int length);

    ~IntArray() {
        delete[] _data;
    }

    int& operator[](int index) const {
        return _data[index];
    }

    void erase();
    int getLength();
    void showData();
    void appendData(int data[], int dataSize);
    void resizeContainer(int newLength);
    void copyData(const IntArray& arr);
    void insertValue(int index, int value);
    void deleteValue(int index);
};

