#include "LADACar.h"
#include "GASelCar.h"
#include "AIPlayer.h"

Car* AIPlayer::SelectCar(){
	random_device randomizer;
	int  CarIndex = randomizer() % 2;
	switch (CarIndex){
	case 1:
		return new LADACar();
	case 0:
		return new GASelCar();
	default:
		SelectCar();
		return 0;
	}
	return nullptr;
}

AIPlayer::AIPlayer(): Player(AIPlayer::SelectCar()) {

}

void AIPlayer::FinishTurn(){
	int ChangeActionID = randomizer() % 3;
	switch (ChangeActionID){
	case 1:
		GetPlayerCar()->ChangeChassis();
		break;
	case 2:
		GetPlayerCar()->ChangeFuel();
		break;
	default:
		break;
	}
}
