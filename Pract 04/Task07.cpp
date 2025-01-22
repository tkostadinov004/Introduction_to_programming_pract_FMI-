#include <iostream>

int main()
{
    //Task7
    int three_digit_num;
    std::cin >> three_digit_num;
    for (int i = 100; i < three_digit_num; i++)
    {
        int sum = 0, flag = 1;
        int num_copy = i;
        for (int j = 0; j < 3; j++)
        {
            int digit = num_copy % 10;
            num_copy /= 10;
            sum += digit;
        }

        for (int k = 2; k < i; k++)
        {
            if (i % k == 0)
                flag = 0;
        }

        if (sum < 10 && flag)
            std::cout << i << " ";
    }
}