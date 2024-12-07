#pragma once
#include "Ihuman.h"

class Adult : virtual public IHuman 
{
	public:
		//перегр операторы
		Adult operator++();
		Adult operator--();/*
		Adult operator++(int);
		Adult operator--(int);*/
		bool operator<(Adult other);
		bool operator>(Adult other);

		friend std::ostream& operator<<(std::ostream& output, Adult a);
		//констр.
		Adult();
		Adult(std::string name, std::string surname, int age, float weight, int growth, int molars);
		Adult(int molars);
		//des
		~Adult();
		//get/set
		void setAdultTeeth(int molars);
		int getAdultTeeth();
		//met
		void display();
		void readFromConsole();
		void writeToFile();

	private:
		int _molars;//до 32
};