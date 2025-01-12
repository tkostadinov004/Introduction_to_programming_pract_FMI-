#include <iostream>

int main()
{

	unsigned long long number;

	std::cin >> number;

	int count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0, count7 = 0, count8 = 0, count9 = 0;

	while (number > 0) {

		int lastDigit = number % 10;

		switch (lastDigit) {

		case 0: count0++; break;
		case 1: count1++; break;
		case 2: count2++; break;
		case 3: count3++; break;
		case 4: count4++; break;
		case 5: count5++; break;
		case 6: count6++; break;
		case 7: count7++; break;
		case 8: count8++; break;
		case 9: count9++; break;

		}

		number /= 10;

	}

	int maxCount = count0;
	int mostFrequentDigit = 0;

	if (count1 >= maxCount) { maxCount = count1; mostFrequentDigit = 1; }
	if (count2 >= maxCount) { maxCount = count2; mostFrequentDigit = 2; }
	if (count3 >= maxCount) { maxCount = count3; mostFrequentDigit = 3; }
	if (count4 >= maxCount) { maxCount = count4; mostFrequentDigit = 4; }
	if (count5 >= maxCount) { maxCount = count5; mostFrequentDigit = 5; }
	if (count6 >= maxCount) { maxCount = count6; mostFrequentDigit = 6; }
	if (count7 >= maxCount) { maxCount = count7; mostFrequentDigit = 7; }
	if (count8 >= maxCount) { maxCount = count8; mostFrequentDigit = 8; }
	if (count9 >= maxCount) { maxCount = count9; mostFrequentDigit = 9; }

	std::cout << "Most frequent digit: " << mostFrequentDigit;

}