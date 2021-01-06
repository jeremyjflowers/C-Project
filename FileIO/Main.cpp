#include "Character.h"
#include <iostream>
#include <fstream>

int main()
{
	Character Jer = Character();
	Jer.health = 100;
	Jer.damage = 5;

	std::fstream file;

	file.open("save.txt", std::ios::out | std::ios::_Nocreate);

	if (!file.is_open())
	{
		return 1;
	}

	file << Jer.health << std::endl;
	file << Jer.damage;

	file.close();

	Jer;

	file.open("save.txt", std::ios::in);
	if (!file.is_open())
	{
		return 1;
	}

	file >> Jer.health;
	file >> Jer.damage;

	file.close();

	std::cout << Jer.health << std::endl;
	std::cout << Jer.damage << std::endl;
	system("pause");
	return 0;
}