#include "Ihuman.h"
//#include <iostream>
#include <math.h>
//using namespace std;
//конструктор
IHuman::IHuman() : IHuman("undefined", "undefined", 0, 0, 0) {}
//список инициализации
IHuman::IHuman(std::string name, std::string surname, int age, float weight, int growth) : _name(correctAlpha(name)),
_surname(correctAlpha(surname)), _age(correctCount(age)), _weight(correctCount(weight)), _growth(correctCount(growth)){}
//des
IHuman::~IHuman(){}
//get + set
std::string IHuman::getName(){return _name;}
void IHuman::setName(std::string name) { this->_name = correctAlpha(name); }
std::string IHuman::getSurname(){return _surname;}
void IHuman::setSurname(std::string surname){this ->_surname = correctAlpha(surname);}

int IHuman::getAge(){return _age;}
void IHuman::setAge(int age) {this ->_age = correctCount(age);}
float IHuman::getWeight(){return _weight;}
void IHuman::setWeight(float weight) { this->_weight = correctCount(weight); }
int IHuman::getGrowth(){return _growth;}
void IHuman::setGrowth(int growth) {this ->_growth = correctCount(growth);}
//методы
void IHuman::uimt()
{
    float imt = (_weight/2.205)/(pow((_growth/39.37), 2));
    std::cout<<"Imt = "<<imt<< std::endl;
}
void IHuman::ubornin(int year)
{
    int bornin = year - _age;
    std::cout<<"Born in "<<bornin<< std::endl;
}
void IHuman::init(const char *n, const char *sn, int a, float w, int g)
{
    _name = n;
    _surname = sn;
    _age = a;
    _weight = w;
    _growth = g;
}

void IHuman::readFromConsole()
{
    setlocale(LC_ALL, "");
    std::cout << "Enter name: "; std::cin >> _name;
    std::cout << "Enter surname: "; std::cin >> _surname;
    std::cout << "Enter age: "; std::cin >> _age;
    std::cout << "Enter weight: "; std::cin >> _weight;
    std::cout << "Enter growth: "; std::cin >> _growth;
}
#include <cstdlib>//не для задачи
void IHuman::display()
{
    setlocale(LC_ALL, "");
    std::cout << "User name: ";
    system("pause"); std::cout << _name << std::endl
        << "User surname: " << _surname << std::endl
        << "User age: " << _age << std::endl
        << "User weight: " << _weight << std::endl
        << "User growth: " << _growth << std::endl;
}
void IHuman::writeToFile() {}