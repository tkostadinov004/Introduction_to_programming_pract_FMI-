#include <iostream>

int main()
{

	int a1, b1, a2, b2;

	std::cin >> a1 >> b1 >> a2 >> b2;

	int real = (a1 * a2) - (b1 * b2);
	int imaginary = (a1 * b2) + (b1 * a2);

	std::cout << "Real: " << real << std::endl << "Imaginary: " << imaginary << "i";

}