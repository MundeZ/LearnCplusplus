#include <iostream>
#include <ostream>
#include <string>
#include "human.h"
using namespace std;

int main()
{
    Human *roman = new Human("Roman", "Reshetnikov", 28, 170, 68);
    Human* igor = new Human("igor", "Reshetnikov", 28, 180, 68);

    if (roman > igor)
    {
        cout << "first more" << endl;
    }
    if (roman < igor)
    {
        cout << "second more" << endl;
    }

    cout << "My roman: " << *roman << endl;


    delete roman;
    delete igor;
    return 0;
}

