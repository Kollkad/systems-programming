#pragma once
#include "IPriut.h"
#include <iostream>
using namespace std;

class IAnimal : virtual public IPriut
{
public:
	IAnimal();
	IAnimal(string name, string species, char gender, int age);
	IAnimal(string species, char gender, int age);
	virtual ~IAnimal();

	string getSpecies();
	void setSpecies(string species);
	char getGender();
	void setGender(char gender);
	int getAge();
	void setAge(int age);

	virtual void display();
	virtual void enter();
	virtual void nullall() = 0;

private:
	string _species;
	char _gender;
	int _age;
};

