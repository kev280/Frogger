#pragma once
#include "Car.h"

#define CAR2_PATH "Images/Car2.png"
#define CAR2_SPEED 1.5f
#define CAR2_ISGOINGLEFT false
#define CAR2_ENDPATH 530

class Car2 :
	public Car
{
public:
	Car2();
	~Car2();
};
