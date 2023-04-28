#include "HouseholdAppliances.h"
#include <string>


HouseholdAppliances::HouseholdAppliances(string connectionType) : _connectionType(connectionType) {}

void HouseholdAppliances::Show()
{
	std::cout << "Basic connection type: " << _connectionType << std::endl;
}

Microwave::Microwave(string connectionType, int maxDegrees) : HouseholdAppliances(connectionType), _maxDegrees(maxDegrees) {}

void Microwave::Show()
{
	std::cout << "Microwave connectionType: " << _connectionType << " maxDegrees: " << _maxDegrees << std::endl;
}

WashingMachine::WashingMachine(string connectionType, int modeNumbers) : HouseholdAppliances(connectionType), _modeNumbers(modeNumbers) {}

void WashingMachine::Show()
{
	std::cout << "WashingMachine connectionType: " << _connectionType << " modeNumbers: " << _modeNumbers << std::endl;
}