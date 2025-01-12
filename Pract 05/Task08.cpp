#include<iostream>

//Task8
bool isDivideBy11(int num)
{
    int num_without_hundred = (num / 1000) * 100 + (num % 10) + ((num % 100) / 10) * 10;
    if (num_without_hundred % 11 == 0)
        return true;
    return false;
}

void zad8(int m, int n)
{
    for (int i = m; i < n; i++)
    {
        if (isDivideBy11(i))
            std::cout << i << std::endl;
    }
}

int main()
{
    //Task8
    zad8(1000, 1200);
    zad8(3400, 3500);
}