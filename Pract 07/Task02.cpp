#include <iostream>

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

//Task02
int lcm(int a, int b)
{
    return a * b / gdc(a, b);
}

int main()
{
    int n1, n2, n3, n4;
    std::cin >> n1 >> n2 >> n3 >> n4;
    std::cout << lcm(n1, lcm(n2, lcm(n3, n4)));
}