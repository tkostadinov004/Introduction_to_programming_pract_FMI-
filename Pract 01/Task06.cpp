#include <iostream>

int main()
{
	long long egn;
	std::cin >> egn;

	int lastDigit = egn % 10;
	int preLastDigit = (egn / 10) % 10;
	int prePreLastDigit = (egn / 100) % 10;

	std::cout << "*******" << prePreLastDigit << preLastDigit << lastDigit;
}