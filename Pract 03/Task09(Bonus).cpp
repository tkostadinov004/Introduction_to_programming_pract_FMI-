#include <iostream>

int main()
{

    int day, month, year;

    std::cin >> day >> month >> year;

    int dayOfTheWeek = day + (13 * (month + 1) / 5) + (year % 100) + ((year % 100) / 4) + ((year / 100) / 4) - (2 * (year / 100)) % 7;

    int dayToPrint = ((dayOfTheWeek + 5) % 7) + 1;

    switch (dayToPrint) {
    case 1:
        std::cout << "Monday";
        break;
    case 2:
        std::cout << "Tuesday";
        break;
    case 3:
        std::cout << "Wednesday";
        break;
    case 4:
        std::cout << "Thursday";
        break;
    case 5:
        std::cout << "Friday";
        break;
    case 6:
        std::cout << "Saturday";
        break;
    case 7:
        std::cout << "Sunday";
        break;
    }


}
