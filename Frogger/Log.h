#pragma once
#include "Sprite.h"
class Log :
	public Sprite
{
public:
	Log();
	Log(std::string path, float speed, bool isGoingLeft, float endPath);
	virtual ~Log();

	void Update();

	float GetSpeed(){ return speed; }

protected:
	float endPath;
	float speed;
	bool isGoingLeft;
};
