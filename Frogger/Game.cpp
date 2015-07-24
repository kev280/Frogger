#include "Game.h"


Game::Game()
{
	// Créer nos objets
	Sprite* background = new Sprite("Images/Frogger Background.bmp");
	background->SetPosition(0, 0);

	for (int i = 0; i < 5; i++)
	{
		int offset = 115;
		Car1* car1 = new Car1();
		car1->SetPosition(570 - i * offset, 430);
		cars.push_back(car1);
	}

	for (int i = 0; i < 5; i++)
	{
		int offset = 115;
		Car2* car2 = new Car2();
		car2->SetPosition(570 - i * offset, 400);
		cars.push_back(car2);
	}

	for (int i = 0; i < 5; i++)
	{
		int offset = 115;
		Car3* car3 = new Car3();
		car3->SetPosition(570 - i * offset, 365);
		cars.push_back(car3);
	}

	for (int i = 0; i < 5; i++)
	{
		int offset = 115;
		Car4* car4 = new Car4();
		car4->SetPosition(-10 + i * offset, 330);
		cars.push_back(car4);
	}

	for (int i = 0; i < 5; i++)
	{
		int offset = 115;
		Car5* car5 = new Car5();
		car5->SetPosition(570 - i * offset, 295);
		cars.push_back(car5);
	}

	const int offset = 115;
	int minOffset = 25;

	// Genarate bundle of 3 turtles with a space between each bundle
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			Turtle* turtlepack1 = new Turtle();
			turtlepack1->SetPosition(570 - (j * minOffset + i * offset), 220);
			turtles.push_back(turtlepack1);
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			Turtle* turtlepack2 = new Turtle();
			turtlepack2->SetPosition(570 - (j * minOffset + i * offset), 115);
			turtles.push_back(turtlepack2);
		}
	}

	for (int i = 0; i < 5; i++)
	{
		int offset = 115;
		Log1* log1 = new Log1();
		log1->SetPosition(570 - i * offset, 185);
		logs.push_back(log1);
	}

	for (int i = 0; i < 3; i++)
	{
		int offset = 230;
		Log2* log2 = new Log2();
		log2->SetPosition(570 - i * offset, 148);
		logs.push_back(log2);
	}

	for (int i = 0; i < 5; i++)
	{
		int offset = 115;
		Log3* log3 = new Log3();
		log3->SetPosition(570 - i * offset, 80);
		logs.push_back(log3);
	}

	frog = new Frog();
	frog->SetPosition(258, 475);
}


Game::~Game()
{
}

void Game::Update()
{
	Rectangle* frogRect = new Rectangle(frog->GetX() ,frog->GetY() , 21, 15);
	
	// Check if frog collides with cars
	for (int i = 0; i < cars.size(); i++)
	{
		Rectangle* carRect = new Rectangle(cars[i]->GetX(), cars[i]->GetY(), 21, 15);
		if (frogRect->CollidesWith(carRect))
		{
			// Respawn frog to start position and lose 1 life
			frog->Die();
		}
	}

	// Check if frog collides with logs
	for (int i = 0; i < logs.size(); i++)
	{
		Rectangle* logRect = new Rectangle(logs[i]->GetX(), logs[i]->GetY(), 96, 17);
		if (frogRect->CollidesWith(logRect))
		{
			frog->MatchSpeed(logs[i]->GetSpeed());

			//  Make frog stay on the log while moving
			//frog->SetPosition(logs[i]->GetX(), logs[i]->GetY());
		}
	}

	// Check if frog collides with turtles
	for (int i = 0; i < turtles.size(); i++)
	{
		Rectangle* turtleRect = new Rectangle(turtles[i]->GetX(), turtles[i]->GetY(), 21, 15);
		if (frogRect->CollidesWith(turtleRect))
		{
			// Make frog stay on turtles while moving
			frog->SetPosition(turtles[i]->GetX(), turtles[i]->GetY());
		}
	}

	// Prevent the player to get out of bounds
	if (frog->GetX() <= 0 || frog->GetX() >= 516 || frog->GetY() <= 0 || frog->GetY() >= 560)
	{
		frog->Die();
	}
}





