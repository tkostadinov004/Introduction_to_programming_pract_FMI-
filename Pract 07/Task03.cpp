#include <iostream>

void reduceNumber(unsigned int numerator, unsigned int denominator)
{
	unsigned int biggerNum;

	biggerNum = denominator > numerator ? denominator : numerator;

	for (int i = 2; i < biggerNum; i++)
	{
		if (numerator % i == 0 && denominator % i == 0)
		{
			numerator /= i;
			denominator /= i;
		}
	}

	std::cout << numerator << "/" << denominator;
}

int main()
{
	unsigned int num1, num2;
	std::cin >> num1 >> num2;

	reduceNumber(num1, num2);
}

s