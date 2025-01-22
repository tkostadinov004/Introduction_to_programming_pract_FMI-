#include <iostream>

//Таск08
int sumOfDigits(unsigned int num)
{
    int sum = 0, digit = 0;
    while (num)
    {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    return sum;
}

int returnFinalNum()
{
    int n, number, max_sum = 0, final_number = 0, curr_sum = 0;
    std::cin >> n;

    while (n)
    {
        std::cin >> number;
        curr_sum = sumOfDigits(number);
        if (max_sum < curr_sum)
        {
            max_sum = curr_sum;
            final_number = number;
        }
        n--;
    }
    return final_number;
}

int main()
{
    //Task08
    std::cout << returnFinalNum();
}