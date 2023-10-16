#pragma once
#include "Fuel.h"
#include "Chassis.h"
#include "Nuclear.h"
#include "Diesel.h"
#include "Track.h"
#include "Wheels.h"
#include "Petrol.h"
#include "Thermonuclear.h"
#include <iostream>
#include <random>
using namespace std;

class Car {
public:
	void ShowCarInfo();
	void Move(int RoadTypeMaxSpeed);
	void ChangeChassis();
	void ChangeFuel();
	int GetDistance();
protected:
	Car(string Model, string Number, Chassis* chassis, Fuel* fuel);
	static string GenerateNumber();
private:
	random_device _Random;
	string _Model;
	string _Number;
	Chassis* _Chassis;
	Fuel* _Fuel;
	int _MaxSpeed;
	int _MaxAcceleration;
	int _Speed;
	int _Acceleration;
	int _Distance;

	static unsigned int CreateRandomDigit(random_device& Randomizer);
	static unsigned int CreateRandomLetter(random_device& Randomizer);
};