#include <iostream>

void stringCopy(const char* first, char* second)
{
	if (!first || !second)
	{
		return;
	}

	while (*second && *first)
	{
		*second = *first;
		first++;
		second++;
	}
	*second = '\0';
}

int main()
{
	constexpr unsigned int MAX_STRING_SIZE = 50;

	char firstString[MAX_STRING_SIZE] = "Welcome";
	char secondString[] = "to strings";
	stringCopy(firstString, secondString);

	std::cout << secondString;
}