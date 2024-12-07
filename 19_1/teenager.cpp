#include "teenager.h"
//перегр операторы
Teenager Teenager::operator++()
{
	setAge(getAge() + 10);
	return *this;
}
Teenager Teenager::operator--()
{
	if (getAge() - 10 >= 0) setAge(getAge() - 10);
	else std::cout << "It is not possible to subtract age by 10, otherwise the value will be invalid." << std::endl;
	return *this;
}/*
Teenager Teenager::operator++(int)//post
{
	Teenager t(*this);
	++(*this);
	return t;
}
Teenager Teenager::operator--(int)
{
	Teenager t(*this);
	--(*this);                                                           
	return t;
}*/
bool Teenager::operator<(Teenager other)
{
	return this->getGrowth() < other.getGrowth();
}
bool Teenager::operator>(Teenager other)
{
	return this->getGrowth() > other.getGrowth();
}
std::ostream& operator<<(std::ostream& output, Teenager t)
{
	output << "Name = " << t.getName() << std::endl
		<< "Surname = " << t.getSurname() << std::endl
		<< "Age = " << t.getAge() << std::endl
		<< "Weight = " << t.getWeight() << std::endl
		<< "Growth = " << t.getGrowth() << std::endl
		<< "Baby teeth = " << t.getKidTeeth() << std::endl
		<< "Molars = " << t.getAdultTeeth() << std::endl
		<< "Social category = " << t._socialCategory << std::endl
		<<"-----------------------------------"<<std::endl;
	return output;
}

Teenager::Teenager(std::string name, std::string surname, int age, float weight, int growth, int babyTeeth, int molars, std::string socialCategory) :
	IHuman(name, surname, age, weight, growth), Kid(babyTeeth), Adult(molars), _socialCategory(socialCategory) {}
Teenager::Teenager(): Teenager("undefined", "undefined", 0, 0, 0, 0, 0, "undefined") {}
Teenager::~Teenager() {}
//set/get
void Teenager::setSocialCategory(std::string socialCategory)
{
	this->_socialCategory = correctAlpha(socialCategory);
}

std::string Teenager::getSocialCategory()
{
	return _socialCategory;
}
//mets
void Teenager::display()
{
	setlocale(LC_ALL, "");
	IHuman::display();
	std::cout << "Baby teeth: " << getKidTeeth() << std::endl;
	std::cout << "Molars: " << getAdultTeeth() << std::endl;
	std::cout << "Social category: " << _socialCategory << std::endl;
}
void Teenager::readFromConsole()
{
	IHuman::readFromConsole();
	std::cout << "Enter the number of baby teeth: ";
	int teeth_kid; std::cin >> teeth_kid; setKidTeeth(teeth_kid);
	std::cout << "Enter the number of molars: ";
	int teeth_adult; std::cin >> teeth_adult; setAdultTeeth(teeth_adult);
	std::cout << "Enter the social category: "; std::cin >> _socialCategory;
}
void Teenager::writeToFile()
{
	std::ofstream out;
	out.open("Topic.txt", std::ios::app);
	if (out.is_open())
	{
		out << "Teenager name: " << getName() << std::endl
			<< "Teenager surname: " << getSurname() << std::endl
			<< "Teenager age: " << getAge() << std::endl
			<< "Teenager weight: " << getWeight() << std::endl
			<< "Teenager growth: " << getGrowth() << std::endl
			<< "Teenager number of baby teeth: " << getKidTeeth() << std::endl
			<< "Teenager number of molars: " << getAdultTeeth() << std::endl
			<< "Teenager social category: " << _socialCategory << std::endl
			<< "_____________________________________________" << std::endl;
	}
	out.close();
}