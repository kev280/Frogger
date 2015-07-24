#pragma once
#include "Car.h"

#define CAR3_PATH "Images/Car3.png"
#define CAR3_SPEED 0.8f
#define CAR3_ISGOINGLEFT true
#define CAR3_ENDPATH -50

class Car3 :
	public Car
{
public:
	Car3();
	~Car3();
};
