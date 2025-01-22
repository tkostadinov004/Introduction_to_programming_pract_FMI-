#include <iostream>

int main()
{
    //Task1
    int num;
    std::cin >> num;
    int flag = 0;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            flag = 1;
    }

    if (num == 1)
        std::cout << "Non-prime";
    else if (flag)
        std::cout << "Non-prime";
    else
        std::cout << "Prime";
}