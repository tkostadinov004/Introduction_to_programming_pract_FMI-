#include <iostream>

void getArray(char arr[], int size) {

	for (int i = 0; i < size; i++) {
		char newElement;
		std::cin >> newElement;
		arr[i] = newElement;
	}

}

int countSymbolInArray(char array[], int size, char symbol) {

	int occurencies = 0;

	for (int i = 0; i < size; i++) {
		if (array[i] == symbol) {
			occurencies++;
		}
	}

	return occurencies;
}



bool isPermutation(char firstArr[], int size, char secondArr[]) {

	for (int i = 0; i < size; i++) {

		if (countSymbolInArray(firstArr, size, firstArr[i]) != countSymbolInArray(secondArr, size, firstArr[i])) {
			return  false;
		}

	}

	return true;
}

int main() {

	constexpr size_t SIZE_OF_ARRAY = 256;

	char firstArr[SIZE_OF_ARRAY];
	char secondArr[SIZE_OF_ARRAY];

	int size;
	std::cin >> size;

	getArray(firstArr, size);
	getArray(secondArr, size);

	std::cout << std::boolalpha << isPermutation(firstArr, size, secondArr);

}