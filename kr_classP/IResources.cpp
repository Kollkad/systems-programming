#include "IResources.h"

IResources::IResources() : IResources("none", 0) {}
IResources::IResources(string name, double resourcevolume) :
	IPriut(name), _resourcevolume(resourcevolume){}
IResources::IResources(double resourcevolume) : _resourcevolume(resourcevolume){}

IResources::~IResources() {}

double IResources::getVolume() { return _resourcevolume; }
void IResources::setVolume(double resourcevolume)
{
	this->_resourcevolume = resourcevolume;
}

void IResources::display()
{
	cout << "Resources info:\n";
	IPriut::display();
	cout << "resource volume = " << _resourcevolume << "\n";
}
void IResources::enter()
{
	cout << "Resources enter:\n";
	IPriut::enter();
	cout << "enter resource volume: "; cin >> _resourcevolume;
}
void IResources::nullvolume()
{
	cout << "all fields are filled with basic values\n";
	setName("none");
	_resourcevolume = 0;
}



//IResources
