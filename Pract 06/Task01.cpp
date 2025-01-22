#include <iostream>

//Task1
bool isPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

void printPower(int num, int power)
{
    if (power == 1)
    {
        std::cout << num;
    }
    else
        std::cout << num << "^" << power;
}

int numAfterPrimePrint(int num, int  currPrime)
{
    int power = 0;
    while (num % currPrime == 0)
    {
        num /= currPrime;
        power++;
    }

    if (power)
    {
        printPower(currPrime, power);
        if (num != 1)
            std::cout << " * ";
    }

    return num;
}

void factorizationTask1(int num)
{
    int num_copy = num;
    for (int i = 2; i < num_copy / 2; i++)
    {
        if (isPrime(i))
        {
            num = numAfterPrimePrint(num, i);

        }
    }
}

int main()
{
    //Task1
    factorizationTask1(225);
    factorizationTask1(21528);
}