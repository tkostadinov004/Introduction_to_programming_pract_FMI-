#include<iostream>

int concat(int num1, int num2)
{
    int num2_copy = num2;
    while (num2_copy)
    {
        num1 = num1 * 10;
        num2_copy /= 10;
    }

    return num1 + num2;
}

//Task6
int reverse(int num)
{
    int reverse_number = 0;
    while (num)
    {
        if (reverse_number)
            reverse_number = reverse_number * 10 + num % 10;
        else
            reverse_number = num % 10;
        num /= 10;
    }
    return reverse_number;
}

int reverseConcat(int num)
{
    int reversed_number = reverse(num);
    return concat(num, reversed_number);
}

int main()
{
    //Task6
    std::cout << reverseConcat(123) << std::endl;
    std::cout << reverseConcat(100) << std::endl;
}