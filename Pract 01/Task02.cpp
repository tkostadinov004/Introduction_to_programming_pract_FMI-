#include <iostream>

int main()
{
	double celsius;
	std::cin >> celsius;

	double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;;
	double kelvin = celsius + 273.15;

	std::cout << "Kelvin: " << kelvin << "\n";
	std::cout << "Fahrenheit: " << fahrenheit;
}