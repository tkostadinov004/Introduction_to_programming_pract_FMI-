#include <iostream>

int main()
{
    //Task2
double num1 , num2;
char symbl;
std::cin >> num1 >> num2 >> symbl;
switch (symbl)
{
    case '+':
        std::cout << (num1 + num2) << std::endl;
        break;
    case '-':
        std::cout << (num1 - num2) << std::endl;
        break;
    case '*':
        std::cout << (num1 * num2) << std::endl;
        break;
    case '/':
        std::cout << (num1 / num2) << std::endl;
        break;
    default:
        std::cout << "Wrong symbol entered!" << std::endl;
        break;
}
}