


#pragma once
#include <iostream>
#include <vector>

class Lot
{
	int length, width;
	int area;
public:
	Lot() : Lot(10, 10)
	{

	}
	Lot(int l, int w) : length(l), width(w), area(l* w)
	{
		std::cout << "Creating a Lot\n";
	}
	virtual void show() = 0;

};

class ParkingSpaces
{
	std::vector<std::vector<bool>> spaces;
public:
	ParkingSpaces(int length, int width)
	{
		spaces.resize(length);
		for (int i = 0; i < length; i++)
		{
			spaces[i].resize(width);
		}
		std::cout << "Creating parking spaces\n";
	}
	ParkingSpaces() : ParkingSpaces(10, 10)
	{

	}
	virtual void show() = 0;
};

class ParkingLot : public Lot, public ParkingSpaces
{
public:
	void show()
	{
		std::cout << "ceva";
	}
	ParkingLot()
	{
		std::cout << "Creating Parking Lot\n";
	}
};

