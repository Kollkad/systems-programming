#include "anyHuman.h"
#include <iostream>

std::string anyHuman::correctAlpha(std::string str)
{
	setlocale(LC_ALL, "");
	for (int i = 0; i < str.length(); ++i)
	{
		if (!isalpha(str.at(i)) && !ispunct(str.at(i)))
		{
			std::cout<<"Incorrect data entry in the field"<<std::endl;
			return "undefined";
		}
	}
	if (!(str == "undefined")) return str;
}
int anyHuman::correctCount(int count)
{
	setlocale(LC_ALL, "");
	if (count >= 0 && count<300) return count;
	else
	{
		std::cout << "Incorrect data entry in the field" << std::endl;
		return 0;
	}
}
int anyHuman::correctCountKidTeeth(int count)
{
	setlocale(LC_ALL, "");
	if (count >= 0 && count <= 20) return count;
	else
	{
		std::cout << "Incorrect data entry in the teeth-field" << std::endl;
		return 0;
	}
}
int anyHuman::correctCountAdultTeeth(int count)
{
	setlocale(LC_ALL, "");
	if (count >= 0 && count <= 32) return count;
	else
	{
		std::cout << "Incorrect data entry in the teeth-field" << std::endl;
		return 0;
	}
}