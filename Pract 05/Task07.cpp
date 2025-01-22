#include<iostream>

//Task7
bool ascending(int num)
{
    int n1 = num % 10;
    num /= 10;
    while (num)
    {
        if (num % 10 < n1)
            return false;
        n1 = num % 10;
        num /= 10;
    }
    return true;
}

bool descending(int num)
{
    int n1 = num % 10;
    num /= 10;
    while (num)
    {
        if (num % 10 > n1)
            return false;
        n1 = num % 10;
        num /= 10;
    }
    return true;
}

bool isSorted(int num)
{
    if (ascending(num) || descending(num))
        return true;
    return false;
}

int main()
{
    //Task7
    std::cout << isSorted(123456789) << std::endl;
    std::cout << isSorted(987654321) << std::endl;
    std::cout << isSorted(1325) << std::endl;
}