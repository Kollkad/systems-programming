#pragma once
#include "Ihuman.h"

class Kid : virtual public IHuman
{
	public:
		//перегр операторы
		Kid operator++();
		Kid operator--();
		/*Kid operator++(int);
		Kid operator--(int);*/
		bool operator<(Kid other);
		bool operator>(Kid other);

		friend std::ostream& operator<<(std::ostream& output, Kid k);
		//констр.
		Kid();
		Kid(std::string name, std::string surname, int age, float weight, int growth, int babyTeeth);
		Kid(int babyTeeth);
		//des
		~Kid();
		//get/set
		void setKidTeeth(int babyTeeth);
		int getKidTeeth();
		//mets
		void display();
		void readFromConsole();
		void writeToFile();

	private:
		int _babyTeeth;//до 20
};