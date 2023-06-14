#include "Chat.h"
#include <iostream>
#include "User.h"

void Chat::signUp()
{
	std::string login,name,password;
	
	std::cout << "Enter login: ";
	std::cin >> login;
	std::cout << "Enter password: ";
	std::cin >> password;

	for (auto& user : users_)
	{
		if (user.getUserLogin() == login)
		{
			std::cout << "This login is already taken\n";
			return;
		}
	}

	User user(login,password);
	users_.push_back(user);
	currentUser_ = std::make_shared<User>(user);
}

void Chat::login()
{
	std::string login, password;

	std::cout << "Enter login: ";
	std::cin >> login;
	std::cout << "Enter password: ";
	std::cin >> password;

	for (auto& user : users_)
	{
		if (user.getUserLogin() == login && user.getUserPassword() == password)
		{
			currentUser_ = std::make_shared<User>(user);
			return;
		}
		else
		{
			std::cout << "Wrong login or password\n";
			return;
		}
	}
}

void Chat::ShowMenuAfterLogin()
{
	int choice = 0;
	bool chatWork = true;
	do
	{
		std::cout << "Welcome! Please choose: 1 - Send message, 2 - Print private messages, 3 - Print all messages, 4 - Print all users, 5 - Exit: ";
		std::cin >> choice;
		std::string to, text;
		switch (choice)
		{
		case 1:
			std::cout << "Enter login of user to send message: ";
			std::cin >> to;
			std::cout << "Enter text of message: ";
			std::cin >> text;
			sendMessage(to, text);
			break;
		case 2:
			printPrivateMessages();
			break;
		case 3:
			printAllmessages();
			break;
		case 4:
			printAllUsers();
			break;
		default:
			std::cout << "Invalid choice. Please try again." << std::endl;
			break;
		}
	} while (choice != 5);
}

void Chat::sendMessage(const std::string& to, const std::string& text)
{
	if (currentUser_ == nullptr)
	{
		std::cout << "You are not logged in\n";
		return;
	}
	if (to == "all")
		messages_.push_back(Message(currentUser_->getUserLogin(), to, text));
	else
	{
		for (auto& user : users_)
		{
			if (user.getUserLogin() == to)
			{
				Message message(currentUser_->getUserLogin(), to, text);
				messages_.push_back(message);
				return;
			}
		}
		std::cout << "User not found\n";
	}
}


void Chat::printAllUsers()
{
	if (currentUser_ == nullptr)
	{
		std::cout << "You are not logged in\n";
		return;
	}
	for (auto& user : users_)
	{
		std::cout << user.getUserLogin() << std::endl;
	}
}

void Chat::printAllmessages() {
	if (currentUser_ == nullptr)
	{
		std::cout << "You are not logged in\n";
		return;
	}
	for (auto& message : messages_)
	{
		std::cout << message.getFrom() << ": " << message.getText() << std::endl;
	}
}

void Chat::printPrivateMessages()
{
	if (currentUser_ == nullptr)
	{
		std::cout << "You are not logged in\n";
		return;
	}
	for (auto& message : messages_)
	{
		if (message.getTo() == currentUser_->getUserLogin())
		{
			std::cout << message.getFrom() << ": " << message.getText() << std::endl;
		}
	}
}
