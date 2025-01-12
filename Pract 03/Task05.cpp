#include <iostream>

int main()
{
	int num1, num2, num3, num4, num5;
	bool isChecked = false;

	std::cin >> num1 >> num2 >> num3 >> num4 >> num5;

	if ((num2 >= num1 && num2 >= num3) || (num2 <= num1 && num2 <= num3)) {
		if ((num3 >= num2 && num3 >= num4) || (num3 <= num2 && num3 <= num4)) {
			if ((num4 >= num3 && num4 >= num5) || (num4 <= num3 && num4 <= num5)) {
				std::cout << "yes";
				isChecked = true;
			}
		}
	}

	if (!isChecked) {
		std::cout << "no";
	}

}



