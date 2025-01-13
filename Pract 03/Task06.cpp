#include <iostream>

int main()
{

	int cord1, cord2;

	std::cin >> cord1 >> cord2;

	double radius;

	std::cin >> radius;

	double dxy = sqrt((cord1 * cord1) + (cord2 * cord2));

	if (abs(dxy - radius) < 0.001) {
		std::cout << "On the circle";
	}
	else if (dxy < radius) {
		std::cout << "In the circle";
	}
	else if (dxy > radius) {
		std::cout << "Outside the circle";
	}

}