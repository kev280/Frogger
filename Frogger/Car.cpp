#include "Car.h"

Car::Car()
{
}

Car::Car(std::string path, float speed, bool isGoingLeft, float endPath)
	:Sprite(path)
	, speed(speed)
	, isGoingLeft(isGoingLeft)
	, endPath(endPath)
{
}

Car::~Car()
{
}

void Car::Update()
{
	if (isGoingLeft == true)
	{
		SetPosition(GetX() - speed, GetY());

		if (GetX() <= endPath)
		{
			SetPosition(530, GetY());
		}
	}

	if (isGoingLeft == false)
	{
		SetPosition(GetX() + speed, GetY());
	
		if (GetX() >= endPath)
		{
			SetPosition(-10, GetY());
		}
	}
}
