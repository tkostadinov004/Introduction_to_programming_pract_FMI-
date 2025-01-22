#include <iostream>

int main()
{
    //Task1
    int number;
    std::cin >> number;
    if (number % 2)
        std::cout << "Even" << std::endl;
    else
        std::cout << "Odd" << std::endl;
}