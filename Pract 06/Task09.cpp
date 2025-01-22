#include<iostream>

//Task9

void writeArray(int arr[], unsigned int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
}

bool isAscending(int arr[], unsigned int size)
{
    for (int i = 0, j = i + 1; i < size; i++, j++)
    {
        if (arr[i] > arr[j])
            return false;
    }
    return true;
}


int main()
{
    //Task9
    unsigned int size;
    do
    {
        std::cin >> size;
    } while (size > 256);

    int arr[256] = { 0 };
    writeArray(arr, size);
    std::cout << isAscending(arr, size) << std::endl;
}