#include <iostream>

void getArray(int arr[], int size) {

	for (int i = 0; i < size; i++) {
		int newElement;
		std::cin >> newElement;
		arr[i] = newElement;
	}

}

void shiftElements(int arr[], int size, int index) {

	while (index < size) {
		arr[index] = arr[index + 1];
		index++;
	}

}

int removeNegativeNumbers(int arr[], int size) {

	for (int i = 0; i < size; i++) {
		if (arr[i] < 0) {
			shiftElements(arr, size, i);
			size--;
			i--;
		}
	}

	return size;

}

void printArr(int arr[], int size) {

	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}

}

int main() {

	constexpr size_t SIZE_OF_ARRAY = 128;

	int arr[SIZE_OF_ARRAY];

	int size;
	std::cin >> size;

	getArray(arr, size);

	size = removeNegativeNumbers(arr, size);

	std::cout << size << std::endl;

	printArr(arr, size);

}