#pragma once
#include <iostream>
#include <ostream>
#include <string>
using namespace std;


class Human
{
private:
    string name;
    string surname;
    short age;
    short height;
    short weight;

public:
    Human(string name, string surname, short age, short height, short weight);
    Human(string name, string surname, short age);
    ~Human();
    void displayHuman();
    short birthYear();
    double imt();

    void setName(string name);
    string getName() const;
    const short getHeight() const;

    Human(const Human& other); // копирование

    bool operator < (const Human& other);
    bool operator > (const Human& other);

    friend ostream& operator<<(ostream& output, const Human& m);

    Human& operator++();
    Human& operator--();
};

