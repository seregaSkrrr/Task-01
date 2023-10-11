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

void AIPlayer::SelectChassis(){
	int IsChargeChassisNeded = randomizer() % 2;


	if (IsChargeChassisNeded == 1) {
		GetPlayerCar()->ChangeChassis();
	}
}

void AIPlayer::SelectFuel() {
	int IsChargeFuelNeded = randomizer() % 2;


	if (IsChargeFuelNeded == 1) {
		GetPlayerCar()->ChangeFuel();
	}
}