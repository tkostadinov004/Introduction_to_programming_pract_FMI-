#include <iostream>

int main()
{
 //Task5
int n1, n2, n3, n4, n5;
std::cin >> n1 >> n2 >> n3 >> n4 >> n5;

if (n1 <= n2 && n2 >= n3 && n3 <= n4 && n4 >= n5 || n1 >= n2 && n2 <= n3 && n3 >= n4 && n4 <= n5)
    std::cout << "Yes" << std::endl;
else
    std::cout << "No" << std::endl;
}