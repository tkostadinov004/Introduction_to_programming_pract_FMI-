#include<iostream>

//Task3
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

void printArray(int arr[], unsigned int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
}

void reverseArray(int arr[], unsigned int n)
{
    for (int i = 0, j = n - 1; i <= j; i++, j--)
    {
        swap(arr, i, j);
    }
    printArray(arr, n);
}

int main()
{
    //Task3
    unsigned int n;
    do
    {
        std::cin >> n;
    } while (n > 100);

    int arr[100] = { 0 };
    writeArray(arr, n);
    reverseArray(arr, n);
}