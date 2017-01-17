#include "DeskOfCards.h"
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
  
	DeskOfCards deskOfCards;
  
	deskOfCards.shuffle();
  
	deskOfCards.deal();

	system("pause");
	return 0;
}
