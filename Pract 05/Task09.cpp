#include <iostream>

long sortNumForSingleDigit(unsigned long number, long sortedNumber, int digit) {

    while (number > 0)
    {
        int currentDigit = number % 10;

        if (currentDigit == digit)
        {
            sortedNumber *= 10;
            sortedNumber += digit;
        }

        number /= 10;
    }

    return sortedNumber;

}

long sortedNumber(unsigned long number) {

    long sortedNumber = 0;

    for (int i = 9; i >= 0; i--)
    {
        sortedNumber = sortNumForSingleDigit(number, sortedNumber, i);
    }
    return sortedNumber;
}

int main()
{
    unsigned long number;

    std::cin >> number;

    std::cout << sortedNumber(number);

}