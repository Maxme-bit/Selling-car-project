#pragma once
#include "PrivateCar.h"
#include "ElectricCar.h"
class Toyota :public PrivateCar, public ElectricCar
{
	friend Toyota* GetToyota();
};

