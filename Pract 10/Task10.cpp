#include <iostream>
#include <cstring>

#pragma warning(disable: 4996)

bool isUppercase(char ch) { return ch >= 'A' && ch <= 'Z'; }
bool isLowercase(char ch) { return ch >= 'a' && ch <= 'z'; }
bool isLetter(char ch) { return isUppercase(ch) || isLowercase(ch); }

unsigned int countWords(const char* myString)
{
    unsigned count = 0;

    while (*myString)
    {
        if (isLetter(*myString) && (!isLetter(*(myString + 1))))
        {
            count++;
        }
        myString++;
    }

    return count;
}

char* getWord(const char*& string)
{

    while (*string && !isLetter(*string))
        string++;

    if (!string)
        return nullptr;

    const char* start = string;
    while (*string && isLetter(*string))
        string++;

    unsigned length = string - start;

    char* word = new char[length + 1];

    for (unsigned i = 0; i < length; i++)
    {
        word[i] = start[i];
    }
    word[length] = '\0';

    return word;
}

void toLower(char* string)
{
    while (*string)
    {
        if (isUppercase(*string))
        {
            *string += ('a' - 'A');
        }
        string++;
    }
}

void countWordOccurances(char** words, int* wordOccurances, unsigned size)
{
    for (unsigned i = 0; i < size; i++)
    {
        wordOccurances[i] = 1;

        for (unsigned j = i + 1; j < size; j++)
        {
            char* word1 = new char[strlen(words[i]) + 1];
            char* word2 = new char[strlen(words[j]) + 1];

            strcpy(word1, words[i]);
            strcpy(word2, words[j]);

            toLower(word1);
            toLower(word2);

            if (strcmp(word1, word2) == 0)
            {
                wordOccurances[i]++;
            }

            delete[] word1;
            delete[] word2;
        }
    }
}

unsigned getMostCommonWordIndex(int* wordOccurances, unsigned size)
{
    unsigned maxIndex = 0;
    for (unsigned i = 1; i < size; i++)
    {
        if (wordOccurances[i] > wordOccurances[maxIndex])
        {
            maxIndex = i;
        }
    }
    return maxIndex;
}

const char* getMostCommonWord(const char* inputString)
{
    const char* inputStringCopy = inputString;

    unsigned wordsCount = countWords(inputString);
    char** words = new char* [wordsCount];

    for (unsigned i = 0; i < wordsCount; i++)
    {
        words[i] = getWord(inputStringCopy);
    }

    int* wordOccurances = new int[wordsCount];
    countWordOccurances(words, wordOccurances, wordsCount);

    unsigned mostCommonWordIndex = getMostCommonWordIndex(wordOccurances, wordsCount);
    const char* result = words[mostCommonWordIndex];

    for (unsigned i = 0; i < wordsCount; i++)
    {
        if (i != mostCommonWordIndex)
            delete[] words[i];
    }

    delete[] words;
    delete[] wordOccurances;

    return result;
}

int main() {
    const char* string = "Things  do not change; we Change.\" - Henry David    Thoreau";
    const char* mostCommonWord = getMostCommonWord(string);
    std::cout << mostCommonWord << std::endl;
}
