#pragma once
#include "IElectronics.h"
#include <string>

class HouseholdAppliances : virtual public IElectronics
{
public:
    HouseholdAppliances(string connectionType);
    void Show() override;
protected:
    string _connectionType;
};

class Microwave final :  public HouseholdAppliances
{
public:
    Microwave(string connectionType, int maxDegrees);
    void Show() override;
protected:
    int _maxDegrees;
};

class WashingMachine final : public HouseholdAppliances
{
public:
    WashingMachine(string connectionType, int modeNumbers);
    void Show() override;
protected:
    int _modeNumbers;
};