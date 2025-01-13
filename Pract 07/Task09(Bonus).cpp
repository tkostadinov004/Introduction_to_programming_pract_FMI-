#include <iostream>
#include <cmath>

bool isDigitG(int digit, int number)
{
    bool isGuessed = false;

    while (number > 0)
    {
        if (number % 10 == digit) {
            isGuessed = true;
        }
        number /= 10;
    }

    return isGuessed;
}

int getDigit(int number, int position)
{

    for (int i = 0; i < 4 - position; i++)
    {
        number /= 10;
    }

    return number % 10;
}

bool isPositionGuessed(unsigned int digit, unsigned int position, unsigned int number)
{

    unsigned int digitAtPosition = getDigit(number, position);

    return digitAtPosition == digit;
}

int countCows(unsigned int number, unsigned int numberToGuess)
{
    unsigned int count = 0;
    int position = 4;

    while (number > 0)
    {
        int lastDigit = number % 10;

        if (isDigitGuessed(lastDigit, numberToGuess) && !isPositionGuessed(lastDigit, position, numberToGuess))
        {
            count++;
        }

        number /= 10;
        position--;
    }

    return count;
}

int countBulls(unsigned int number, unsigned int numberToGuess)
{
    unsigned int count = 0;
    int position = 4;

    while (number > 0)
    {
        int lastDigit = number % 10;

        if (isDigitGuessed(lastDigit, numberToGuess) && isPositionGuessed(lastDigit, position, numberToGuess))
        {
            count++;
        }

        number /= 10;
        position--;
    }

    return count;
}


int main()
{
    unsigned int numberToGuess = rand() % 9000 + 1000;

    std::cout << "Secret number: " << numberToGuess;

    unsigned int currentNumber;
    std::cin >> currentNumber;

    while (currentNumber != numberToGuess) {

        std::cout << "Entered number: " << currentNumber << std::endl;
        std::cout << countBulls(currentNumber, numberToGuess) << " bulls, " << countCows(currentNumber, numberToGuess) << " cows." << std::endl << "Try again!";

        std::cin >> currentNumber;
    }

    std::cout << "You guessed the number";
}