#include<iostream>

//Task5

void writeArray(int arr[], unsigned int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
}

bool isIntervalPalindrom(int arr[], int begin, int end)
{
    for (int i = begin, j = end; i <= j; i++, j--)
    {
        if (arr[i] != arr[j])
            return false;
    }
    return true;
}

bool canArrayDivideInTwoPalindroms(int arr[], unsigned int size)
{
    for (int i = 0; i < size; i++)
    {
        if (isIntervalPalindrom(arr, 0, i) && isIntervalPalindrom(arr, i + 1, size - 1))
            return true;
    }
    return false;
}

int main()
{
    //Task5
    unsigned int arrSize;
    do
    {
        std::cin >> arrSize;
    } while (arrSize > 512);

    int arr[512] = { 0 };
    writeArray(arr, arrSize);
    std::cout << canArrayDivideInTwoPalindroms(arr, arrSize);
}