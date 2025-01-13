#include <iostream>

int main()
{
	int seconds;
	std::cin >> seconds;

	int days = seconds / 86400;
	seconds -= days * 86400;

	int hours = seconds / 3600;
	seconds -= hours * 3600;

	int minutes = seconds / 60;
	seconds -= minutes * 60;

	std::cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds <<" seconds" << std::endl;
}