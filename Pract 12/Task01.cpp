#include <iostream>

//Task01
void reverseNumber()
{
    unsigned int num;
    std::cin >> num;

    int* arr = new int[num];

    for (int i = 0; i < num; i++)
    {
        std::cin >> arr[i];
    }

    for (int j = num - 1; j >= 0; j--)
    {
        std::cout << arr[j] << " ";
    }

    delete[] arr;
}

int main()
{
    //Task01
    reverseNumber();
}