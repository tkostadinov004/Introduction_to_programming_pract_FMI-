#include <iostream>

bool isValid(unsigned int num) {

	int lastDigit = num % 10;
	int preLastDigit = (num / 10) % 10;

	num /= 1000;

	num = (num * 10) + preLastDigit;
	num = (num * 10) + lastDigit;

	bool isValid = num % 11 == 0;

	return isValid;
}


int main()
{

	unsigned int num1, num2;

	std::cin >> num1 >> num2;

	if (num1 < 1000 || num1>9999 || num2 < 1000 || num2>9999) {
		std::cout << "Wrong input";
	}
	else {

		for (int i = num1; i <= num2; i++) {
			if (isValid(i)) {
				std::cout << i << " ";
			}
		}
	}
}