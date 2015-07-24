#pragma once
#include "Car.h"

#define CAR1_PATH "Images/Car1.png"
#define CAR1_SPEED 1.2f
#define CAR1_ISGOINGLEFT true
#define CAR1_ENDPATH -50

class Car1 :
	public Car
{
public:
	Car1();
	~Car1();
};

