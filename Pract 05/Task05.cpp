#include<iostream>

//Task5
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

int main()
{
    //Task5
    std::cout << concat(123, 456) << std::endl;
    std::cout << concat(100, 200) << std::endl;
}