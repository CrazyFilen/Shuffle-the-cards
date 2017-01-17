#include "DeskOfCards.h"

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

DeskOfCards::DeskOfCards()
{
	for (int row = 0; row <= 3; row++)
		for (int column = 0; column <= 8; column++)
			deck[row][column] = 0;

	srand(time(0));
}

void DeskOfCards::shuffle()
{
	int row;
	int column;

	for (int card = 1; card <= 36; card++)
	{
		do
		{
			row = rand() % 4;
			column = rand() % 9;
		} while (deck[row][column] != 0);

		deck[row][column] = card;
	}
}

void DeskOfCards::deal()
{
	static const char *suit[4] = { "Черви", "Пик", "Буби", "Треф" };

	static const char *face[9] = { "Туз", "Шестёрка", "Семёрка", "Восьмёрка", "Девятка", "Десятка", "Валет", "Дама", "Король" };

	for (int card = 1; card <= 36; card++)
	{
		for (int row = 0; row <= 3; row++)
		{
			for (int column = 0; column <= 8; column++)
			{
				if (deck[row][column] == card)
				{
					cout << setw(10) << right << face[column] << " " << setw(8) << left << suit[row] << (card % 2 == 0 ? "\n" : "\t");
				}
			}
		}
	}
}
