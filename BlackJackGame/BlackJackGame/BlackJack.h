#pragma once
//#include "stdafx.h" allows multiple traces of compiles, found on Google but it didn't work on this project
#include <string>
class Blackjack
{
public:
    Blackjack();
    void playGame();

	//I remember enums from c# and it was helpful to use in those so it's good to have them in here as well
	//someone on codereviewer showed how to make this part and it was supposed to have it's own header but it glitched a little
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

	

	void setId(const int& anId);
	CardNumber getRank() const;
	Suit getSuit() const;

	std::string toString() const;
	char getSuitChar() const;

	void Shuffle();
	CardNumber getTopCard() const;


private:
    int dhand[4];
    int phand[4];
    int dhandSize;
    int phandSize;
    int dhandSum;
    int phandSum;
    int phit;
    int pstay;
    bool playerDone;
    bool dealerDone;
    void addPlayerCard();
    void addDealerCard();
    void printHand();
    void sumHands();
	int id;
	CardNumber cardSet[52];
	int topCardId;
};

// dhand stands for Dealer Hand
// phand stands for Player Hand
// card limit is reduced down to 4 because I thought 5 was too much and 3 was too little
