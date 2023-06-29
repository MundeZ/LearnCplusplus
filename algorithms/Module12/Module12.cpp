#include <iostream>
#include "List.h"

int main()
{
    List lst;
    lst.push_back(30);
    lst.push_back(31);
    lst.push_back(32);
    lst.show();
    lst.find(30);
}
