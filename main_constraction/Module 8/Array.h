#pragma once

template<typename T>
class Array
{
private:
    int _length{};
    T* _data{};

public:
    Array(int length) : _length(length), _data(new T[length]) 
    {
        if (length > 100) {
            throw "Too long array, max lenght 100";
        }
    }

    ~Array() {
        delete[] _data;
    }

    int& operator[](int index) const {
        return _data[index];
    }

    void erase() {
        {
            delete[] _data;

            _data = nullptr;
            _length = 0;
        }
    }
    int getLength() {
        return _length;
    }

    void appendData(T data[], int dataSize) {
        if (_length < dataSize) {
            throw "Not enough space in array";
        }
        for (int i = 0; i < dataSize; i++) {
            _data[i] = data[i];
        }
    }

    void resizeContainer(int newLength) {
        if (newLength < 0) {
            throw "bad_lenght";
        }
        erase();
        _data = new int[newLength];
        _length = newLength;
    }

    void copyData(const Array& arr) {
        for (int i = 0; i < arr._length; i++) {
            _data[i] = arr._data[i];
        }
    }

    void insertValue(int index, T value) {
        if (_length < index) {
            throw "No space";
        }
        _data[index] = value;
    }

    void deleteValue(int index) {
        if (index < 0 || index >= _length) {
            throw "Bad index";
        }
        for (int i = index; i < _length - 1; i++) {
            _data[i] = _data[i + 1];
        }
        _length--;
    }

    void showData() {
        for (int i = 0; i < _length; ++i) {
            std::cout << _data[i] << std::endl;
        }
    }
};