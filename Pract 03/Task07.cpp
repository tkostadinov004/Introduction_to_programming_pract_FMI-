#include <iostream>

int main()
{
 //Task7
int hours, minutes;
std::cin >> hours >> minutes;

minutes += 15;

if (minutes >= 60) {
    minutes -= 60;  
    hours += 1;     
}

if (hours == 24) {
    hours = 0;
}

if (hours < 10)
{
    if (minutes < 10)
        std::cout << "0" << hours << " " << "0" << minutes << std::endl;
    else
        std::cout << "0" << hours << " " << minutes << std::endl;
}
else
{
    if (minutes < 10)
        std::cout << hours << " " << "0" << minutes << std::endl;
    else
        std::cout << hours << " " << minutes << std::endl;
}
}