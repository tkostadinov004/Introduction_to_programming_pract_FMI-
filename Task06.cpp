#include <iostream>

int main()
{
    //Task 6
    int cnt1, cnt2, cnt3;
    std::cin >> cnt1 >> cnt2 >> cnt3;
    double sum = cnt1 * 8.25 + cnt2 * 12 + cnt3 * 10.99;
    bool isBiggerThan60 = 60 < sum;
    double totalSum = sum + isBiggerThan60 * (sum / 10) + 5;
    std::cout << totalSum;
}