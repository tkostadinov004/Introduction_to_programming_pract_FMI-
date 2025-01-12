#include <iostream>

int main()
{

	double firstNumber, secondNumber;
	char symbol;

	std::cin >> firstNumber >> secondNumber >> symbol;

	switch (symbol) {
	case '+':
		std::cout << firstNumber + secondNumber;
		break;
	case '-':
		std::cout << firstNumber - secondNumber;
		break;
	case '*':
		std::cout << firstNumber * secondNumber;
		break;
	case '/':
		std::cout << firstNumber / secondNumber;
		break;
	}

}



