#include <iostream>

int main()
{
	long long number;

	int result = 0;
	int countPow = 1;

	std::cin >> number;

	while (number != 0) {

		int lastDigit = number % 10;
		number /= 10;

		result += lastDigit * countPow;
		countPow *= 2;
	}

	std::cout << result;
}