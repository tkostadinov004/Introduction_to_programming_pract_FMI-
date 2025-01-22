#include <iostream>

int main()
{
 //Task8
int num1, num2, num3;
std::cin >> num1 >> num2 >> num3;

if (num1 < num2)
{
    if (num1 < num3)
    {
        if(num2 < num3)
            std::cout << num1 << " " << num2 << " " << num3 << std::endl;
        else
            std::cout << num1 << " " << num3 << " " << num2 << std::endl;
    }
    else
        std::cout << num3 << " " << num1 << " " << num2 << std::endl;
}
else
{
    if (num1 < num3)
        std::cout << num2 << " " << num1 << " " << num3 << std::endl;
    else
        std::cout << num2 << " " << num3 << " " << num1 << std::endl;
}
}