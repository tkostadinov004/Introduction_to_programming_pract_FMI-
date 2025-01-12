#include <iostream>

unsigned int getStringLength(char* myString)
{
	unsigned length = 0;

	while (*myString) {
		length++;
		myString++;
	}

	return length;
}

void stringConcat(char* first, char* second)
{
	if (!first || !second)
	{
		return;
	}

	first += getStringLength(first);

	while (*second)
	{
		*first += *second;
		first++;
		second++;
	}
	*first = '\0';
}

int main()
{
	constexpr unsigned int MAX_STRING_SIZE = 50;

	char firstString[MAX_STRING_SIZE] = "Welcome ";
	char secondString[] = "to strings";
	stringConcat(firstString, secondString);

	std::cout << firstString;
}