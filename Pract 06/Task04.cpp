#include<iostream>

//Task4

void writeArray(int arr[], unsigned int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
}

bool isPalindrom(int arr[], unsigned int size)
{
    for (int i = 0, j = size - 1; i <= j; i++, j--)
    {
        if (arr[i] != arr[j])
            return false;
    }
    return true;
}

int main()
{
    //Task4
    unsigned int size;
    do
    {
        std::cin >> size;
    } while (size > 512);

    int arr[512] = { 0 };
    writeArray(arr, size);
    std::cout << isPalindrom(arr, size);
}