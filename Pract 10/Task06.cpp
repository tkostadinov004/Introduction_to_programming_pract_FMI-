#include <iostream>

unsigned int getStringLength(const char* myString)
{
	unsigned length = 0;

	while (*myString) {
		length++;
		myString++;
	}

	return length;
}

bool isFirstInSecond(const char* first, const char* second)
{
	if (!first || !second)
		return false;

	while (*first != *second)
		first++;

	int secondLength = getStringLength(second);

	for (int i = 1; i <= secondLength; i++) {
		if (*first != *second) {
			return false;
		}
		first++;
		second++;
	}

	return true;
}

int main()
{
	const char* firstString = "cppprogramming";
	const char* secondString = "rog";

	std::cout << std::boolalpha << isFirstInSecond(firstString, secondString);
}
