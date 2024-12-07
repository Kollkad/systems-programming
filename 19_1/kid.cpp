#include "kid.h"
//перегр операторы
Kid Kid::operator++()
{
    setAge(getAge() + 10);
    return *this;
}
Kid Kid::operator--()
{
    if (getAge() - 10 >= 0) setAge(getAge() - 10);
    else std::cout << "It is not possible to subtract age by 10, otherwise the value will be invalid." << std::endl;
    return *this;
}
/*
Kid Kid::operator++(int)//post
{
    Kid t(*this);
    ++(*this);
    return t;
}
Kid Kid::operator--(int)
{
    Kid t(*this);
    --(*this);
    return t;
}
*/
bool Kid::operator<(Kid other)
{
    return this->getGrowth() < other.getGrowth();
}
bool Kid::operator>(Kid other)
{
    return this->getGrowth() > other.getGrowth();
}
std::ostream& operator<<(std::ostream& output, Kid k)
{
	output << "Name = " << k.getName() << std::endl
		<< "Surname = " << k.getSurname() << std::endl
		<< "Age = " << k.getAge() << std::endl
		<< "Weight = " << k.getWeight() << std::endl
		<< "Growth = " << k.getGrowth() << std::endl
		<< "Teeth = " << k._babyTeeth << std::endl;
    return output;
}
Kid::Kid() : Kid("undefined", "undefined", 0, 0, 0, 0) {}
Kid::Kid(std::string name, std::string surname, int age, float weight, int growth, int babyTeeth) :
	IHuman(name, surname, age, weight, growth), _babyTeeth(correctCountKidTeeth(babyTeeth)) {}

Kid::Kid(int babyTeeth) : _babyTeeth(correctCountKidTeeth(babyTeeth)) {}
//des
Kid::~Kid(){}
//get/set
void Kid::setKidTeeth(int babyTeeth)
{
	this->_babyTeeth = correctCountKidTeeth(babyTeeth);
}

int Kid::getKidTeeth()
{
	return _babyTeeth;
}
//mets
void Kid::display()
{
	setlocale(LC_ALL, "");
	IHuman::display();
	std::cout << "number of baby teeth: " << _babyTeeth << std::endl;
}
void Kid::readFromConsole()
{
    IHuman::readFromConsole();
    std::cout << "Enter the number of baby teeth: ";
	//std::cin >> _babyTeeth;
	int teeth; std::cin >> teeth; setKidTeeth(teeth);
}
void Kid::writeToFile()
{
	std::ofstream out;
	out.open("Human.txt", std::ios::app);
	if (out.is_open())
	{
		out << "Kid name: " << getName() << std::endl
			<< "Kid surname: " << getSurname() << std::endl
			<< "Kid age: " << getAge() << std::endl
			<< "Kid weight: " << getWeight() << std::endl
			<< "Kid growth: " << getGrowth() << std::endl
			<< "Kid number of baby teeth: " << _babyTeeth << std::endl
			<< "_____________________________________________" << std::endl;
	}
	out.close();
}
