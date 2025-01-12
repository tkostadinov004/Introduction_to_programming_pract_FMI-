#include <iostream>

//Task03
int cntOfLowerLetters(char* arr)
{
    int res = 0;
    while (*arr != '\0')
    {
        if (*arr >= 'a' && 'z' >= *arr)
            res++;
        arr++;
    }
    return res;
}

int cntOfUpperLetters(char* arr)
{
    int res = 0;
    while (*arr != '\0')
    {
        if (*arr >= 'A' && 'Z' >= *arr)
            res++;
        arr++;
    }
    return res;
}

void printCharArr(char* arr, unsigned size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
}

int main()
{
    //Task03
    
    unsigned int size1;
    std::cin >> size1;

    char* arr1 = new char[size1];
    int i = 0;
    for (; i < size1-1; i++)
    {
        std::cin >> arr1[i];
    }
    arr1[i + 1] = '\0';

    unsigned int size2;
    std::cin >> size2;

    char* arr2 = new char[size2];

    int j = 0;
    for (; j < size2 - 1; j++)
    {
        std::cin >> arr2[j];
    }
    arr2[j + 1] = '\0';


    int cntOfLower = cntOfLowerLetters(arr1);
    int cntOfUpper = cntOfUpperLetters(arr2);

    char* concatArr = new char[cntOfLower + cntOfUpper];

    int m = 0;
    for (int i = 0; i < size1; i++)
    {
        if (arr1[i] >= 'a' && 'z' >= arr1[i])
        {
            concatArr[m] = arr1[i];
            m++;
        }
    }

    for (int i = 0; i < size2; i++)
    {
        if (arr2[i] >= 'A' && 'Z' >= arr2[i])
        {
            concatArr[m] = arr2[i];
            m++;
        }
    }

    printCharArr(concatArr, cntOfLower + cntOfUpper);

    delete[] arr1;
    delete[] arr2;
    delete[] concatArr;

}