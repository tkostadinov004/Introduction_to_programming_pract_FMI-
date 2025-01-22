#include <iostream>

//Task07
int cntDigit(unsigned long int num, int digit)
{
    int count = 0;
    while (num)
    {
        if (num % 10 == digit)
        {
            count++;
        }
        num /= 10;
    }
    return count;
}

unsigned long int concatDigits(unsigned num, unsigned digit)
{
    return num * 10 + digit;
}

unsigned concatCountDigitsAtBack(unsigned num, unsigned digit, int count)
{
    for (int i = 0; i < count; i++)
    {
        num = concatDigits(num, digit);
    }
    return num;
}

int sortNum(unsigned long int num)
{
    unsigned long int result = 0;
    for (int i = 0; i <= 9; i++)
    {
        int digitCount = cntDigit(num, i);
        result = concatCountDigitsAtBack(result, i, digitCount);
    }
    return result;
}

bool isPermutation(unsigned long int num1, unsigned long int num2)
{
    return sortNum(num1) == sortNum(num2);
}

int main()
{
	std::cout << isPermutation(273826, 227683) << std::endl;
	std::cout << isPermutation(113129, 111197) << std::endl;
}