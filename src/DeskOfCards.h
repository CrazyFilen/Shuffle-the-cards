#pragma once


class DeskOfCards
{
public:
	DeskOfCards();
  
	void shuffle();
  
	void deal();

private:
	int deck[4][9];
};
