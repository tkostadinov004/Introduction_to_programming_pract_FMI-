#include <iostream>

void getArray(char arr[], int size) {

	for (int i = 0; i < size; i++) {
		int newElement;
		std::cin >> newElement;
		arr[i] = newElement;
	}

}

bool isPalindrome(char arr[], int size) {

	for (int i = 0; i < size / 2; i++) {

		if (arr[i] != arr[size - i - 1]) {
			return false;
		}

	}

	return true;
}

int main()
{
	constexpr size_t SIZE_OF_ARRAY = 512;
	char arr[SIZE_OF_ARRAY];

	int n;
	std::cin >> n;

	getArray(arr, n);

	std::cout << std::boolalpha << isPalindrome(arr, n);
}