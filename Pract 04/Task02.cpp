#include <iostream>

int main()
{
    //Task2
    int cnt;
    std::cin >> cnt;
    int number;
    int res = 0;
    for (int i = 0; i < cnt; i++)
    {
        std::cin >> number;

        if (number % 2 == 0)
        {
            if (res == 0)
                res = number;
            else
                res = res * 10 + number;
        }
    }
    std::cout << res;
}