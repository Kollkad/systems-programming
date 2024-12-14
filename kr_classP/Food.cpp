#include "Food.h"

Food::Food() : Food("none", 0, "none") {}
Food::Food(string name, double resourcevolume, string consumer) :
	IPriut(name), IResources(resourcevolume), _consumer(consumer) {}
Food::Food(string consumer) : _consumer(consumer) {}
Food::~Food() {}

string Food::getConsumer() { return _consumer; }
void Food::setConsumer(string consumer)
{
	this->_consumer = consumer;
}

void Food::display()
{
	cout << "Food info:\n";
	IPriut::display();
	cout << "resource volume = " << getVolume()
		<< "\nconsumer = " << _consumer << "\n";
}
void Food::enter()
{
	cout << "Food enter:\n";
	IPriut::enter();
	cout << "enter resource volume: "; double res; cin >> res; setVolume(res);
	cout << "enter consumer: "; cin >> _consumer;
}
void Food::nullvolume()
{
	cout << "all fields are filled with basic values\n";
	setName("none");
	setVolume(0);
	_consumer = "none";
}





