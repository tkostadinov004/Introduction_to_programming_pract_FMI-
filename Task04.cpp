#include <iostream>

int main()
{
    //Task 4
    int n1, n2;
    std::cin >> n1 >> n2;
    int n3, n4;
    std::cin >> n3 >> n4;
    bool isIntercept = (n1 < n3 && n3 < n2) || (n1 < n4 && n4 < n2);
    std::cout << isIntercept;
}
