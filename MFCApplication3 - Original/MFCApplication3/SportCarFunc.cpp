#include "pch.h"
#include "SportCar.h"
SportCar::SportCar()
{
	this->price = this->maxspeed = this->color = this->model = " ";
}
SportCar::SportCar(CString maxspeed, CString price, CString model, CString color)
{
	this->price = price;
	this->maxspeed = maxspeed;
	this->color = color;
	this->model = model;
}
SportCar::~SportCar() {}
void SportCar::SetPrice(CString price)
{
	this->price = price;
}
void SportCar::SetMaxSpeed(CString maxspeed)
{
	this->maxspeed = maxspeed;
}
void SportCar::SetModel(CString model)
{
	this->model = model;
}
void SportCar::SetColor(CString color)
{
	this->color = color;
}
void SportCar::SetAmount(CString amount)
{
	this->amount = amount;
}
CString SportCar::GetPrice()const
{
	return this->price;
}
CString SportCar::GetMaxSpeed()const
{
	return this->maxspeed;

}
CString SportCar::GetModel()const
{
	return this->model;
}
CString SportCar::GetColor()const
{
	return this->color;
}

CString SportCar::GetAmount()const
{
	return this->amount;
}