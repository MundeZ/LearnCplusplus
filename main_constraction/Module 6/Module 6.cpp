#include <iostream>
#include "HouseholdAppliances.h"
#include "IElectronics.h"
#include "PortableDevices.h"
#include "Keyboard.h"

int main()
{
    setlocale(0, "");
    IElectronics* store[5];

    store[0] = new Microwave("220v", 50);
    store[1] = new WashingMachine("220v", 5);
    store[2] = new Laptop("24h", "Acer");
    store[3] = new Smartphone("40h", "Apple");
    store[4] = new Keyboard("USB 3.0", "48h");



    bool x = true;
    while (x)
    {
        cout << "Выберите товар : 1 - Микроволновка, 2 - Стиральная машина, 3 - Ноутбук, 4 - Смартфон, 5 - Клавиатура, 0 чтобы выйти" << std::endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            store[0]->Show();
            break;

        case 2:
            store[1]->Show();
            break;

        case 3:
            store[2]->Show();
            break;

        case 4:
            store[3]->Show();
            break;
        case 5:
            store[4]->Show();
            break;

        case 0:
            x = false;
            break;

        default:
            cout << "Выберите продукт от 1 до 5 или 0, чтобы выйти" << std::endl;
            break;
        }
    }

    delete store[0];
    delete store[1];
    delete store[2];
    delete store[3];
    delete store[4];
}
