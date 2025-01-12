#include <iostream>

void getArray(int arr[], int size) {

	for (int i = 0; i < size; i++) {
		int newElement;
		std::cin >> newElement;
		arr[i] = newElement;
	}

}

bool isComposition(int secondCoord, int element) {
	return secondCoord == element;
}

void printComposition(int qArray[], int size, int secondCoord, int firstCoord) {

	for (int j = 0; j < size; j += 2) {
		if (isComposition(secondCoord, qArray[j])) {
			std::cout << "(" << firstCoord << ", " << qArray[j + 1] << ") ";
		}
	}

}

void getComposition(int rArray[], int qArray[], int size) {

	for (int i = 0; i < size; i += 2) {

		int firstCoord = rArray[i];
		int secondCoord = rArray[i + 1];

		printComposition(qArray, size, secondCoord, firstCoord);

	}



}

int main() {

	constexpr size_t SIZE_OF_ARRAY = 256;

	int rArray[SIZE_OF_ARRAY];
	int qArray[SIZE_OF_ARRAY];

	int size;
	std::cin >> size;

	getArray(rArray, size);
	getArray(qArray, size);

	getComposition(rArray, qArray, size);


}