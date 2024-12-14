#pragma once //Awaiting
#include "IAnimal.h"
#include <iostream> 
using namespace std;


class Awaiting : virtual public IAnimal
{
public:
	Awaiting();
	Awaiting(string name, string species, char gender, int age, bool availability);
	Awaiting(bool availability);
	~Awaiting();

	bool getAvailability();
	void setAvailability(bool availability);

	void display();
	void enter();
	void nullall();

private:
	bool _availability;
};