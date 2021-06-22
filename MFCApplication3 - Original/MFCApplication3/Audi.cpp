#include "pch.h"
#include "Audi.h"
Audi* GetAudi()
{
	Audi* arr = new Audi[32];
	ifstream file;
	file.open("Audi.txt");
	string str, word;
	int i = 0, j = 0, key = 1, p = 0;
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
			case 1: arr[p].SportCar::SetModel(s); break;
			case 2: arr[p].SportCar::SetColor(s); break;
			case 3: arr[p].SportCar::SetPrice(s); break;
			case 4: arr[p].SportCar::SetMaxSpeed(s); break;
			case 5: arr[p].PrivateCar::SetSeatNumber(s); break;
			case 6: arr[p].SportCar::SetAmount(s); break;
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