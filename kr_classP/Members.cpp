#include "Members.h"

Members::Members() : Members("none", "none") {}
Members::Members(string name, string jobtitle) :
	IPriut(name), _jobtitle(jobtitle) {}
Members::Members(string jobtitle) : _jobtitle(jobtitle) {}

Members::~Members() {}

string Members::getJobtitle() { return _jobtitle; }
void Members::setJobtitle(string jobtitle)
{
	this->_jobtitle = jobtitle;
}

void Members::display()
{
	cout << "Members info:\n";
	IPriut::display();
	cout << "job title = " << _jobtitle << "\n";
}
void Members::enter()
{
	cout << "Members enter:\n";
	IPriut::enter();
	cout << "enter job title: "; cin >> _jobtitle;
}
