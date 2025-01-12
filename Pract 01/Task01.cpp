#include <iostream>
#include <cmath>

int main()
{
	double a = 7;
	double b = 10;
	double c = 6.5;

	double halfPerimeter = (a + b + c) / 2;

	double perimeter = a + b + c;
	double area = sqrt(halfPerimeter * (halfPerimeter - a) * (halfPerimeter - b) * (halfPerimeter - c));

	std::cout << "Perimeter: " << perimeter << "\n";
	std::cout << "Area: " << area;
}