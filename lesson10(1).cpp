#include <iostream>
#include <conio.h>


using namespace std;

int n, m;

bool input()
{
	cout << "Enter two numbers to search for combinations from n to m: ";
	if (!(cin >> n >> m))
	{
		return false;
	}
	else if (n < 0 || m < 0)
	{
		return false;
	}
	else return true;
}

double factorial(int l)
{
	double result = 1;
	for (int i = 1; i <= l; i++)
	{
		result *= i;
	}

	return result;
}

double soch()
{

	double result;
	double numerator = factorial(n);
	double denominator = (factorial(n - m) * factorial(m));
	result = numerator / denominator;
	return result;
}

void print(double s)
{
	cout << "S from " << n << " to " << m << " is: "<< soch << endl;
}
int main()
{
	while(!input()) 
		system("cls");

	double s = soch();

	print(s);

	_getch();
	return 0;
}