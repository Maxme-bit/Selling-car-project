#pragma once
#include"ElectricCar.h"
#include "SportCar.h"

class Tesla :public ElectricCar, public SportCar
{
	friend Tesla* GetTesla(); 
	friend int GetHowManyTeslaCars();

};



