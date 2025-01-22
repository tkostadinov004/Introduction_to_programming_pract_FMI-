#include <iostream>

//Task4
bool isPalindrom(int num)
{
    int num_copy = num;
    int reverse_number = 0;
    while (num_copy)
    {
        if (reverse_number)
            reverse_number = reverse_number * 10 + num_copy % 10;
        else
            reverse_number = num_copy % 10;
        num_copy /= 10;
    }

    return num == reverse_number;
}

int main()
{
    //Task4
    std::cout << isPalindrom(123321) << std::endl;
    std::cout << isPalindrom(1001) << std::endl;
    std::cout << isPalindrom(122) << std::endl;
}