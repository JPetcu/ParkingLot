#pragma once
#include<string>
#include<iostream>
#include "Person.h"

class Vehicle
{
	int year;
	std::string name;
	std::shared_ptr<Person> owner;
public:
	Vehicle()
	{

	}
	Vehicle(std::shared_ptr<Person> p) : owner(p)
	{
		std::cout << "Creating Vehicle\n";
		year = 1996;
	}
	virtual void show() = 0;
	int getYear() const
	{
		return year;
	}
	void setowner(std::shared_ptr<Person> p)
	{
		owner = p;
	}
	~Vehicle()
	{
		std::cout << "Destructing Vehicle\n";
	}
};
class Moto : public Vehicle
{
	const int wheels = 2;
	const int space  = 1;
public:
	Moto(std::shared_ptr<Person> p)
	{
		std::cout << "Creating Bus\n";
	}
	void show() {}
};

class Car : public Vehicle
{
	const int wheels = 4;
	const int space  = 2;
public:
	Car()
	{
	}
	Car(std::shared_ptr<Person> p)
	{
		std::cout << "Creating Car\n";
	}
	void show() {}
	~Car()
	{
		std::cout << "Destructing Car\n";
	}

};

class Bus : public Car
{
	const int wheels = 4;
	const int space  = 5;
public:
	void show() {}
	Bus(std::shared_ptr<Person> p)
	{
		std::cout << "Creating Bus\n";
	}
	int getSpace() const
	{
		return space;
	}
	~Bus()
	{
		std::cout << "Destructing Bus\n";
	}
};