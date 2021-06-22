#pragma once
#include "Car.h"

class ElectricCar :public CObject,public Car
{
public:
	ElectricCar();
	ElectricCar(CString, CString, CString, CString);
	~ElectricCar();
	void  SetPrice(CString);
	void SetRange(CString);
	void  SetModel(CString);
	void  SetColor(CString);	
	void SetAmount(CString);
	CString GetPrice()const;
	CString GetRange()const;
	CString GetModel()const;
	CString GetColor()const;
	CString GetAmount()const;


private:
	CString range;
};

