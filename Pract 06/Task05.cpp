#include <iostream>

void getArray(int arr[], int size) {

	for (int i = 0; i < size; i++) {
		int newElement;
		std::cin >> newElement;
		arr[i] = newElement;
	}

}

bool isPalindrome(int arr[], int beggining, int end) {

	if (beggining != end) {

		int help = end;

		for (int i = beggining; i < end / 2; i++) {

			if (arr[i] != arr[help]) {
				return false;
			}

			help--;
		}
	}

	return true;
}

bool isConcatenationOfPalindroms(int arr[], int size) {

	for (int i = 0; i < size; i++) {

		if (isPalindrome(arr, 0, i) && isPalindrome(arr, i + 1, size - 1)) {
			return true;
		}
	}

	return false;
}

int main() {

	constexpr size_t SIZE_OF_ARRAY = 256;

	int arr[SIZE_OF_ARRAY];

	int size;
	std::cin >> size;

	getArray(arr, size);

	std::cout << std::boolalpha << isConcatenationOfPalindroms(arr, size);

}