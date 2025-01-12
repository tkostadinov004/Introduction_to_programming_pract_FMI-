#include <iostream>

int main()
{
 //Task9
int day, month, year;
std::cin >> day >> month >> year;
int m, K, J;
K = year % 100;
J = year / 100;

if (month == 1)
    m = 13;

else if (month == 2)
    m = 14;
else
    m = month;

int h = (day + (13*(m+1)/5) + K + K/4 + J/4 - 2*J) % 7;

switch (h)
{
case 0:
    std::cout << "Saturday" << std::endl;
    break;
case 1:
    std::cout << "Sunday" << std::endl;
    break;
case 2:
    std::cout << "Monday" << std::endl;
    break;
case 3:
    std::cout << "Tuesday" << std::endl;
    break;
case 4:
    std::cout << "Wednesday" << std::endl;
    break;
case 5:
    std::cout << "Thursday" << std::endl;
    break;
case 6:
    std::cout << "Friday" << std::endl;
    break;
default:
    std::cout << "Not valid" << std::endl;
    break;
}
}