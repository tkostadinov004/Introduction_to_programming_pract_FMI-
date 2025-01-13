#include <iostream>

void getArray(int arr[], int size) {

	for (int i = 0; i < size; i++) {
		int newElement;
		std::cin >> newElement;
		arr[i] = newElement;
	}

}

bool isSumK(int arr[], int size, int index, int secondIndex, int k) {
	return arr[index] + arr[secondIndex] == k;
}

void printNumbersWithSumK(int arr[], int size, int k, int index) {

	for (int j = index + 1; j < size; j++) {

		if (isSumK(arr, size, index, j, k)) {
			std::cout << arr[index] << " " << arr[j] << std::endl;
		}

	}

}

void getNumbersWithSumK(int arr[], int size, int k) {

	for (int i = 0; i < size - 1; i++) {

		printNumbersWithSumK(arr, size, k, i);

	}
}

int main() {

	constexpr size_t SIZE_OF_ARRAY = 100;

	int arr[SIZE_OF_ARRAY];

	int size;
	std::cin >> size;

	int k;
	std::cin >> k;

	getArray(arr, size);

	getNumbersWithSumK(arr, size, k);


}