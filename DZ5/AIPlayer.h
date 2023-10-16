#pragma once
#include "Player.h"
#include "LADACar.h"
#include "GASelCar.h"
#include <iostream>
#include <random>

class AIPlayer : public Player{
public:
	AIPlayer();
	void FinishTurn() override;
private:
	static Car* SelectCar();
	random_device randomizer;
};