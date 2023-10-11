#include "GASelCar.h"

GASelCar::GASelCar() :Car("GASel", Car::GenerateNumber(), new Track(), new Diesel()) {
	
}