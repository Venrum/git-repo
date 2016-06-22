#include <iostream>
#include <conio.h>
#include <climits>


int main()

{

	std::cout << "Number of good you can buy" << std::endl;
	double Price, Rubles, Buyings;

	std::cout << "Enter your money: ";
	std::cin >> Rubles;
	std::cout << "Enter price of the goods: ";
	std::cin >> Price;

	Buyings = Rubles / Price;

	std::cout << "You can buy: " << Buyings << " numbers of goods" << std::endl;

	_getch();

	return 0;
}