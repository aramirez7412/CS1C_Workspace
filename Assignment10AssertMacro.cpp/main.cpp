/**************************************************************************
 * NAME      : Anthony Ramirez
 * CLASS     : CS1C
 * SECTION   : T/TH 6:00-8:50
 * DATE      : 10/28/14
 * ASSIGN #10: Assert Macro
 **************************************************************************/

#include "Header.h"
#include <iostream>
#include <cassert>
using namespace std;


int main()
{
	OutputHeader(cout,
				     "Anthony Ramirez",
					 "CS1C",
					 "T/TH",
					 10,
					 "Assert Macro",
					 'A');

	//D E C L A R A T I O N S
	int myInt;


	//I N P U T
	cout << "Please enter an integer greater than 10: ";
	cin  >> myInt;

	//A S S E R T PASS
	assert(myInt > 10);

	cout << "The value of myInt is: " << myInt;

	cout << endl << endl;
	cout << "Please enter another integer greater than 10: ";
	cin  >> myInt;

	//A S S E R T Fail
	assert (myInt >10);

	cout << "The value of the other integer is: ";
	return 0;
}
