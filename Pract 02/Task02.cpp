#include <iostream>

int main()
{

	int a1, b1, a2, b2;

	std::cin >> a1 >> b1 >> a2 >> b2;

	double denominator = (a2 * a2) + (b2 * b2);

	double real = ((a1 * a2) + (b1 * b2)) / denominator;
	double imaginary = ((a2 * b1) - (a1 * b2)) / denominator;

	std::cout << "Real: " << real << std::endl << "Imaginary: " << imaginary << "i";

}