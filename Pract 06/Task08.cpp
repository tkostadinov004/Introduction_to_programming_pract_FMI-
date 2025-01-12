#include <iostream>

void getArray(int arr[], int size) {

	for (int i = 0; i < size; i++) {
		int newElement;
		std::cin >> newElement;
		arr[i] = newElement;
	}

}

int getCurrentInversions(int arr[], int size, int index) {

	int inversions = 0;

	for (int j = index + 1; j < size; j++) {
		if (arr[index] > arr[j]) {
			inversions++;
		}
	}

	return inversions;
}

int getInversions(int arr[], int size) {

	int countOfInversions = 0;

	for (int i = 0; i < size - 1; i++) {
		countOfInversions += getCurrentInversions(arr, size, i);
	}

	return countOfInversions;
}

int main() {

	constexpr size_t SIZE_OF_ARRAY = 256;

	int arr[SIZE_OF_ARRAY];

	int size;
	std::cin >> size;

	getArray(arr, size);

	std::cout << getInversions(arr, size);
}