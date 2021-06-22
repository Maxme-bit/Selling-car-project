#pragma once
#include "Car.h"
class SportCar :public CObject, public Car
{
public:
	SportCar();
	SportCar(CString, CString, CString, CString);
	~SportCar();
	void SetMaxSpeed(CString);
	void SetPrice(CString);
	void SetModel(CString);
	void SetColor(CString);
	void SetAmount(CString);
	CString GetPrice()const;
	CString GetModel()const;
	CString GetColor()const;
	CString GetMaxSpeed()const;
	CString GetAmount()const;
	
private:
	CString maxspeed;
};

