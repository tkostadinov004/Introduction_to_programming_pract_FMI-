#include <iostream>

//Task1
bool isDigit(char c)
{
    return c >= '0' && c <= '9';
}

bool isUpper(char c)
{
    return c >= 'A' && c <= 'Z';
}

bool isLower(char c)
{
    return c >= 'a' && c <= 'z';
}

bool isAlpha(char c)
{
    return isUpper(c) || isLower(c);
}

bool isAlnum(char c)
{
    return isDigit(c) || isAlpha(c);
}

char capitalize(char c)
{
    if (isLower(c))
        return 'A' + c - 'a';
    return c;
}

char makeLower(char c)
{
    if (isUpper(c))
        return 'a' + c - 'A';
    return c;
}

int parseInt(char c)
{
    if (isDigit(c))
        return c - '0';
    return -1;
}

char toChar(int num)
{
    if (num > 1023)
        return '\0';
    return (char)num;
}

int myLog(int a, int b)
{
    if (b == 1)
        return 0;
    if (a == b)
        return 1;

    int res = 1, n = 0;
    while (res != b)
    {
        res *= a;
        n++;
    }
    return n;
}


int myPow(int a, int b)
{
    if (b == 0)
        return 1;

    if (b == 1)
        return a;

    int res = 1;
    for (int i = 0; i < b; i++)
    {
        res = res * a;
    }
    return res;
}

int myCeil(double num)
{
    int intPart = (int)num;
    return intPart + 1;
}

int myFloor(double num)
{
    int intPart = (int)num;
    return intPart;
}

int myAbs(int num)
{
    if (num >= 0)
        return num;
    return -num;
}

int main()
{
 
}