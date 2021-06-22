#include "pch.h"
#include "ElectricCar.h"

ElectricCar::ElectricCar()
{
	this->price = this->range = this->color = this->model = " ";
}
ElectricCar::ElectricCar(CString range, CString price, CString model, CString color) {
	this->price = price;
	this->range = range;
	this->color = color;
	this->model = model;
}
ElectricCar::~ElectricCar() {}
void ElectricCar::SetPrice(CString price)
{
	this->price = price;
}
void ElectricCar::SetRange(CString range)
{
	this->range = range;
}
void ElectricCar::SetModel(CString model)
{
	this->model = model;
}
void ElectricCar::SetColor(CString color)
{
	this->color = color;
}
void ElectricCar::SetAmount(CString amount)
{
	this->amount = amount;
}
CString ElectricCar::GetPrice()const
{
	return this->price;
}
CString ElectricCar::GetRange()const
{
	return this->range;
}
CString ElectricCar::GetModel()const
{
	return this->model;
}
CString ElectricCar::GetColor()const
{
	return this->color;
}

CString ElectricCar::GetAmount()const
{
	return this->amount;
}