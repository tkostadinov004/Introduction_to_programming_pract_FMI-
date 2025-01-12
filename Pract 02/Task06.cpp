#include <iostream>

int main()
{

	constexpr double CHEESE_BURGER_PRICE = 8.25;
	constexpr double FISH_MENU_PRICE = 12;
	constexpr double CHICKEN_WINGS_PRICE = 10.99;

	int countCheeseBurgers, countFishMenus, countChickenWings;

	std::cin >> countCheeseBurgers >> countFishMenus >> countChickenWings;

	double bill = (CHEESE_BURGER_PRICE * countCheeseBurgers) + (FISH_MENU_PRICE * countFishMenus) + (CHICKEN_WINGS_PRICE * countChickenWings);

	bill = (bill > 60) * 0.1 * bill + 5 + bill;

	std::cout << bill;

}