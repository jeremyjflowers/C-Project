#include <iostream>

void fizzBuzz(int num)
{
	for (int i = 0; i <= num; i++)
	{
		if (i % 3 == false && i % 5 == false)
		{
			std::cout << i << ": FizzBuzz" << std::endl;
		}
		else if (i % 5 == false)
		{
			std::cout << i << ": Buzz" << std::endl;
		}
		else if (i % 3 == false)
		{
			std::cout << i << ": Fizz" << std::endl;
		}
	}
}

void NumberGuessing()
{

	std::cout << "Think of any number from 1 to 50" << std::endl;
	system("pause");

	int num[51]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
	int min = 1;
	int max = 50;
	int guess = (min + max) / 2;
	guess = num[guess];
	bool gameOver = false;


	while (min <= max)
	{
		gameOver == false;
		std::cout << "Is this your number: " << std::endl;
		std::cout << guess << std::endl;
		std::cout << "1: [Yes]" << std::endl;
		std::cout << "2: [No]" << std::endl;

		int input = 0;

		std::cin >> input;

		if (input == 1)
		{
			gameOver == true;
			return guess;
		}

		else if (input == 2)
		{
			std::cout << "Is your answer higher or lower?" << std::endl;
			std::cout << "1: [Higher]" << std::endl;
			std::cout << "2: [Lower]" << std::endl;

			std::cin >> input;

			if (input == 1)
			{
				min = guess + 3;
			}

			if (input == 2)
			{
				max = guess - 3;
			}
		}
	}

	if (gameOver == true)
	{

		std::cout << "A successful simulation attempt!!" << std::endl;
	}

	else if (gameOver == false)
	{

		std::cout << "Are you sure you're not cheating?";
	}
}

int main()
{
	NumberGuessing();

	system("pause");
	return 1;
}