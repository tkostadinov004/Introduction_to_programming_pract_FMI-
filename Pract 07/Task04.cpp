#include <iostream>

int getNumberLength(unsigned int number)
{
    int count = 0;

    while (number > 0)
    {
        number /= 10;
        count++;
    }

    return count;
}

int powerOfTen(unsigned int index)
{
    int result = 1;

    for (int i = 0; i < index; i++)
    {
        result *= 10;
    }

    return result;
}

int getKDigit(unsigned int num, unsigned int index, unsigned int numLength)
{
    int powerOfTenToDivide = powerOfTen(numLength - index);

    if (num < powerOfTenToDivide)
    {
        return 0;
    }

    return (num / powerOfTenToDivide) % 10;
}

int setKDigit(unsigned int num, unsigned int index, unsigned int newDigit, unsigned int numLength)
{
    int powerOfTenToDivide = powerOfTen(numLength - index);
    int currentDigit = (num / powerOfTenToDivide) % 10;

    return num - currentDigit * powerOfTenToDivide + newDigit * powerOfTenToDivide;
}

void swapDigitsAtIndex(unsigned int firstNumber, unsigned int secondNumber, unsigned int index)
{
    int firstNumLength = getNumberLength(firstNumber);
    int secondNumLength = getNumberLength(secondNumber);

    int firstDigit = getKDigit(firstNumber, index, firstNumLength);
    int secondDigit = getKDigit(secondNumber, index, secondNumLength);

    firstNumber = setKDigit(firstNumber, index, secondDigit, firstNumLength);
    secondNumber = setKDigit(secondNumber, index, firstDigit, secondNumLength);

    std::cout << firstNumber << std::endl;
    std::cout << secondNumber << std::endl;
}

int main()
{
    unsigned int firstNum, secondNum, index;
    std::cin >> firstNum >> secondNum >> index;


}
