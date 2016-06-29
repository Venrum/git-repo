#include <iostream>
#include <conio.h>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
	int a;
	int b;
	int c;
	int d;

	do
	{
		system("cls");

		cout << "Enter size of the first array: ";
		cin >> a >> b;
		cout << "Enter size of the second array: ";
		cin >> c >> d;
		if (b != c)
		{
			system("cls");
			cout << "Impossible move";
			_getch();
		}
	} while (b != c);

	int **m1 = new int*[a];
	for (int i(0); i < a; i++)
	{
		m1[i] = new int[b];
	}

	int **m2 = new int*[c];
	for (int i(0); i < c; i++)
	{
		m2[i] = new int[d];
	}

	int **m3 = new int*[a];
	for (int i(0); i < a; i++)
	{
		m3[i] = new int[d];
	}

	system("cls");

	cout << "Enter numbers of the first array " << a << "x" << b << " :\n";

	for (int i(0); i < a; i++)
	{
		for (int j(0); j < b; j++)
		{
			cin >> m1[i][j];
		}
	}

	for (int i(0); i < a; i++)
	{
		for (int j(0); j < d; j++)
		{
			m3[i][j] = 0;
		}
	}

	system("cls");

	cout << "Enter numbers of the second array " << c << "x" << d << " :\n";

	for (int i(0); i < c; i++)
	{
		for (int j(0); j < d; j++)
		{
			cin >> m2[i][j];
		}
	}
	system("cls");

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < d; j++)
		{
			for (int m = 0; m < b; m++)
			{
				m3 += m1[i][m] * m2[m][j];
			}
		}
	}

	for (int i(0), l(0); i < a || l < c;)
	{
		cout << "| ";
		if (i < a)
		{
			for (int j(0); j < b; j++)
			{
				cout << m1[i][j] << " ";
			}

			i++;
		}

		cout << "       ";

		if (l < c)
		{
			for (int j(0); j < d; j++)
			{
				cout << m2[l][j] << " ";
			}

			i++;
		}

		cout << "|";
		cout << endl;
	}

	cout << endl;

	for (int i(0); i < a; i++)
	{
		for (int j(0); j < d; j++)
		{
			cout << m3[i][j] << ' ';
		}
		cout << endl;
	}


	for (int i(0); i < a; i++)
		delete[] m1[i];
	delete [] m1;
	
	for (int i(0); i < c; i++)
		delete[] m2[i];
	delete[] m2;

	for (int i(0); i < d; i++)
		delete[] m3[i];
	delete[] m3;

	_getch();
	return 0;
}