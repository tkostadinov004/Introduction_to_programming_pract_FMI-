#include <iostream>

int main()
{

	unsigned int number;

	std::cin >> number;

	if (number < 100 || number > 999) {

		std::cout << "Invalid input";

	}
	else {

		for (int i = 100; i <= number; i++) {

			bool check = true;

			for (int j = 2; j < i; j++) {

				if (i % j == 0) {
					check = false;
				}

			}

			unsigned int sumDigits = (i / 100) + ((i / 10) % 10) + (i % 10);

			if (check && sumDigits < 10) {

				std::cout << i << " ";

			}

		}

	}


}