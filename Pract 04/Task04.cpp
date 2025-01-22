#include <iostream>

int main()
{
    //Task4
    int n;
    std::cin >> n;
    int modifying_num = n;
    int most_common_num = 0;
    int most_time_occur = 0;

    for (int i = 0; i <= 9; i++)
    {
        int cnt = 0;

        while (modifying_num)
        {
            int digit = modifying_num % 10;
            modifying_num /= 10;

            if (digit == i)
                cnt++;

            if (cnt == most_time_occur)
            {
                if (digit > most_common_num)
                    most_common_num = digit;
            }

            if (cnt > most_time_occur)
            {
                most_time_occur = cnt;
                most_common_num = digit;
            }
        }
        modifying_num = n;
    }
    std::cout << most_common_num;

}