#include "AnimalMember.h"

AnimalMember::AnimalMember() : AnimalMember("none", "none", 'n', 0, "none", 0) {}
AnimalMember::AnimalMember(string name, string species, char gender, int age, string jobtitle, int years) :
	IPriut(name), IAnimal(species, gender, age), Members(jobtitle), _years(years) {}
AnimalMember::AnimalMember(int years) : _years(years) {}
AnimalMember::~AnimalMember() {}

int AnimalMember::getYears() { return _years; }
void AnimalMember::setYears(int years)
{
	this->_years = years;
}

void AnimalMember::display()
{
	cout << "Animal Member info:\n";
	IPriut::display();
	//animal
	cout << "species = " << getSpecies() << "\n"
		<< "gender = " << getGender() << "\n"
		<< "age = " << getAge() << "\n";
	//member
	cout << "job title = " << getJobtitle() << "\n";
	// 
	cout << "work years = " << _years << "\n";
}
void AnimalMember::enter()
{
	cout << "Animal Member enter:\n";
	IPriut::display();
	cout << "enter species: "; string species; cin >> species; setSpecies(species);
	cout << "enter gender: "; char gender; cin >> gender; setGender(gender);
	cout << "enter age: "; int age;cin >> age; setAge(age);
	cout << "enter job title: "; string jobtitle; cin >> jobtitle; setJobtitle(jobtitle);
	cout << "enter work years: "; cin >> _years;
}

void AnimalMember::nullall()
{
	cout << "all fields are filled with basic values\n";
	setName("none");
	setSpecies("none");
	setGender('n');
	setAge(0);
	setJobtitle("none");
	_years = 0;
}





