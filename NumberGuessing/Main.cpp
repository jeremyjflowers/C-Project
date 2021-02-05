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

}

int main()
{
	int num = 0;

	std::cout << "Please type a number: ";
	std::cin >> num;

	fizzBuzz(num);


	system("pause");
	return 1;
}