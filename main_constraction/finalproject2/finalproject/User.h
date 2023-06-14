#pragma once
#include <string>

class User
{
private:
	const std::string login_;
	std::string password_;

public:
	User(const std::string& login, const std::string& password) : login_(login), password_(password) {};
	const std::string& getUserLogin() const { return login_; };
	const std::string& getUserPassword() const { return password_; };
	void setUserPassword(const std::string& password ) { password_ = password; };
};