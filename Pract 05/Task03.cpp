#include<iostream>

//Task3
bool isSpecialNumber(int num)
{
    int sum = 0;
    for (int i = 1; i <= num / 2 + 1; i++)
    {
        if (num % i == 0)
            sum += i;
    }

    return sum == num;
}

int main()
{
    //Task3
    std::cout << isSpecialNumber(6) << std::endl;
    std::cout << isSpecialNumber(28) << std::endl;
    std::cout << isSpecialNumber(25) << std::endl;
}