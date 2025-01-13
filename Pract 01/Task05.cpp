#include <iostream>

int main()
{
	int first, second;
	bool isDelimeter;

	std::cin >> first;
	std::cin >> second;


	if (first % second == 0) {
		isDelimeter = true;
	} else {

		isDelimeter = false;
	}

	std::cout << isDelimeter;
}