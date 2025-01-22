#include <iostream>

//Task2
bool digitSumLowerThan10(int num)
{
    int sum = 0;
    for (int j = 0; j < 3; j++)
    {
        int digit = num % 10;
        num /= 10;
        sum += digit;
    }
    return sum < 10;
}

bool isPrime(int i)
{
    bool flag = 1;
    for (int k = 2; k < i; k++)
    {
        if (i % k == 0)
            flag = 0;
    }
    return flag;
}

void threeDigitNumbers(int three_digit_num)
{
    for (int i = 100; i < three_digit_num; i++)
    {
        if (digitSumLowerThan10(i) && isPrime(i))
            std::cout << i << " ";
    }
}


int main()
{
    //Task2
    threeDigitNumbers(510);

}