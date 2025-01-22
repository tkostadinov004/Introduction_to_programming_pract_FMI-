#include <iostream>

int main()
{
    //Task 5
    int n4digit;
    std::cin >> n4digit;
    int firstHalf = n4digit / 100;
    int secondHalf = n4digit % 100;
    bool isPalindrom = (firstHalf / 10 == secondHalf % 10) && (firstHalf % 10 == secondHalf / 10);
    std::cout << isPalindrom;
}