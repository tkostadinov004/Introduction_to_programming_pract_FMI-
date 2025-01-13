#include <iostream>

long long concatenateNumber(unsigned long num1) {

	long reversedNumber = 0;
	int countZeros = 0;

	while (num1 > 0) {
		if (num1 % 10 != 0) {
			reversedNumber *= 10;
			reversedNumber += num1 % 10;
		}
		else {
			countZeros++;
		}
		num1 /= 10;
	}

	long resultNumber = reversedNumber;

	while (reversedNumber > 0) {

		resultNumber *= 10;
		resultNumber += reversedNumber % 10;

		reversedNumber /= 10;
	}

	while (countZeros > 0) {
		resultNumber *= 10;
		countZeros--;
	}

	return resultNumber;
}


int main()
{

	unsigned long number;

	std::cin >> number;

	std::cout << concatenateNumber(number);
}