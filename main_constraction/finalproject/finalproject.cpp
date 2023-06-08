#include <iostream>
#include <string>
#include <vector>
#include "Chat.h"

int main()
{
	Chat chat;
	chat.start();

	while (chat.isChatWork())
	{
		while (chat.getCurrentUser()) 
		{
			chat.showUserMenu();
		}
	}
}