#include <iostream>
#include <conio.h>
#include <cmath>

using std::ios_base;

int main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 2;
	unsigned long long result = 0;
	unsigned long long k = 0;

		for (int k(0); k <= 64; k = (k + 1))
		{
		result = pow (n,k);
		std::cout <<  n << " в " << k << " степени" << " это: " << result << "." << std::endl;
		}
	_getch();
	return 0;
}