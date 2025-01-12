#include <iostream>

int main()
{

    int number;
    int result = 0;

    std::cin >> number;

    for (int i = 0; i < number; i++) {

        int currentNumber;
        std::cin >> currentNumber;

        if (currentNumber % 2 == 0) {

            result *= 10;
            result += currentNumber;
        }

    }

    std::cout << result;

}