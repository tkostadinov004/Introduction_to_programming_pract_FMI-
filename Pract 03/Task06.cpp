#include <iostream>

int main()
{
 //Task6
int coordinate1, coordinate2, radius;
std::cin >> coordinate1 >> coordinate2 >> radius;

if(coordinate1*coordinate1 + coordinate2*coordinate2 < radius*radius)
    std::cout << "Inside the circle" << std::endl;

if (coordinate1 * coordinate1 + coordinate2 * coordinate2 == radius * radius)
    std::cout << "On the circle" << std::endl;

if (coordinate1 * coordinate1 + coordinate2 * coordinate2 > radius * radius)
    std::cout << "Outside the circle" << std::endl;
}