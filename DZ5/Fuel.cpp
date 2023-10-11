#include "Fuel.h"

Fuel::Fuel(string fuelType, float LowAccelerationModifier, float HighAccelerationModifier){
	_FuelType = fuelType;
	_LowAccelerationModifier = LowAccelerationModifier;
	_HighAccelerationModifier = HighAccelerationModifier;
}

const string Fuel::GetName() const
{
	return _FuelType;
}

float Fuel::GetLowAccelerationModifier() const
{
	return _LowAccelerationModifier;
}

float Fuel::GetHighAccelerationModifier() const
{
	return _HighAccelerationModifier;
}
