#include <iostream>

int compareStrings(const char* first, const char* second)
{
	if (!first || !second)
		return 0;

	while ((*first && *second) && (*first == *second))
	{
		first++;
		second++;
	}

	return (*first - *second);
}

int main()
{
	const char* firstString = "abc";
	const char* secondString = "abc";


	std::cout << compareStrings(firstString, secondString);
}