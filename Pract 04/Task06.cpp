#include <iostream>

int main()
{
    //Task6
    int number;
    std::cin >> number;

    if (number == 0 || number == 1)
        std::cout << number;
    else
    {
        int a = 1, b = 1, c = 0;
        for (int i = 0; i < number; i++)
        {
            if (i == 0 || i == 1)
                std::cout << "1" << " ";
            else
            {
                c = a + b;
                a = b;
                b = c;
                std::cout << c << " ";
            }
        }
    }
}