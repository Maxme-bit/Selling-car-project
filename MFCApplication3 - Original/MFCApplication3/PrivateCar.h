#pragma once
#include "Car.h"
class PrivateCar :public CObject, public Car
{
public:
	PrivateCar();
	PrivateCar(CString, CString, CString, CString);
	~PrivateCar();
	void SetSeatNumber(CString);
	void  SetPrice(CString);
	void  SetModel(CString);
	void  SetColor(CString);
	void SetAmount(CString);
	CString  GetPrice()const;
	CString  GetModel()const;
	CString  GetColor()const;
	CString GetSeatNumber()const;
	CString GetAmount()const;
	
private:
	CString seatnumber;
};

