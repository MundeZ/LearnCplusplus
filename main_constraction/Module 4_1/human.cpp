#include "human.h"



Human::Human(string name, string surname, short age, short height, short weight)
{
    this->name = name;
    this->surname = surname;
    this->age = age;
    this->height = height;
    this->weight = weight;
}

Human::Human(string name, string surname, short age)
{
    this->name = name;
    this->surname = surname;
    this->age = age;
    this->height = 0;
    this->weight = 0;
}
Human::~Human()
{}

Human::Human(const Human &other)
{
    this->name = other.name;
    this->surname = other.surname;
    this->age = other.age;
    this->height = other.height;
    this->weight = other.weight;
}
void Human::displayHuman()
{
    std::cout << name << std::endl;
    std::cout << surname << std::endl;
    std::cout << age << std::endl;
    std::cout << height << std::endl;
    std::cout << weight << std::endl;
}

short Human::birthYear()
{
    const int currentYear = 2023;
    return currentYear - age;
}

double Human::imt()
{
    return (weight / 2.205) / ((height / 39.37) * (height / 39.37));
}

void Human::setName(string name)
{
    this->name = name;
}

string Human::getName() const
{
    return name;
}

const short Human::getHeight() const
{
    return height;
}

Human& Human::operator++()
{
    ++height;
    return *this;
}

Human& Human::operator--()
{
    --height;
    return *this;
}


bool Human::operator > (const Human& other)
{
    return !(*this < other);
}

bool Human::operator < (const Human& other)
{
    return this->height < other.height;
}

ostream& operator<<(ostream& output, const Human& m) 
{
    output << "1: " << m.name << endl
        << "2: " << m.surname << endl
        << "3: " << m.age << endl
        << "4: " << m.height << endl
        << "5: " << m.weight << endl;
    return output;

}