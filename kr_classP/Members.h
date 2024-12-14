#pragma once
#include "IPriut.h"
#include <iostream> 
using namespace std;
//не аб
class Members : virtual public IPriut
{
public:
	Members();
	Members(string name, string jobtitle);
	Members(string jobtitle);
	~Members();

	string getJobtitle();
	void setJobtitle(string jobtitle);

	void display();
	void enter();
private:
	string _jobtitle;
};