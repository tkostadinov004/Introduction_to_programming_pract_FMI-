#include <iostream>

bool isPrime(unsigned int num) {

	for (int i = 2; i <= sqrt(num); i++) {

		if (num % i == 0) {
			return false;
		}

	}

	return true;
}

bool isSumLowerThan10(unsigned int number) {

	int sum = (number % 10) + (number / 10) % 10 + number / 100;

	return sum < 10;

}

int main()
{

	unsigned int number;

	std::cin >> number;

	if (number < 100 && number > 999) {
		std::cout << "Wrong input";
	}

	for (int i = 100; i <= number; i++) {

		if (isPrime(i) && isSumLowerThan10(i)) {
			std::cout << i << " ";
		}

	}

}
