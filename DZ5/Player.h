#pragma once
#include "Player.h"
#include "RoadType.h"
#include "Car.h"
#include "LADACar.h"
#include "GASelCar.h"
#include <iostream>
#include <random>
class Player{
private:
	Car* _PlayerCar;
public:
	Car *GetPlayerCar() const;
	virtual void FinishTurn() = 0;
protected:
	Player(Car* playerCar);
};