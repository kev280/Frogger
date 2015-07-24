#pragma once
#include "Component.h"
#include "Rectangle.h"
#include "Frog.h"
#include "Sprite.h"
#include "Car1.h"
#include "Car2.h"
#include "Car3.h"
#include "Car4.h"
#include "Car5.h"
#include "Turtle.h"
#include "Log1.h"
#include "Log2.h"
#include "Log3.h"


class Game :
	public Component
{
public:
	Game();
	~Game();

	void Update();

private:

	std::vector<Car*> cars;
	std::vector<Log*> logs;
	std::vector<Turtle*> turtles;
	std::vector<Frog*> frogs;

	Frog* frog;

};

