#include <iostream>

bool isUpper(unsigned long number) {

	int lastDigit = number % 10;
	number /= 10;

	while (number > 0) {

		if (number % 10 > lastDigit) {
			return false;
		}
		lastDigit = number % 10;
		number /= 10;
	}

	return true;

}

bool isDown(unsigned long number) {

	int lastDigit = number % 10;

	while (number /= 10 > 0) {

		if (number % 10 < lastDigit) {
			return false;
		}
		lastDigit = number % 10;
		number /= 10;
	}

	return true;

}

bool areSorted(unsigned long number) {

	return isUpper(number) || isDown(number);
}


int main()
{

	unsigned long number;

	std::cin >> number;

	std::cout << std::boolalpha << areSorted(number);
}