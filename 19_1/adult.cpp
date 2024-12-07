#include "adult.h"
//перегр операторы
Adult Adult::operator++()
{
    setAge(getAge() + 10);
    return *this;
}
Adult Adult::operator--()
{
    if (getAge() - 10 >= 0) setAge(getAge() - 10);
    else std::cout << "It is not possible to subtract age by 10, otherwise the value will be invalid." << std::endl;
    return *this;
}
/*
Adult Adult::operator++(int)//post
{
    Adult t(*this);
    ++(*this);
    return t;
}
Adult Adult::operator--(int)
{
    Adult t(*this);
    --(*this);
    return t;
}
*/
bool Adult::operator<(Adult other)
{
    return this->getGrowth() < other.getGrowth();
}
bool Adult::operator>(Adult other)
{
    return this->getGrowth() > other.getGrowth();
}
std::ostream& operator<<(std::ostream& output, Adult a)
{
	output << "Name = " << a.getName() << std::endl
		<< "Surname = " << a.getSurname() << std::endl
		<< "Age = " << a.getAge() << std::endl
		<< "Weight = " << a.getWeight() << std::endl
		<< "Growth = " << a.getGrowth() << std::endl
		<< "Molars = " << a._molars << std::endl;
    return output;
}

Adult::Adult() : Adult("undefined", "undefined", 0, 0, 0, 0) {}
Adult::Adult(std::string name, std::string surname, int age, float weight, int growth, int molars) :
	IHuman(name, surname, age, weight, growth), _molars(correctCountAdultTeeth(molars)) {}
Adult::Adult(int molars) : _molars(correctCountAdultTeeth(molars)) {}
//des
Adult::~Adult() {}
//set/get
void Adult::setAdultTeeth(int molars)
{
	this->_molars = correctCountAdultTeeth(molars);
}

int Adult::getAdultTeeth()
{
	return _molars;
}
//mets
void Adult::display()
{
	setlocale(LC_ALL, "");
	IHuman::display();
	std::cout << "number of molars: " << _molars << std::endl;
}
void Adult::readFromConsole()
{
	IHuman::readFromConsole();
	std::cout << "Enter the number of molars: ";
	int teeth; std::cin >> teeth; setAdultTeeth(teeth);
}
void Adult::writeToFile()
{
	std::ofstream out;
	out.open("Human.txt", std::ios::app);
	if (out.is_open())
	{
		out << "Adult name: " << getName() << std::endl
			<< "Adult surname: " << getSurname() << std::endl
			<< "Adult age: " << getAge() << std::endl
			<< "Adult weight: " << getWeight() << std::endl
			<< "Adult growth: " << getGrowth() << std::endl
			<< "Adult number of molars: " << _molars << std::endl
			<< "_____________________________________________" << std::endl;
	}
	out.close();
}