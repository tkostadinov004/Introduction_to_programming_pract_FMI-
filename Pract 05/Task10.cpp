#include <iostream>

int getPow(unsigned int number,unsigned int pow) {

	int powedNumber = number;

	if (pow == 0) {
		return 1;
	}

	else if (pow % 2 == 0) {

		powedNumber *= number;

		int numberToMultiply = number * number;

		pow /= 2;

		while (pow > 1) {
			powedNumber *= numberToMultiply;
			pow--;
		}

	}

	else {

		pow -= 1;

		while (pow > 0) {

			powedNumber *= number;
			pow--;
		}

	}

	return powedNumber;
}

int main()
{
	unsigned int number, pow;

	std::cin >> number >> pow;

	std::cout << getPow(number, pow);

}