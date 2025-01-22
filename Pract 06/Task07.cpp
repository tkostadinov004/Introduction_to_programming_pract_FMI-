#include<iostream>

//Task7

void printArray(int arr[], unsigned int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
}

void writeArray(int arr[], unsigned int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
}

int removeNegative(int arr[], unsigned int size)
{
    int empty_index = 0, cntNegative = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 0)
        {
            arr[empty_index] = arr[i];
            empty_index++;
        }
        else
        {
            cntNegative++;
        }
    }

    for (int i = cntNegative; i < size; i++)
    {
        arr[i] = 0;
    }

    return size - cntNegative;
}

int main()
{
    //Task7
    unsigned int sizeOfArr;
    do
    {
        std::cin >> sizeOfArr;
    } while (sizeOfArr > 128);

    int arr[128] = { 0 };
    writeArray(arr, sizeOfArr);
    int newSize = removeNegative(arr, sizeOfArr);
    std::cout << newSize << std::endl;
    printArray(arr, newSize);
}