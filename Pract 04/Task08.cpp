#include <iostream>

int main()
{

	unsigned int number;

	std::cin >> number;

	int maxNumber = INT32_MIN;
	int secondMaxNumber = INT32_MIN;

	while (number > 0) {

		int currentNumber;

		std::cin >> currentNumber;

		if (currentNumber > maxNumber) {

                     secondMaxNumber = maxNumber;
		     maxNumber=currentNumber;

		} else if (currentNumber< maxNumber && currentNumber > secondMaxNumber){
		    secondMaxNumber = currentNumber;
		}

		number--;
	}

	std::cout << "Max number: " << maxNumber << std::endl << "Second max number: " << secondMaxNumber;

}
