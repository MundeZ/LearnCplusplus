#pragma once
#include "IElectronics.h"

class PortableDevices : virtual public IElectronics
{
public:
	PortableDevices(string batteryLife);
	void Show() override;
protected:
	string _batteryLife;
};

class Laptop final : public PortableDevices
{
public:
	Laptop(string batteryLife, string model);
	void Show();
protected:
	string _model;
};


class Smartphone final : public PortableDevices
{
public:
	Smartphone(string batteryLife, string screenResolution);
	void Show();
protected:
	string _screenResolution;
};