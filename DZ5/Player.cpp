#include "Player.h"

Car* Player::GetPlayerCar() const
{
	return _PlayerCar;
}



 Player::Player(Car* playerCar) {
	_PlayerCar = playerCar;
}
