#include "Log.h"


Log::Log()
{
}

Log::Log(std::string path, float speed, bool isGoingLeft, float endPath)
	: Sprite(path)
	, speed(speed)
	, isGoingLeft(isGoingLeft)
	, endPath(endPath)
{
}

Log::~Log()
{
}

void Log::Update()
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
			SetPosition(-100, GetY());
		}
	}
}