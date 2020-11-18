#pragma once
#include<string.h>
#include<iostream>

class Person
{
public:
	Person(std::string = "NN", int = 0);
	void setNavn(std::string = "NN");
	const std::string getNavn(void);
	void setAlder(int = 0);
	const int getAlder(void);
	void print(void);

private:
	std::string navn_;
	int alder_;
};

