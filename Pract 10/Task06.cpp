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

bool isBeginningWithTheString(const char*& firstString, const char* wantedString)
{
	int wantedLength = getStringLength(wantedString);

	while (wantedLength > 0)
	{
		if (*firstString != *wantedString)
		{
			return false;
		}
		firstString++;
		wantedString++;
		wantedLength--;
	}
	return true;
}

bool isFirstInSecond(const char* first, const char* second)
{
	if (!first || !second)
		return false;


	while (*first)
	{
		if (isBeginningWithTheString(first, second))
			return true;

		first++;
	}

	return false;
}

int main()
{
	const char* firstString = "sabssabcd";
	const char* secondString = "abc";

	std::cout << std::boolalpha << isFirstInSecond(firstString, secondString);
}
