#pragma once
#include "Parking.h"
#include "Person.h"
#include "Car.h"



int main()
{
	ParkingLot *A = new ParkingLot();
	std::shared_ptr<Person> P = std::make_shared<Person>();
	Bus* B = new Bus(P);
	
	delete B;
	delete A;
}