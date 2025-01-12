#include<iostream>

//Task6
void swap(int arr[], int index1, int index2)
{
    int tmp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = tmp;
}

void writeArray(int arr[], unsigned int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
}

void sortArr(int arr[], unsigned int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
                swap(arr, i, j);
        }
    }
}

int arraySum(int arr[], unsigned int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int abs(int num)
{
    return num > 0 ? num : -num;
}

void averageNearestValue(int arr[], unsigned int size)
{
    sortArr(arr, size);
    int sum = arraySum(arr, size);
    int average = sum / size;

    if (average < arr[0])
        std::cout << arr[0];

    if (average > arr[size - 1])
        std::cout << arr[size - 1];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < average && average < arr[i + 1])
        {
            if (abs(arr[i] - average) > abs(arr[i + 1] - average))
                std::cout << arr[i + 1];
            else
                std::cout << arr[i];
        }
    }
}

int main()
{
    //Task6
    unsigned int sizeOfArr;
    do
    {
        std::cin >> sizeOfArr;
    } while (sizeOfArr > 128);

    int arr[128] = { 0 };
    writeArray(arr, sizeOfArr);
    averageNearestValue(arr, sizeOfArr);

}
