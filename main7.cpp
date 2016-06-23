#include <iostream>
#include <conio.h>

int main()
{
	double a = 0;
	double b = 0;

	std::cout << "Enter two numbers: ";
	std::cin >> a >> b;

	double percent = 0;

	percent = (a / b) * 100;

	std::cout << "Number of percent from 1 to 2 is: " << percent << std::endl;

	_getch();

	return 0;
}