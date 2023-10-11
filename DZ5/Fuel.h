#pragma once
#include <string>
#include <iostream>
using namespace std;
class Fuel{
private:
	string _FuelType;
	float _LowAccelerationModifier;
	float _HighAccelerationModifier;

protected:
	Fuel(string fuelType, float LowAccelerationModifier, float HighAccelerationModifier);
public:
	const string GetName() const;
	float GetLowAccelerationModifier() const;
	float GetHighAccelerationModifier() const;
};