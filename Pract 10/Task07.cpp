#include <iostream>

bool isUpper(const char symbol)
{
	return symbol >= 'A' && symbol <= 'Z';
}

bool isLower(const char symbol)
{
	return symbol >= 'a' && symbol <= 'z';
}

void toUpper(char* first)
{

	if (!first)
		return;

	while (*first)
	{
		if (isLower(*first)) {
			*first = *first - ('a' - 'A');
		}

		first++;
	}
}

void toLower(char* first)
{

	if (!first)
		return;

	while (*first)
	{
		if (isUpper(*first)) {
			*first = *first + ('a' - 'A');
		}

		first++;
	}
}

int main()
{
	constexpr unsigned int MAX_STRING_SIZE = 50;

	char firstString[MAX_STRING_SIZE] = "CPPExample";
	toLower(firstString);
	std::cout << firstString;
}