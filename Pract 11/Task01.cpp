#include <iostream>

void concatenateStrings(const char* firstString, const char* secondString, char*& result)
{
    if (!firstString || !secondString)
        return;

    char* temp = result;

    while (*firstString || *secondString)
    {
        if (!secondString || (*firstString && *firstString <= *secondString))
        {
            *temp = *firstString;
            temp++;
            firstString++;
        }
        else
        {
            *temp = *secondString;
            temp++;
            secondString++;
        }
    }

    *temp = '\0';
}

int getStringLength(const char* string)
{
    if (!string)
        return 0;

    int length = 0;
    while (*string)
    {
        length++;
        string++;
    }
    return length;
}

int main()
{
    const char* firstString = "aadgghxyyz";
    const char* secondString = "abcfijkl";

    char* result = new char[getStringLength(firstString) + getStringLength(secondString) + 1];

    concatenateStrings(firstString, secondString, result);

    std::cout << result << std::endl;

    delete[] result;
}
