#include "Material.h"

Material::Material() : Material("none", 0, "none") {}
Material::Material(string name, double resourcevolume, string purpose) :
	IPriut(name), IResources(resourcevolume), _purpose(purpose) {}
Material::Material(string purpose) : _purpose(purpose) {}
Material::~Material() {}

string Material::getPurpose() { return _purpose; }
void Material::setPurpose(string purpose)
{
	this->_purpose = purpose;
}

void Material::display()
{
	cout << "Material info:\n";
	IPriut::display();
	cout << "resource volume = " << getVolume()
		<< "\npurpose = " << _purpose << "\n";
}
void Material::enter()
{
	cout << "Material enter:\n";
	IPriut::enter();
	cout << "enter resource volume: "; double res; cin >> res; setVolume(res);
	cout << "enter purpose: "; cin >> _purpose;
}

void Material::nullvolume()
{
	cout << "all fields are filled with basic values\n";
	setName("none");
	setVolume(0);
	_purpose = "none";
}



