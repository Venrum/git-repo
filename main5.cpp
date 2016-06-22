#include <iostream>
#include <conio.h>

int main()
{
	std::cout << "BMI" << std::endl;
	double bmi		= 0;
	double height	= 0;
	double weight	= 0;

	std::cout << "Enter height in meters: ";
	std::cin >> height;
	std::cout << "Enter weight in kg: ";
	std::cin >> weight;

	bmi = weight / (height * height);

	std::cout << "Your BMI is: " << bmi << std::endl;

	_getch();

	return 0;
}