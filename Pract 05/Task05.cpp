#include <iostream>

long reverseNumber(long number, long reversedNumber) {

	while (number > 0) {
		reversedNumber *= 10;
		reversedNumber += number % 10;

		number /= 10;
	}

	return reversedNumber;
}

int countZeros(long number) {

	int countZeros = 0;

	while (number > 0) {
		if (number % 10 == 0) {
			countZeros++;
		}
		number /= 10;
	}

	return countZeros;
}

long addZerosToNumber(long number, int countZeros) {

	while (countZeros > 0) {
		number *= 10;
		countZeros--;
	}

	return number;
}

long long concatenateNumbers(long num1, long num2) {

	long reversedNumber = reverseNumber(num2, 0);
	int zeros = countZeros(num2);

	long concatenatedNumber = num1;

	concatenatedNumber = reverseNumber(reversedNumber, concatenatedNumber);

	concatenatedNumber = addZerosToNumber(concatenatedNumber, zeros);

	return concatenatedNumber;

}


int main()
{

	unsigned long num1, num2;

	std::cin >> num1 >> num2;

	std::cout << concatenateNumbers(num1, num2);
}