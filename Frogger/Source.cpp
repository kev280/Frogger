#include <iostream>
#include "Engine.h"
#include "Game.h"



int main(int argc, char* args[])
{
	Engine::GetInstance()->Init(516,560);

	Game* game = new Game();

	Engine::GetInstance()->Start();

	delete game;

	return 0;
}



