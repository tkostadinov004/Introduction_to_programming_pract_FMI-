#include <iostream>

void getArray(unsigned int array[], size_t size)
{
	for (size_t i = 0; i < size; i++) {
		std::cin >> array[i];
	}
}

bool isInSecondArray(unsigned int element, unsigned int array[], size_t size) {

	for (size_t j = 0; j < size; j++) {
		if (array[j] == element) {
			return true;
		}
	}

	return false;
}

unsigned int countDraws(unsigned int firstArray[], unsigned int secondArray[], size_t size)
{
	unsigned int draws = 0;

	for (size_t i = 0; i < size; i++) {

		if (isInSecondArray(firstArray[i], secondArray, size)) {
			draws++;
		}

	}

	return draws;
}

int main() {

	constexpr size_t ARRAY_SIZE = 50;

	size_t size;

	do {
		std::cin >> size;
	} while (size < 1 || size > 50);

	unsigned int firstArray[ARRAY_SIZE];
	unsigned int secondArray[ARRAY_SIZE];

	getArray(firstArray, size);
	getArray(secondArray, size);

	std::cout << "Draws: " << countDraws(firstArray, secondArray, size);
}