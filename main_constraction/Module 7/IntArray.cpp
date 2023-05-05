#include "IntArray.h"

IntArray::IntArray(const int length) : _length(length), _data(new int[length])
{
    if (length > 100) {
        throw "Too long array, max lenght 100";
    }
}

void IntArray::erase() {
    {
        delete[] _data;

        _data = nullptr;
        _length = 0;
    }
}

int IntArray::getLength() {
    return _length;
}

void IntArray::showData() {
    for (int i = 0; i < _length; ++i) {
        cout << _data[i] << endl;
    }
}

void IntArray::appendData(int data[], int dataSize) {
    if (_length < dataSize) {
        throw "Not enough space in array";
    }
    for (int i = 0; i < dataSize; i++) {
        _data[i] = data[i];
    }
}

void IntArray::resizeContainer(int newLength) {
    if (newLength < 0) {
        throw "bad_lenght";
    }
    erase();
    _data = new int[newLength];
    _length = newLength;
}

void IntArray::copyData(const IntArray& arr) {
    for (int i = 0; i < arr._length; i++) {
        _data[i] = arr._data[i];
    }
}

void IntArray::insertValue(int index, int value) {
    if (_length < index) {
        throw "No space";
    }
    _data[index] = value;
}

void IntArray::deleteValue(int index) {
    if (index < 0 || index >= _length) {
        throw "Bad index";
    }
    for (int i = index; i < _length - 1; i++) {
        _data[i] = _data[i + 1];
    }
    _length--;
}


