#pragma once
#include "RoadType.h"
#include "AIPlayer.h"
#include "Player.h"
#include "HumanPlayer.h"
#include <iostream>
#include <random>
using namespace std;

class RacingGame {
private:
	RoadType _NextRoadType;
	int _NextRoadSpeed;
	random_device _Random;
	string _nextroadtype;
	Player** players;
	void MoveCars(Player** _players, int NextRoadTypeMaxSpeed);
public:
	int GetNextRoadMaximumSpeed();
	void GenerateNewNextRoadType();
	void ShowRoadTypeDescription();
	void generateNewTrack();
	void StartGame();
	void GetFinisher();
	void ShowCars();
	void ShowTurn(int counter);
};