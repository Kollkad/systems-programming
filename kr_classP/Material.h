#pragma once
#include "IResources.h"
#include <iostream> 
using namespace std;

class Material : virtual public IResources
{
public:
	Material();
	Material(string name, double resourcevolume, string purpose);
	Material(string purpose);
	~Material();

	string getPurpose();
	void setPurpose(string purpose);

	void display();
	void enter();
	void nullvolume();

private:
	string _purpose;
};
//purpose