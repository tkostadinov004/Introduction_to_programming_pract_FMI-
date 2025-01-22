#include<iostream>

//Task10

void writeArrayChar(char arr[], unsigned int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
}

void swapChar(char arr[], int index1, int index2)
{
    char tmp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = tmp;
}

void sortArrChar(char arr[], unsigned int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
                swapChar(arr, i, j);
        }
    }
}

bool areEqualArrays(char arr1[], unsigned int size1, char arr2[], unsigned int size2)
{
    for (int i = 0; i < size1; i++)
    {
        if (arr1[i] != arr2[i])
            return false;
    }
    return true;
}

bool areArraysPermutation(char arr1[], unsigned int size1, char arr2[], unsigned int size2)
{
    if (size1 != size2)
        return false;

    sortArrChar(arr1, size1);
    sortArrChar(arr2, size2);

    return areEqualArrays(arr1, size1, arr2, size2);
}

int main()
{
    //Task10
    unsigned int sizeArr1;
    do
    {
        std::cin >> sizeArr1;
    } while (sizeArr1 > 256);

    char arr1[256] = { 0 };
    writeArrayChar(arr1, sizeArr1);

    unsigned int sizeArr2;
    do
    {
        std::cin >> sizeArr2;
    } while (sizeArr2 > 256);

    char arr2[256] = { 0 };
    writeArrayChar(arr2, sizeArr2);

    std::cout << areArraysPermutation(arr1, sizeArr1, arr2, sizeArr2) << std::endl;
}