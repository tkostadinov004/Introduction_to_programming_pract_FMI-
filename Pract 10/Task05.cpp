#include <iostream>

int parseStringToNum(const char* stringToParse)
{
	int number = 0;
	bool check = false;

	if (*stringToParse == '-') {
		check = true;
		stringToParse++;
	}

	while (*stringToParse)
	{
		number *= 10;
		number += (*stringToParse - '0');
		stringToParse++;
	}

	return check ? number * (-1) : number;
}

int main()
{
	const char* myString = "-1237";

	int parsedNumber = parseStringToNum(myString);
	std::cout << parsedNumber;
}