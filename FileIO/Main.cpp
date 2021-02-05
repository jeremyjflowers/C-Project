#include <iostream>
#include <fstream>
#include "Character.h";

int createCharacter()
{
	Character* player = new Character();
	player->setHealth(100);
	player->setDamage(10);
	player->setName('test');

	//example text files

	std::fstream file;

	file.open("savePlayer.txt", std::ios::out | std::ios::binary | std::ios::app);
	if (!file.is_open())
	{
		return 0;
	}


	file.write((char*)&player, sizeof(Character));


	file.close();


	std::cout << "Name: " << player->getName() << std::endl;
	std::cout << "Health: " << player->getHealth() << std::endl;
	std::cout << "Damage: " << player->getDamage() << std::endl;

	return 1;
}

int loadCharacter()
{
	Character player = Character();
	player.setHealth(100);
	player.setDamage(10);
	player.setName('test');



	std::fstream file;
	file.open("savePlayer.txt", std::ios::out | std::ios::binary | std::ios::app);

	if (!file.is_open())
	{
		return 1;
	}


	file.read((char*)&player, sizeof(Character));


	file.close();


	std::cout << "Name: " << player.getName() << std::endl;
	std::cout << "Health: " << player.getHealth() << std::endl;
	std::cout << "Damage: " << player.getDamage() << std::endl;

	return 0;

}

int main()
{
	int number = 0;
	char blank = ' ';
	std::cout << "1 = Create new player" << std::endl;
	std::cout << "2 = Load existing player" << std::endl;
	std::cin >> number;

	if (number == '2')
	{
		loadCharacter();
	}
	else
	{
		createCharacter();
	}

	std::cout << "Press [Enter] to continue";
	return 0;
}