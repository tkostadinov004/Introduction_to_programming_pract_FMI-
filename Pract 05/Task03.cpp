#include <iostream>

bool isPerfect(unsigned int number) {

	int sum = 1;

	if (number < 5) {
		return false;
	}

	for (int i = 2; i < number; i++) {

		if (number % i == 0) {
			sum += i;
		}

	}

	return sum == number;
}


int main()
{

	unsigned int number;

	std::cin >> number;

	std::cout << std::boolalpha << isPerfect(number);

}
