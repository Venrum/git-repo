#include <iostream>
#include <conio.h>

int main()
{
	std::cout << "Number of good you can buy" << std::endl;
	double	price	= 0;
	double	rubles	= 0;
	double	buyings	= 0;

	std::cout << "Enter your money: ";
	std::cin >> rubles;
	std::cout << "Enter price of the goods: ";
	std::cin >> price;

	buyings = rubles / price;

	std::cout << "You can buy: " << buyings << " numbers of goods" << std::endl;

	_getch();

	return 0;
}