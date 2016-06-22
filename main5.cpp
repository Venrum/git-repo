#include <iostream>
#include <conio.h>

int main()

{
	std::cout << "BMI" << std::endl;
	double bmi;
	double height;
	double weight;

	std::cout << "Enter height in meters: ";
	std::cin >> height;
	std::cout << "Enter weight in kg: ";
	std::cin >> weight;

	bmi = weight / (height*height);

	std::cout << "Your BMI is: " << bmi << std::endl;

	_getch();

	return 0;
}