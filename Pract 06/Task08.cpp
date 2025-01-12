#include<iostream>

//Task8

void writeArray(int arr[], unsigned int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
}

int inversionCnt(int arr[], unsigned int size)
{
    int inversionCnt = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
                inversionCnt++;
        }
    }
    return inversionCnt;
}

int main()
{
    //Task8
    unsigned int size;
    do
    {
        std::cin >> size;
    } while (size > 256);

    int arr[256] = { 0 };
    writeArray(arr, size);
    std::cout << inversionCnt(arr, size) << std::endl;
}