#include <iostream>
#include "IntArray.h"
using namespace std;


int main()
{
    try
    {
        IntArray myArray(10);
        IntArray newArray(15);

        int sourceArray[] = { 1,2,3,4,5 };
        int size = sizeof(sourceArray) / sizeof(sourceArray[0]);

        myArray.resizeContainer(8);
        newArray.resizeContainer(8);
        myArray.appendData(sourceArray, size);
        newArray.copyData(myArray);
        myArray.showData();
        myArray.insertValue(1,500);
        myArray.deleteValue(2);
        myArray.showData();
    }
    catch (const char* ex)
    {
        cout << "Error: " << ex << endl;
    }



}
