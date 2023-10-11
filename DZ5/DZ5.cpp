#include <iostream>
#include <string>
#include <time.h>
#include "RacingGame.h"
#include "LADACar.h"
#include "GASelCar.h"
#include "HumanPlayer.h"
#include "AIPlayer.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	srand(time(NULL));

	RacingGame _RacingGame;

	_RacingGame.StartGame();

	return 0;
}