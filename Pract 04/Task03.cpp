#include <iostream>

int main()
{
    //Task3
    long long int binary_num, bit;
    int decimal_num = 0;
    std::cin >> binary_num;
    for (int i = 0; binary_num; i++)
    {
        bit = binary_num % 10;
        binary_num /= 10;

        if (bit)
        {
            int to_add = 1;
            if (i == 0)
                decimal_num += 1;
            else
            {
                for (int j = 0; j < i; j++)
                {
                    to_add *= 2;
                }
                decimal_num += to_add;
            }
        }
    }
    std::cout << decimal_num;
}