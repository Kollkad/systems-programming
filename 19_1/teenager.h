#pragma once
#include "Ihuman.h"
#include "kid.h"
#include "adult.h"

class Teenager : public Kid, Adult
{
public:
	Teenager(std::string name, std::string surname, int age, float weight, int growth, int babyTeeth, int molars, std::string socialCategory);
	Teenager();

	~Teenager();

	void setSocialCategory(std::string socialCategory);
	std::string getSocialCategory();

	Teenager operator++();
	Teenager operator--();/*
	Kid operator++(int);
	Kid operator--(int);*/
	bool operator< (Teenager other);
	bool operator> (Teenager other);

	friend std::ostream& operator<< (std::ostream& output, Teenager t);

	void readFromConsole();
	void display();
	void writeToFile();

private:
	std::string _socialCategory;
};