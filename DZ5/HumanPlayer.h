#pragma once
#include "Player.h"
#include "RoadType.h"
#include "Car.h"
#include "LADACar.h"
#include "GASelCar.h"
#include <iostream>
#include <random>
class HumanPlayer : public Player{
public:
	HumanPlayer();
private:
	static Car* SelectCar();
};