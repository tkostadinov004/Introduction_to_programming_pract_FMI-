#include <iostream>

int parseStringToNum(const char* myString)
{
	int number = 0;
	bool check = false;

	if (*myString == '-') {
		check = true;
		myString++;
	}

	while (*myString)
	{
		number *= 10;
		number += (*myString - '0');
		myString++;
	}

	return check ? number * (-1) : number;
}

int main()
{
	const char* myString = "-1237";

	int parsedNumber = parseStringToNum(myString);
	std::cout << parsedNumber;
}