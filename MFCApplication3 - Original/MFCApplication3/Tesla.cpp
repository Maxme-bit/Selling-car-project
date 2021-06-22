#include "pch.h"
#include "Tesla.h"
Tesla* GetTesla()
{
	Tesla* arr = new Tesla[32];
	ifstream file;
	file.open("Tesla.txt");
	string str, word;
	int i = 0, j = 0, key = 1,p=0;
	CString s;
	while (!file.eof())
	{
		getline(file, str);
		i = 0;
		key = 1;
		while (str[i] != ';')
		{
			j = 0;
			while (str[i] != ',')
			{
				word.push_back(str[i]);
				i++;
				j++;
			}
			s = word.c_str();
			i++;
			switch (key)
			{
			case 1: arr[p].ElectricCar::SetModel(s); break;
			case 2: arr[p].ElectricCar::SetColor(s); break;
			case 3: arr[p].ElectricCar::SetPrice(s); break;
			case 4: arr[p].ElectricCar::SetRange(s); break;
			case 5: arr[p].SportCar::SetMaxSpeed(s); break;
			case 6: arr[p].ElectricCar::SetAmount(s);break;
			}
			word = "";
			key++;
		}
		i++;
		p++;
	}
	file.close();
	return arr;
}
int GetHowManyTeslaCars() 
{
	int count = 1;
	char cur;
	ifstream file;
	file.open("Tesla.txt");
	while (!file.eof())
	{
		file.get(cur);
		if (cur=='\n')
			count++;
	}
	file.close();
	return count;
}
