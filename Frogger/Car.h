#pragma once
#include "Sprite.h"

class Car :
	public Sprite
{
public:
	Car();
	Car(std::string path, float speed, bool isGoingLeft, float endPath);
	virtual ~Car();

	void Update();

protected:
	float endPath;
	float speed;
	bool isGoingLeft;
};

