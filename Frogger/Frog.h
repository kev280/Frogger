#pragma once
#include "Sprite.h"
#include "Engine.h"
#include "Rectangle.h"

#define FROG_PATH "Images/frog.png"


class Frog :
	public Sprite
{
public:
	Frog();
	~Frog();

	void Update();
	void MatchSpeed(float speed) { this->matchingSpeed = speed; }
	void Die();

private:
	float speed;
	float matchingSpeed;
	int lifeCount;
	
};

