#pragma once
#include "Log.h"

#define TURTLE_PATH "Images/turtle.png"
#define TURTLE_SPEED 0.8f
#define TURTLE_ISGOINGLEFT true
#define TURTLE_ENDPATH -50

class Turtle :
	public Log
{
public:
	Turtle();
	~Turtle();
};

