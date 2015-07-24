#include "Frog.h"

Frog::Frog()
	: Sprite(FROG_PATH)
	, speed(36.f)
	, matchingSpeed(0.f)
	, lifeCount(0)
{
	
}

Frog::~Frog()
{
}

void Frog::Update()
{
	if (Engine::GetInstance()->GetInput()->IsKeyPressed(SDL_SCANCODE_W) || Engine::GetInstance()->GetInput()->IsKeyPressed(SDL_SCANCODE_UP))
	{
		SetPosition(GetX(), GetY() - speed);
	}

	if (Engine::GetInstance()->GetInput()->IsKeyPressed(SDL_SCANCODE_S) || Engine::GetInstance()->GetInput()->IsKeyPressed(SDL_SCANCODE_DOWN))
	{
		SetPosition(GetX(), GetY() + speed);
	}

	if (Engine::GetInstance()->GetInput()->IsKeyPressed(SDL_SCANCODE_A) || Engine::GetInstance()->GetInput()->IsKeyPressed(SDL_SCANCODE_LEFT))
	{
		SetPosition(GetX() - speed, GetY());
	}
	
	if (Engine::GetInstance()->GetInput()->IsKeyPressed(SDL_SCANCODE_D) || Engine::GetInstance()->GetInput()->IsKeyPressed(SDL_SCANCODE_RIGHT))
	{
		SetPosition(GetX() + speed, GetY());
	}

	SetPosition(GetX() + matchingSpeed, GetY());
}

void Frog::Die()
{
	
	lifeCount++;
	matchingSpeed = 0.f;
	if (!lifeCount >= 5)
	{
		Frog* frog = new Frog();
		frog->SetPosition(258, 475);
	}
}

