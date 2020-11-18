#include "Person.h"

Person::Person(std::string n, int t)
{
	navn_ = n;
	alder_ = (t > 0 && t <= 100 ? t : 0);
}

void Person::setNavn(std::string n)
{
	navn_ = n;
}


const std::string Person::getNavn(void)
{
	return navn_;
}

void Person::setAlder(int t)
{
	alder_ = (t > 0 && t <= 100 ? t : 0);
}

const int Person::getAlder(void)
{
	return alder_;
}

void Person::print(void)
{
	std::cout << getNavn() << " er " << getAlder() << " år gammel." << std::endl;
}