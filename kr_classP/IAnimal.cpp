#include "IAnimal.h"

IAnimal::IAnimal() : IAnimal("none", "none", 'n', 0){}
IAnimal::IAnimal(string name, string species, char gender, int age) :
	IPriut(name), _species(species), _gender(gender), _age(age) {}
IAnimal::IAnimal(string species, char gender, int age) :
	_species(species), _gender(gender), _age(age) {}

IAnimal::~IAnimal() {}

string IAnimal:: getSpecies() { return _species; }
void IAnimal::setSpecies(string species)
{
	this->_species = species;
}

char IAnimal::getGender() { return _gender; }
void IAnimal::setGender(char gender)
{
	this->_gender = gender;
}

int IAnimal::getAge() { return _age; }
void IAnimal::setAge(int age)
{
	this->_age = age;
}

void IAnimal::display()
{
	cout << "Animal info^\n";
	IPriut::display();
	cout << "species = " << _species << "\n"
		<<"gender = " << _gender << "\n"
		<<"age = " << _age << "\n";
}
void IAnimal::enter()
{
	cout << "Animal enter\n";
	IPriut::enter();
	cout << "enter species: "; cin >> _species;
	cout << "enter gender: "; cin >> _gender;
	cout << "enter age: "; cin >> _age;
}
void IAnimal::nullall()
{
	cout << "all fields are filled with basic values\n";
	setName("none");
	_species = "none";
	_gender = 'n';
	_age = 0;
}



//IResources
