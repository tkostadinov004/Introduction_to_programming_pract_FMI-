#include <iostream>

//Task02
int cnt(int* arr, unsigned size, int K)
{
    int res = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % K == 0)
            res++;
    }
    return res;
}

void printArr(int* arr, unsigned size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
}

void fillArr(int* arr, unsigned size, int K, int* finalArr)
{
    for (int i = 0, j = 0; i < size; i++)
    {
        if (arr[i] % K == 0)
        {
            finalArr[j] = arr[i];
            j++;
        }

    }
}

int main()
{
    unsigned int K;
    std::cin >> K;

    int arr1[5] = { 2, 8, 3, 15, 27 };// Moje da se napravi i s vuvejdane na size ot konzolata prosto me murzi malko :)
    int arr2[3] = { 5, 9, 4 };

    int* arr3 = new int[8];
    int i = 0;
    for (; i < 5; i++)
    {
        arr3[i] = arr1[i];
    }
    for (int j = 0; i < 8; i++, j++)
    {
        arr3[i] = arr2[j];
    }


    unsigned cntOfNumsDividedByK = cnt(arr3, 8, K);

    int* finalArr = new int[cntOfNumsDividedByK];

    fillArr(arr3, 8, K, finalArr);
    printArr(finalArr, cntOfNumsDividedByK);

    delete[] arr3;
    delete[] finalArr;
}