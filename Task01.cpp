#include <iostream>

int main()
{
    //Task 1
    int a1, a2, b1, b2;
    std::cin >> a1 >> b1 >> a2 >> b2;
    std::cout << (a1 * a2 - b1 * b2) << " + " << (a1 * b2 + a2 * b1) << "i";

}

