/**************************************************************************
 * NAME      : Anthony Ramirez
 * CLASS     : CS1C
 * SECTION   : T/TH 6:00-8:50
 * DATE      : 10/28/14
 * ASSIGN #10: Exceptions
 **************************************************************************/
#include "Header.h"
#include "List.h"
#include "Node.h"
/**************************************************************************
 * Exceptions
 * ------------------------------------------------------------------------
 * INPUT
 *	N/A
 *
 * OUTPUT
 * N/A
 *
 **************************************************************************/

int main()
{
	//D E C L A R A T I O N
	List<int> myList;
	OutputHeader(cout,
			     "Anthony Ramirez",
				 "CS1C",
				 "T/TH",
				 10,
				 "Exceptions",
				 'A');

	//This function is located in the Header file because it is a template
	ListOptions(myList);

	cout << endl << endl << "Thank you for using my program!";



	return 0;
}
