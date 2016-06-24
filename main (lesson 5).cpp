#include <iostream>
#include <conio.h>
#include <cmath>

int main()
{
	const int n = 2;
	unsigned long long result = 0;
	unsigned long long k = 0;

		for (int k(0); k <= 64; k = (k + 1))
		{
		result = pow (n,k);
		std::cout << "The " << n << " in " << k << " degrees is: " << result << "." << std::endl;
		}
	_getch();
	return 0;
}