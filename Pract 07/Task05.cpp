#include <iostream>

//Task05
int reverseNum(int num)
{
    int reversed = 0;

    while (num)
    {
        int lastDigit = num % 10;
        reversed = reversed * 10 + lastDigit;
        num /= 10;
    }

    return reversed;
}

void moveDigits(int num1, int num2, int k)
{
    int place = 10;

    for (int i = 1; i < k; i++)
    {
        place *= 10;
    }

    int digits = num1 % place;
    num1 /= place;

    int reverseSecondNum = reverseNum(num2);
    reverseSecondNum *= place;
    reverseSecondNum += reverseNum(digits);

    std::cout << num1 << " " << reverseNum(reverseSecondNum);
}

int main()
{
    moveDigits(1957, 234, 2);
}