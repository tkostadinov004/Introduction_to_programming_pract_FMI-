#include <iostream>

int main()
{
    //Task 2
    double a, b, c, d;
    std::cin >> a >> b >> c >> d;
    std::cout << (a * c + b * d) / (c * c + d * d) << " + " << (b * c - a * d) / (c * c + d * d) << "i";
}


