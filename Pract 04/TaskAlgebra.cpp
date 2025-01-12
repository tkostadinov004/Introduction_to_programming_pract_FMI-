#include <iostream>

int main()
{

    double x1, x2, y1, y2;

    std::cin >> x1 >> x2 >> y1 >> y2;

    if ((x1 == 0 && y1 == 0) || (x2 == 0 && y2 == 0)) {
        std::cout << "Lineary independent";
    }

    if (x2 == 0 && x1 == 0 && y1 != 0 && y2 != 0) {
        std::cout << "Lineary dependent";
    }

    if (y2 == 0 && y1 == 0 && x1 != 0 && x2 != 0) {
        std::cout << "Lineary dependent";
    }

    double lambda = (x1 / x2);

    std::cout << fabs((lambda - (y1 / y2)) < 0.001);

}