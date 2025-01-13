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

bool isPrime(unsigned int number)
{
	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			return false;
		}
	}
	return true;
}

void getReversedFactorization(int number) {

	int originalNumber = number;

	for (int i = originalNumber - 1; i >= 2; i--) {

		if (isPrime(i)) {

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

}

int main()
{

	int number;
	std::cin >> number;

	getReversedFactorization(number);

}