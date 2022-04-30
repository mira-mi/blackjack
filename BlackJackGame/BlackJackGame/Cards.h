#pragma once
#ifndef _Cards_H
#define _Cards_H
#include <string>


class Card
{
	
public:
	//I remember enums from c# and it was helpful to use in those so it's good to have them in here as well
	enum CardNumber
	{
		ACE = 1,
		TWO = 2,
		THREE = 3,
		FOUR = 4,
		FIVE = 5,
		SIX = 6, 
		SEVEN = 7,
		EIGHT = 8,
		NINE = 9,
		TEN = 10,
		JACK = 11,
		QUEEN = 12,
		KING = 13

	};
	enum Suit
	{
		SPADE = 0,
		HEART,
		CLUB,
		DIAMOND
	};

	Card();

	void setId(const int& anId);
	CardNumber getRank() const;
	Suit getSuit() const;

	std::string toString() const;
	char getSuitChar() const;

private:
	int id;


};
#endif // !_Cards_H
