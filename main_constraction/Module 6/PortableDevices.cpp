#include "PortableDevices.h"
#include <string>

PortableDevices::PortableDevices(string batteryLife) : _batteryLife(batteryLife) {}


void PortableDevices::Show()
{
	std::cout << "Basic battery life: " << _batteryLife << std::endl;
}


Laptop::Laptop(string batteryLife, string model) : PortableDevices(batteryLife), _model(model) {}

void Laptop::Show()
{
	std::cout << "battery life: " << _batteryLife << " model: " << _model << std::endl;
}

Smartphone::Smartphone(string batteryLife, string screenResolution) : PortableDevices(batteryLife), _screenResolution(screenResolution) {}


void Smartphone::Show()
{
	std::cout << "battery life: " << _batteryLife << " screenResolution: " << _screenResolution << std::endl;
}

