#include "IPriut.h"

IPriut :: IPriut() : IPriut("none") {}
IPriut::IPriut(string name) : _name(name){}
IPriut::~IPriut(){}

string IPriut::getName() { return _name; }
void IPriut::setName(string name) { this->_name = name; }

void IPriut::display()
{
	cout << "Name = " << _name << endl;
}
void IPriut::enter()
{
	cout << "Enter name: "; cin >> _name; 
}

