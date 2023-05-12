#include <iostream>
#include<string>
#include "Array.h"



int main() {
    try {
        Array<int> intTry(15);
        Array<std::string> stringTry(8);
        Array<double> doubleTry(10);


        int intSourceArray[] = { 1, 2, 3, 4, 5 };
        int intSize = sizeof(intSourceArray) / sizeof(intSourceArray[0]);
        intTry.appendData(intSourceArray, intSize);
        intTry.showData();


        std::string stringSourceArray[] = { "hello", "my name", "roman" };
        int stringSize = sizeof(stringSourceArray) / sizeof(stringSourceArray[0]);
        stringTry.appendData(stringSourceArray, stringSize);
        stringTry.showData();


        double doubleSourceArray[] = {2.4, 3.6, 8.5};
        int doubleSize = sizeof(doubleSourceArray) / sizeof(doubleSourceArray[0]);
        doubleTry.appendData(doubleSourceArray, doubleSize);
        doubleTry.showData();



    }
    catch (const char* ex)
    {
        std::cout << "Error: " << ex << std::endl;
    }
    return 0;
}