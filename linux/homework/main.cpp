#include <fstream>
#include <iostream>
#include <filesystem>
#include <string>

namespace fs = std::filesystem;

class User
{
public:
    std::string _name;
    std::string _login;
    std::string _pass;

    User(std::string name, std::string login, std::string pass) :_name(name), _login(login), _pass(pass) {}

    void saveToFile(const std::string& filename) {
        std::ofstream outfile(filename);
        if (outfile.is_open()) {
            outfile << _name << std::endl;
            outfile << _login << std::endl;
            outfile << _pass << std::endl;
            outfile.close();

            fs::permissions(filename, fs::perms::owner_read | fs::perms::owner_write, fs::perm_options::replace);

            std::cout << "User data saved to " << filename << std::endl;
        }
        else {
            std::cerr << "Error opening file: " << filename << std::endl;
        }
    }

    void loadFromFile(const std::string& filename) {
        std::ifstream infile(filename);
        if (infile.is_open()) {
            getline(infile, _name);
            getline(infile, _login);
            getline(infile, _pass);
            infile.close();
            fs::permissions(filename, fs::perms::owner_read | fs::perms::owner_write, fs::perm_options::replace);
            std::cout << "User data loaded from " << filename << std::endl;
        }
        else {
            std::cerr << "Error opening file: " << filename << std::endl;
        }
    }
};

class Message 
{
public:
    std::string _text;
    std::string _sender;
    std::string _receiver;

    Message(std::string text, std::string sender, std::string receiver) :_text(text), _sender(sender), _receiver(receiver) {}

    void saveToFile(const std::string& filename) {
        std::ofstream outfile(filename);
        if (outfile.is_open()) {
            outfile << _text << std::endl;
            outfile << _sender << std::endl;
            outfile << _receiver << std::endl;
            outfile.close();

            fs::permissions(filename, fs::perms::owner_read | fs::perms::owner_write, fs::perm_options::replace);

            std::cout << "User data saved to " << filename << std::endl;
        }
        else {
            std::cerr << "Error opening file: " << filename << std::endl;
        }
    }

    void loadFromFile(const std::string& filename) {
        std::ifstream infile(filename);
        if (infile.is_open()) {
            getline(infile, _text);
            getline(infile, _sender);
            getline(infile, _receiver);
            infile.close();
            fs::permissions(filename, fs::perms::owner_read | fs::perms::owner_write, fs::perm_options::replace);
            std::cout << "Message data loaded from " << filename << std::endl;
        }
        else {
            std::cerr << "Error opening file: " << filename << std::endl;
        }
    }
};


int main()
{
    User user("", "", "");
    user.saveToFile("user.txt");
    user.loadFromFile("user.txt");

    Message message("","","");
    message.saveToFile("msg.txt");
    message.loadFromFile("msg.txt");

    return 0;
}
