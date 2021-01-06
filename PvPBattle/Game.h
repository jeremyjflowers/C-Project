#pragma once
#include "Character.h"
class Game
{
public:
	void run();
	bool getGameOver(bool value) { m_gameOver = value; }


private:
	void start();
	void update();
	void end();

private:
	bool m_gameOver = false;
	Character* m_player1;
	Character* m_player2;
};