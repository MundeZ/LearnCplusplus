#pragma once
#include <string>
#include "HouseholdAppliances.h"
#include "PortableDevices.h"

class Keyboard final : public  HouseholdAppliances, PortableDevices
{
public:
	Keyboard(string connectionType, string batteryLife);
	void Show() override;
};


