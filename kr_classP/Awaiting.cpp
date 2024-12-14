#include "Awaiting.h"

Awaiting::Awaiting() : Awaiting("none", "none", 'n', 0, true) {}
Awaiting::Awaiting(string name, string species, char gender, int age, bool availability) :
	IPriut(name), IAnimal(species, gender, age), _availability(availability) {}
Awaiting::Awaiting(bool availability) : _availability(availability) {}
Awaiting::~Awaiting() {}

bool Awaiting::getAvailability() { return _availability; }
void Awaiting::setAvailability(bool availability)
{
	this->_availability = availability;
}

void Awaiting::display()
{
	cout << "Awaiting info:\n";
	IPriut::display();
	cout << "species = " << getSpecies() << "\n"
		<< "gender = " << getGender() << "\n"
		<< "age = " << getAge() << "\n";
	cout << "availability = " << _availability << "\n";
}
void Awaiting::enter()
{
	cout << "Awaiting enter:\n";
	IPriut::enter();
	cout << "enter species: "; string species; cin >> species; setSpecies(species);
	cout << "enter gender: "; char gender; cin >> gender; setGender(gender);
	cout << "enter age: "; int age; cin >> age; setAge(age);
	cout << "enter availability: "; cin >> _availability;
}
void Awaiting::nullall()
{
	cout << "all fields are filled with basic values\n";
	setName("none");
	setSpecies("none");
	setGender('n');
	setAge(0);
	_availability = "none";
}






