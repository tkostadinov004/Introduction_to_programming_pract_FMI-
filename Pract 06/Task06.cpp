#include <iostream>

void getArray(int arr[], int size) {

    for (int i = 0; i < size; i++) {
        int newElement;
        std::cin >> newElement;
        arr[i] = newElement;
    }

}

int getAverage(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum / size;
}

int getClosestNumber(int arr[], int arraySize, int average) {

    int closestNumber = 0;
    int difference = INT32_MAX;

    for (int i = 0; i < arraySize; i++) {
        if (abs(arr[i] - average) < difference) {
            closestNumber = arr[i];
            difference = abs(arr[i] - average);
        }
    }

    return closestNumber;
}

int main()
{
    constexpr size_t SIZE_OF_ARRAY = 128;

    int arr[SIZE_OF_ARRAY];

    int arraySize;
    std::cin >> arraySize;

    getArray(arr, arraySize);

    int average = getAverage(arr, arraySize);


    std::cout << getClosestNumber(arr, arraySize, average);
}