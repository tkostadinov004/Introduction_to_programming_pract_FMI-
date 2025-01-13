#include <iostream>

bool isUppercase(char ch) {
	return ch >= 'A' && ch <= 'Z';
}

bool isLowercase(char ch) {
	return ch >= 'a' && ch <= 'z';
}

bool isLetter(char ch)
{
	return isUppercase(ch) || isLowercase(ch);
}

unsigned int countWords(const char* myString)
{
	if (!myString)
		return 0;

	unsigned int countWords = 0;

	while (*myString)
	{
		if (isLetter(*myString) && !isLetter(*(myString + 1)))
		{
			countWords++;
		}
		myString++;
	}

	return countWords;
}

int main()
{
	const char* firstString = "  Good  morning,     Vietnam!";

	std::cout << countWords(firstString);
}