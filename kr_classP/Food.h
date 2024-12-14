#pragma once
#include "IResources.h"
#include <iostream> 
using namespace std;

class Food : virtual public IResources
{
public:
	Food();
	Food(string name, double resourcevolume, string consumer);
	Food(string consumer);
	~Food();

	string getConsumer();
	void setConsumer(string consumer);

	void display();
	void enter();
	void nullvolume();
private:
	string _consumer;
};


//consumer






