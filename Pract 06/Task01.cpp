#include <iostream>

void printFactorization(int currentCount, int number, int divisor) {

	if (currentCount != 0) {

		std::cout << divisor;

		if (number == 1) {
			std::cout << "^" << currentCount;
		}
		else {
			std::cout << "^" << currentCount << " * ";
		}

	}

}

void getFactorization(int number) {

	int originalNumber = number;

	for (int i = 2; i < originalNumber; i++) {

		int currentCount = 0;

		while (number != 1) {
			if (number % i == 0) {
				currentCount++;
				number /= i;
			}
			else {
				break;
			}
		}

		printFactorization(currentCount, number, i);

	}

}

int main()
{

	int number;
	std::cin >> number;

	getFactorization(number);

}