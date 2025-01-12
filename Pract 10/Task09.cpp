#include <iostream>
#include <cstring>

bool isSpace(char ch)
{
    return ch == ' ';
}

bool isUppercase(char ch)
{
    return ch >= 'A' && ch <= 'Z';
}

bool isLowercase(char ch)
{
    return ch >= 'a' && ch <= 'z';
}

bool isLetter(char ch)
{
    return isUppercase(ch) || isLowercase(ch);
}

char* getWord(const char*& string)
{

    while (*string && !isLetter(*string))
    {
        string++;
    }

    const char* start = string;

    while (*string && isLetter(*string))
    {
        string++;
    }

    unsigned length = string - start;

    if (length == 0)
    {
        return nullptr;
    }

    char* word = new char[length + 1];

    for (unsigned i = 0; i < length; i++)
    {
        word[i] = start[i];
    }
    word[length] = '\0';

    return word;
}

char* getSmallestWord(const char* string)
{

    if (!string || *string == '\0')
    {
        return nullptr;
    }

    char* smallestWord = nullptr;

    while (*string)
    {
        char* currentWord = getWord(string);

        if (currentWord)
        {
            if (!smallestWord || strcmp(currentWord, smallestWord) < 0)
            {

                delete[] smallestWord;
                smallestWord = currentWord;
            }
            else
            {
                delete[] currentWord;
            }
        }
    }

    return smallestWord;
}

int main() 
{
    const char* myString = "\"Things  do not change; we Change.\" - Henry David    Thoreau";

    char* smallestWord = getSmallestWord(myString);

    std::cout << "Smallest word: " << smallestWord << std::endl;
    delete[] smallestWord;
}
