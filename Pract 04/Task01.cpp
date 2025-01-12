#include <iostream>

int main()
{

	unsigned int number;
	std::cin >> number;

	bool check = true;

	if (number < 2) {

		std::cout << "not prime";
		check = false;

	}
	else {

		for (int i = 2; i < number; i++) {

			if (number % i == 0) {
				std::cout << "not prime";
				check = false;
				break;
			}
		}

	}

	if (check) {
		std::cout << "prime";
	}

}