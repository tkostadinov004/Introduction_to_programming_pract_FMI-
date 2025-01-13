#include <iostream>

int main()
{

	unsigned int number;
	unsigned int firstFibonacci = 1;
	unsigned int secondFibonacci = 1;

	std::cin >> number;

	if (number == 1) {
		std::cout << firstFibonacci;
	}
	else if (number == 2) {
		std::cout << firstFibonacci << " " << secondFibonacci;
	}
	else if (number > 2) {
		std::cout << firstFibonacci << " " << secondFibonacci << " ";

		for (int i = 3; i <= number; i++) {

			unsigned int newFibonacci = firstFibonacci + secondFibonacci;

			std::cout << newFibonacci << " ";

			firstFibonacci = secondFibonacci;
			secondFibonacci = newFibonacci;
		}

	}


}