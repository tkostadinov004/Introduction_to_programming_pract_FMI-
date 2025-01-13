#include <iostream>

void getArray(int arr[], int size) {

	for (int i = 0; i < size; i++) {
		int newElement;
		std::cin >> newElement;
		arr[i] = newElement;
	}

}

void reverseArray(int arr[], int reversedArray[], int size) {

	int counter = 0;

	for (int i = size - 1; i >= 0; i--) {
		reversedArray[counter] = arr[i];
		counter++;
	}

}

void printArray(int arr[], int size) {

	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}

}

int main()
{
	constexpr size_t SIZE_OF_ARRAY = 100;

	unsigned int n;
	std::cin >> n;

	if (n <= SIZE_OF_ARRAY) {

		int arr[SIZE_OF_ARRAY];
		int reversedArray[SIZE_OF_ARRAY];

		getArray(arr, n);

		reverseArray(arr, reversedArray, n);

		printArray(reversedArray, n);

	}
	else {
		std::cout << "Wrong input!";
	}


}

