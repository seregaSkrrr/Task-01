#include "Chassis.h"

Chassis::Chassis(string typeName, float MaxSpeedModifier){
	_MaxSpeedModifier = MaxSpeedModifier;
	_TypeName = typeName;
}

const string Chassis::GetName() const
{
	return _TypeName;
}

float Chassis::GetMaxSpeedModifier() const
{
	return _MaxSpeedModifier;
}
