#pragma once
#include <iostream>
#include <random>
using namespace std;
class Chassis{
private:
	string _TypeName;
	float _MaxSpeedModifier;
protected:
	Chassis(string typeName, float MaxSpeedModifier);
public:
	const string GetName() const;
	float GetMaxSpeedModifier() const;
};