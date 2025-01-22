#include<iostream>

//Task11
void writeArray(int arr[], unsigned int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
}

void printElementsWithGivenSum(int arr[], unsigned int size, int sum)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == sum)
                std::cout << arr[i] << " " << arr[j] << std::endl;
        }
    }
}


int main()
{
    //Task11
    unsigned int size;
    do
    {
        std::cin >> size;
    } while (size > 100);

    int sum;
    std::cin >> sum;

    int arr[100] = { 0 };
    writeArray(arr, size);
    printElementsWithGivenSum(arr, size, sum); 
}