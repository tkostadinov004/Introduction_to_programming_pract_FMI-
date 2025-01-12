#include <iostream>

int main()
{

	int number;

	std::cin >> number;

	bool checkOuter = (number % 10) == (number / 1000);
	bool checkInner = ((number / 10) % 10) == ((number / 100) % 10);

	std::cout << checkOuter && checkInner;

}