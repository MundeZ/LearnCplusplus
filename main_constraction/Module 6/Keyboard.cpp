#include "Keyboard.h"
#include "HouseholdAppliances.h"
#include "PortableDevices.h"
#include <string>

Keyboard::Keyboard(string connectionType, string batteryLife) : HouseholdAppliances(connectionType), PortableDevices(batteryLife) {}

void Keyboard::Show()
{
	std::cout << "connectionType: " << _connectionType << " battery life: " << _batteryLife << std::endl;
}