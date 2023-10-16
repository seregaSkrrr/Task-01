#include "HumanPlayer.h"
#include "LADACar.h"
#include "GASelCar.h"

HumanPlayer::HumanPlayer() : Player(HumanPlayer::SelectCar()){

}

void HumanPlayer::FinishTurn(){
	cout <<"[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]" << endl << endl;
	cout << "выберите действие: " << endl << "1 - Сменить тип шасси\n2 - Сменить тип топлива" << endl
		<< "От 3 до перевернутой на 90 гр. 8 - Ничего не делать! " << endl;
	cout <<"[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]" << endl << endl;
	int Select;
	cin >> Select;
	switch (Select) {
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

Car* HumanPlayer::SelectCar()
{
	cout << "выберите машину:\n1 - ЛАДА\n2 - ГАЗель" << endl;
	cout << "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]" << endl;
	
	int ChooseCar = 0;
	cin >> ChooseCar;

	switch (ChooseCar) {
	case 1:
		return new LADACar();
	case 2:
		return new GASelCar();
	default:
		cout << "АШИБКАААААА" << endl;
		SelectCar();
		return 0;
	}
}
