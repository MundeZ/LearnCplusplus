#include <iostream>
#include "Chat.h"

int main()
{
    Chat chat;

    int choice = 0;
    bool chatWork = true;

    do
    {
        std::cout << "Welcome! Please choose: 1 - SignUp, 2 - Login, 3 - Exit: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            chat.signUp();
            chat.ShowMenuAfterLogin();
            break;
        case 2:
            chat.login();
            chat.ShowMenuAfterLogin();
            break;
        case 3:
            // exit programm
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
        }
    } while (choice != 3);

    return 0;
}