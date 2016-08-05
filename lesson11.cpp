#include <iostream>
#include <conio.h>
#include <random>
#include <time.h>

char name1[30];
char name2[30];
char table[3][3];
bool step;

void instruction()
{
	int l = 0;

	for (int i(0); i < 3; i++)
	{
		for (int j(0); j < 3; j++)
		{
			std::cout << "| " << l + 1 << ' ';
			table[i][j] = char(49 + l);
			l++;
		}
		std::cout << '|';
		std::cout << std::endl;
	}

	std::cout << "Make your turn by pressing number of cell" << std::endl;
	std::cout << "Press any key to play" << std::endl;
}

bool input()
{
	for (int i(0); i < 3; i++)
	{
		for (int j(0); j < 3; j++)
		{
			std::cout << "| " << table[i][j] << ' ';
		}
		std::cout << '|';
		std::cout << std::endl;
	}

	std::cout << std::endl;
	if (step)
	{
		std::cout << name1 << " turn: ";
	}
	else
	{
		std::cout << name2 << " turn: ";
	}

	int n;
	std::cin >> n;

	if (n < 1 || n > 9)
	{
		return false;
	}

	int i, j;

	if (n % 3 == 0)
	{
		i = n / 3 - 1;
		j = 2;
	}
	else
	{
		j = n % 3 - 1;
		i = n / 3;
	}

	if (table[i][j] == 'O' || table[i][j] == 'X')
	{
		return false;
	}

	if (step)
	{
		table[i][j] = 'X';
		step = false;
	}
	else
	{
		table[i][j] = 'O';
		step = true;
	}
	return true;
}
bool win()
{
	for (int i(0); i < 3; i++)
	{
		if ((table[i][0] == table[i][0]) && (table[i][0] == table[i][2]))
		{
			return true;
		}

		else
		if ((table[0][i] == table[1][i]) && (table[0][i] == table[2][i]))
		{
			return true;
		}
		else if ((table[0][0] == table[1][1]) && (table[0][0] == table[2][2]) || (table[0][2] == table[1][1]) && (table[0][2] == table[2][0]))
		{
			return true;
		}
		return false;
	}
}
int main()
{
	instruction();
	system("cls");

	std::cout << "Enter first player name: ";
	std::cin.getline(name1, 30);
	std::cout << "Enter second player name: ";
	std::cin.getline(name2, 30);

	srand(time(NULL));
	if (rand() & 1)
	{
		step = true;
	}
	else
	{
		step = false;
	}
	
	while (!win())
	{
		system("cls");
		if (!input())
		{
			std::cout << "Wrong input, please try again";
			_getch();
		}
	}
	system("cls");

	if (step)
	{
		std::cout << "Winner is " << name2 << std::endl;
	}
	else
	{
		std::cout << "Winner is " << name1 << std::endl;
	}

	_getch();
	return 0;
}