#pragma once
#include "IPriut.h"
#include <iostream>
using namespace std;

class IResources : virtual public IPriut
{
public:
	IResources();
	IResources(string name, double resourcevolume);
	IResources(double resourcevolume);
	virtual ~IResources();

	double getVolume();
	void setVolume(double resourcevolume);

	virtual void display();
	virtual void enter();
	virtual void nullvolume() = 0;

private:
	double _resourcevolume;
};