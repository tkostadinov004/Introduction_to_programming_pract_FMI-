#include <iostream>

//Task01
int gdc(int a, int b)
{
    if (a == b)
        return a;

    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    return a;
}

int main()
{
    int n1, n2, n3, n4;
    std::cin >> n1 >> n2 >> n3 >> n4;
    std::cout << gdc(n1, gdc(n2, gdc(n3, n4)));
}