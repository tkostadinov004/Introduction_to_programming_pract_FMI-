#include <iostream>

//Task04

int wordSize(char* arr, char symbol)
{
    int res = 0;
    while (*arr != symbol)
    {
        res++;
        arr++;
    }
    return res;
}

int lastWordSize(char* arr, unsigned int size)
{
    int res = 0;
    while (arr[size - 1 - res] != ' ')
    {
        res++;
    }
    return res;
}

void saveWord(char* arr, int beginIndex, char* word, char symbol)
{
    int i = 0;
    for (; arr[beginIndex] != symbol; i++)
    {
        word[i] = arr[beginIndex];
        beginIndex++;
    }
    word[i] = symbol;
}

void printString(char* arr, unsigned size)
{
    while (*arr != '\0')
    {
        std::cout << *arr;
        arr++;
    }
}

int main()
{
    unsigned int size;
    std::cin >> size;

    char* arr = new char[size];
    std::cin.ignore();
    std::cin.getline(arr, size);

    int sizeOfFirstWord = wordSize(arr, ' ');
    char* firstWord = new char[sizeOfFirstWord + 2];
    saveWord(arr, 0, firstWord, ' ');
    firstWord[sizeOfFirstWord + 1] = '\0';

    int sizeOfLastWord = lastWordSize(arr, size);
    char* lastWord = new char[sizeOfLastWord + 1];
    int lastWordBegin = size - sizeOfLastWord;

    saveWord(arr, lastWordBegin, lastWord, '\0');
    lastWord[sizeOfLastWord] = '\0';
    char* resArr = new char[sizeOfFirstWord + 1 + sizeOfLastWord + 1];

    int i = 0;
    while (firstWord[i] != '\0')
    {
        resArr[i] = firstWord[i];
        i++;
    }

    for (int j = 0; lastWord[j] != '\0'; j++)
    {
        resArr[i] = lastWord[j];
        i++;
    }
    resArr[i] = '\0';


    printString(resArr, sizeOfFirstWord + 1 + sizeOfLastWord + 1);

    delete[] arr;
    delete[] firstWord;
    delete[] lastWord;
    delete[] resArr;
}