#pragma once
#include <vector>
#include <memory>
#include "Message.h"

class Chat
{
private:
	std::vector<User> users_;
	std::vector<Message> messages_;
	std::shared_ptr<User> currentUser_;
	std::vector<User>& getAllUsers() { return users_; }
public:
	void login();
	void signUp();
	void sendMessage(const std::string& to, const std::string& text);
	void printPrivateMessages();
	void printAllmessages();
	void printAllUsers();
	void ShowMenuAfterLogin();
};

