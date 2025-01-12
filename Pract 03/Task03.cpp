#include <iostream>

int main()
{
	char symbol;

	std::cin >> symbol;

	if (symbol >= '0' && symbol <= '9') {
		std::cout << "Digit";
	}
	else if (symbol >= 'a' && symbol <= 'z') {
		std::cout << "Lowercase letter";
	}
	else if (symbol >= 'A' && symbol <= 'Z') {
		std::cout << "Uppercase letter";
	}
	else {
		std::cout << "Other";
	}
}



