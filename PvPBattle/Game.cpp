#include "Game.h"
#include <iostream>

void Game::battleMode()
{

}

void Game::start()
{
	
}

void Game::update()
{
	
}

void Game::end()
{

}

void Game::run()
{
	start();

	while (!getGameOver())
	{
		update();
	}

	end();
}