/*******************************************************************************
 * NAME     : Anthony Ramirez
 * CLASS    : CS1C
 * SECTION  : T/TH 6:00-8:50
 * DATE     : 9/2/14
 * ASSIGN #2: Deck Of Cards
 *******************************************************************************/
#ifndef CARDCLASS_H_
#define CARDCLASS_H_

#include "DeckClass.h"
#include <string>
using namespace std;


/*******************************************************************************
 * See Deck&Card_Implementation .cpp file for further implementation details
 *******************************************************************************/
class Card
{
	public:
	//C O N S T R U C T O R & D E S T R U C T O R
	/***************************************************************************
	 * Card (constructor)
	 * -------------------------------------------------------------------------
	 * This method constructs an instance of the "Card" object
	 ***************************************************************************/
	Card();
	/***************************************************************************
	 * Card (constructor) overloaded
	 * -------------------------------------------------------------------------
	 * This method constructs an instance of the "Card" object and initializes
	 * "suit" and "rank"
	 ***************************************************************************/
	Card(string newSuit, int rank);

	/***************************************************************************
	 * ~Card (destructor)
	 * -------------------------------------------------------------------------
	 * This method destructs an instance of the "Card" object
	 ***************************************************************************/
	~Card();

	//M U T A T O R S
	/***************************************************************************
	 * SetAll
	 * -------------------------------------------------------------------------
	 * This method Sets both the "suit" member and the "rank" member
	 ***************************************************************************/
	void   SetAll(string newSuit, int rank);

	/***************************************************************************
	 * SetSuit
	 * -------------------------------------------------------------------------
	 * This method Sets the "suit" member
	 ***************************************************************************/
	void   SetSuit(string newSuit);

	/***************************************************************************
	 * SetRank
	 * -------------------------------------------------------------------------
	 * This method Sets the "rank" member
	 ***************************************************************************/
	void   SetRank(int newRank);

	//A C C E S S O R S
	/***************************************************************************
	 * PrintCard
	 * -------------------------------------------------------------------------
	 * This method prints the cards members
	 ***************************************************************************/
	void   PrintCard() const;

	/***************************************************************************
	 * GetSuit
	 * -------------------------------------------------------------------------
	 * This method gets the "suit" member of the card object
	 *
	 * RETURNS: string
	 ***************************************************************************/
	string GetSuit()   const;

	/***************************************************************************
	 * GetRank
	 * -------------------------------------------------------------------------
	 * This method gets the "rank" member of the object
	 *
	 * RETURNS: int
	 ***************************************************************************/
	int    GetRank()   const;

	private:
	string suit;
	int    rank;

};



#endif /* CARDCLASS_H_ */