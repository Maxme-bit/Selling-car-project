#pragma once
#include "PrivateCar.h"
#include"SportCar.h"
class Audi :public PrivateCar, public SportCar
{
	friend Audi* GetAudi();
	
};

