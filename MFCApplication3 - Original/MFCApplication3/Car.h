#pragma once
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

class Car
{
public:
	//void virtual whoim() = 0;

	void virtual SetPrice(CString price) = 0;
	void virtual SetModel(CString model) = 0;
	void virtual SetColor(CString color) = 0;
	void virtual SetAmount(CString amount) = 0;
	CString virtual GetPrice()const = 0;
	CString virtual GetModel()const = 0;
	CString virtual GetColor()const = 0;
	CString virtual GetAmount()const = 0;
protected:
	CString price, model, color,amount;

};

