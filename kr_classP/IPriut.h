#pragma once
#include <iostream>
using namespace std;

class IPriut
{
public:
	IPriut();
	IPriut(string name);
	virtual ~IPriut();
	string getName();
	void setName(string name);
	virtual void display();
	virtual void enter() = 0;
private: 
	string _name;
};