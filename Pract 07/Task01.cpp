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

int findNODOfFourNumbers(int num1,int num2,int num3,int num4) 
{
	num1 = findNOD(num1, num2);
	num3 = findNOD(num3, num4);

	return findNOD(num1, num3);
}

int main()
{

	unsigned int num1, num2, num3, num4;
	std::cin >> num1 >> num2 >> num3 >> num4;

	std::cout << findNODOfFourNumbers(num1, num2,num3,num4);

}


