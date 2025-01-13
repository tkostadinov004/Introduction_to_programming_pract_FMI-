#include <iostream>

int main()
{

    unsigned int hour, minutes;

    std::cin >> hour >> minutes;

    if (minutes < 45) {
        minutes += 15;
    }
    else {
        if (hour == 23) {
            hour = 0;
        }
        else {
            hour++;
        }

        minutes -= 45;
    }

    if (hour >= 0 && hour <= 9) {
        std::cout << "0" << hour << ":";
        minutes >= 0 && minutes <= 9 ? std::cout << "0" << minutes : std::cout << minutes;
    }
    else {
        std::cout << hour << ":";
        minutes >= 0 && minutes <= 9 ? std::cout << "0" << minutes : std::cout << minutes;
    }

}
