#include <iostream>

int getNumberLength(unsigned int number)
{
	int count = 0;

	while (number > 0) 
	{
		number /= 10;
		count++;
	}

	return count;
}

int getKLastDigits(int number, int countDigits)
{
	int lastDigits = 0;

	for (int i = 0; i < countDigits; i++)
	{
		lastDigits *= 10;
		lastDigits += number % 10;
		number /= 10;
	}

	return lastDigits;
}

int reverseNumber(int number)
{
	int reversedNum = 0;

	while (number > 0) 
	{
		reversedNum *= 10;
		reversedNum += number % 10;
		number /= 10;
	}

	return reversedNum;
}

int makeNewSecondNumber(int oldNum, int newNum) 
{
	int oldNumLength = getNumberLength(oldNum);

	for (int i = 0; i < oldNumLength; i++)
	{
		newNum *= 10;
	}

	newNum += oldNum;

	return newNum;
}

int main() {

	unsigned int firstNumber, secondNumber, countDigits;
	std::cin >> firstNumber >> secondNumber >> countDigits;

	int lastDigits = getKLastDigits(firstNumber, countDigits);

	int reversedLastDigits = reverseNumber(lastDigits);

	int newSecondNumber = makeNewSecondNumber(secondNumber, reversedLastDigits);

	std::cout << newSecondNumber;
}
