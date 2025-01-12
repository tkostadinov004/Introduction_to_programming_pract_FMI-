#include <iostream>

int main()
{
    //Task3
char symbol;
std::cin >> symbol;

if(symbol >= '0' && symbol <= '9')
    std::cout << "digit" << std::endl;
else if (symbol >= 'A' && symbol <= 'Z')
    std::cout << "upper case" << std::endl;
else if (symbol >= 'a' && symbol <= 'z')
    std::cout << "lower case" << std::endl;
else
    std::cout << "other" << std::endl;
}