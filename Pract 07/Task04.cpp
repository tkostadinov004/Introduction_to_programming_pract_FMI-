#include <iostream>

//Task04
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

void swapDigits(int num1, int num2, int index)
{
    int rev1 = reverseNum(num1);
    int rev2 = reverseNum(num2);
    int rev1_cpy = rev1;
    int rev2_cpy = rev2;
    int place = 1;

    for (int i = 1; i < index; i++)
    {
        place *= 10;
    }

    rev1_cpy /= place;
    int firstNumLastDigit = rev1_cpy % 10;
    rev1 = rev1 - firstNumLastDigit * place;
    rev2_cpy /= place;
    int secondNumLastDigit = rev2_cpy % 10;
    rev2 = rev2 - secondNumLastDigit * place;

    rev1 = rev1 + secondNumLastDigit * place;
    rev2 = rev2 + firstNumLastDigit * place;

    std::cout << reverseNum(rev1) << " " << reverseNum(rev2);
}

int main()
{
    swapDigits(1234, 5678, 3);
}