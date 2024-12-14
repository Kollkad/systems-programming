#pragma once
#include "IAnimal.h"
#include "Members.h"
#include <iostream> 
using namespace std;

class AnimalMember :  virtual public IAnimal, public Members
{
public:
	AnimalMember();
	AnimalMember(string name, string species, char gender, int age, string jobtitle, int years);
	AnimalMember(int years);
	~AnimalMember();

	int getYears();
	void setYears(int years);

	void display();
	void enter();
	void nullall();

private:
	int _years;

};



