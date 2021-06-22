#include "pch.h"
#include "PrivateCar.h"
PrivateCar::PrivateCar()
{
	this->price = this->seatnumber = this->color = this->model = " ";
}
PrivateCar::PrivateCar(CString price, CString seatnumber, CString model, CString color)
{
	this->price = price;
	this->seatnumber = seatnumber;
	this->color = color;
	this->model = model;
}
PrivateCar::~PrivateCar() {}
void PrivateCar::SetPrice(CString price)
{
	this->price = price;
}
void PrivateCar::SetSeatNumber(CString seatnumber)
{
	this->seatnumber = seatnumber;
}
void PrivateCar::SetModel(CString model)
{
	this->model = model;
}
void PrivateCar::SetColor(CString color)
{
	this->color = color;
}
void PrivateCar::SetAmount(CString amount)
{
	this->amount = amount;
}
CString PrivateCar::GetPrice()const
{
	return this->price;
}
CString PrivateCar::GetSeatNumber()const
{
	return this->seatnumber;
}
CString PrivateCar::GetModel()const
{
	return this->model;
}
CString PrivateCar::GetColor()const
{
	return this->color;
}

CString PrivateCar::GetAmount()const
{
	return this->amount;
}