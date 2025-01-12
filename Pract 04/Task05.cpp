#include <iostream>

int main()
{

	int number;

	std::cin >> number;

	double sum = 0;

	int min = INT32_MAX;
	int max = INT32_MIN;

	for (int i = 0; i < number; i++) {

		int currentNumber;

		std::cin >> currentNumber;

		sum += currentNumber;

		if (currentNumber < min) {
			min = currentNumber;
		}

		if (currentNumber > max) {
			max = currentNumber;
		}

	}

	double average = sum / number;

	std::cout << "average: " << average << std::endl;
	std::cout << "min: " << min << std::endl;
	std::cout << "max: " << max << std::endl;

}