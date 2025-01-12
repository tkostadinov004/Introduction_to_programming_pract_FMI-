#include <iostream>

bool areOnesAndZerosEqual(unsigned int num)
{
	int countZeros = 0;
	int countOnes = 0;

	while (num > 0)
	{
		if (num % 2 == 0)
		{
			countZeros++;
		}
		else if (num % 2 == 1)
		{
			countOnes++;
		}
		num /= 2;
	}

	return countZeros == countOnes;
}

void printNumbersWithEqualCountOfDigits(unsigned int n)
{
	for (int i = 2; i < n; i++)
	{
		if (areOnesAndZerosEqual(i))
		{
			std::cout << i << " ";
		}

	}
}

int main()
{
	unsigned int n;
	std::cin >> n;

	printNumbersWithEqualCountOfDigits(n);
}
