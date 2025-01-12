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

int main()
{

	const char* myString = "Welcome to strings";
	unsigned stringLength = getStringLength(myString);

	std::cout << "String '" << myString << "' has length of: " << stringLength;
}