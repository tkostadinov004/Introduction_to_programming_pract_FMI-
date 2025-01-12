#include <iostream>

int findNOD(unsigned int firstNumber, unsigned int secondNumber)
{

	while (firstNumber != secondNumber)
	{

		if (firstNumber > secondNumber)
		{
			firstNumber -= secondNumber;
		}
		else
		{
			secondNumber -= firstNumber;
		}
	}
	return firstNumber;
}

int findNOK(unsigned int firstNumber, unsigned int secondNumber)
{
	return (firstNumber * secondNumber) / findNOD(firstNumber, secondNumber);
}

int main()
{

	unsigned int num1, num2, num3, num4;
	std::cin >> num1 >> num2 >> num3 >> num4;

	num1 = findNOK(num1, num2);
	num3 = findNOK(num3, num4);

	std::cout << findNOK(num1, num3);

}


