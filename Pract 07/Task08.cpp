#include <iostream>

int getSumOfDigits(unsigned int number)
{
	int sumOfDigits = 0;

	while (number > 0)
	{
		sumOfDigits += number % 10;
		number /= 10;
	}

	return sumOfDigits;
}

int getNumWithMaxSumOfDigits(unsigned int n)
{
	int number;
	int maxSum = INT32_MIN;
	int numberWithMaxSum = 0;

	while (n > 0)
	{
		std::cin >> number;
		int sumOfDigits = getSumOfDigits(number);

		if (sumOfDigits > maxSum)
		{
			maxSum = sumOfDigits;
			numberWithMaxSum = number;
		}

		n--;
	}

	return numberWithMaxSum;
}

int main() {
	unsigned int n;
	std::cin >> n;

	std::cout << getNumWithMaxSumOfDigits(n);
}
