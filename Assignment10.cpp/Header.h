/**************************************************************************
 * NAME      : Anthony Ramirez
 * CLASS     : CS1C
 * SECTION   : T/TH 6:00-8:50
 * DATE      : 10/28/14
 * ASSIGN #10: Exceptions
 **************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_


/**************************************************************************
 * 						H E A D E R ~ F I L E
 *************************************************************************/
#include <ios>
#include <sstream>
#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include "ExceptionClassesLinkedList.h"
#include "List.h"
using namespace std;


enum MenuOptions
{
	EXIT,
	ENQUEUE,
	DEQUEUE,
	IS_FULL,
	IS_EMPTY,
	OUTPUT_LIST,
	FRONT
};

void OutputMenu();

/**************************************************************************
 * OutputHeader
 * ------------------------------------------------------------------------
 * This function outputs the header to the console.
 *
 * RETURNS: No returns. Consists of cout statements
 **************************************************************************/
void OutputHeader(ostream&     out,     //OUT - used to determine where to
										//		send
				  const string NAME,    //OUT - Student name
				  const string CLASS,   //OUT - Class name
				  const string SECTION, //OUT - class time
				  const int    LAB_NUM, //OUT - Assignment or Lab number
				  const string LAB_NAME,//OUT - Assignment or Lab name
				  char asType			//CALC - either a for assign or
				  	  	  	  	  	  	//       for lab
				  );



template <typename dataType>

dataType ErrorCheckInput(dataType min,
						 dataType max,
						 string   errorMessage,
						 string   errorMessage2,
						 string   prompt)
{
		//D E C L A R A T I O N
		dataType      userInput;	 //INPUT - input from user
		ostringstream out;	  		 //OUT - used for output
		string        errorMessage3; //OUT - used to notify user of an error
		int           width;		 //OUT - sets width of the output
		bool          proceed;       //CALC - used in do while loop

		do
		{
			//I N I T I A L I Z A T I O N
			proceed = true;

			//Prompts user
			cout << prompt;

			//Will enter if statement if input is not a number
			if(!(cin >> userInput))
			{
				//Clears error state in input buffer
				cin.clear();

				//Outputs error message
				cout << endl << errorMessage << endl;
			}
			//Enters else-if if the input is outside of range
			else if(userInput < min || userInput > max)
			{
				//Will determine size of output size to format error message
				out << "***" << userInput << " is not valid input";
				errorMessage3 = out.str();

				//Clears string stream
				out.str("");

				//Checks lengths of both error messages to decide greater length
				if(errorMessage3.length() > errorMessage2.length())
				{
					//Assigns width to length
					width = errorMessage3.length();
				}
				else
				{
					//Assigns width to length
					width = errorMessage2.length();
				}
				cout << left;
				//outputs error messages to the user
				cout << setw(width) << errorMessage3 << "****" << endl;
				cout << setw(width) << errorMessage2 << "****" << endl;
			}
			else
			{
				proceed = false;
			}
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << endl;
		}while(proceed);

		return userInput;
}



template <class typeName>
void ListOptions(List<typeName>& list)
{
	//D E C L A R A T I O N
	int userChoice;
	int enqueueElement;


	OutputMenu();
	//Error check input
	userChoice = ErrorCheckInput(0,6,"****Please enter a number****",
						"****Please enter a number between 1 and 7",
						"Please enter a menu option: ");
	try
	{
	//Begin While
		while(userChoice != EXIT)
		{

			switch(MenuOptions(userChoice))
			{
			case ENQUEUE:

							cout << "Please enter a number you would "
									"like to add: ";
							cin  >> enqueueElement;

							if(!cin)
							{
								cin.clear();

								throw string("Please enter a number");
							}
							else
							{
								if(list.Size() > list.ListLimit())
								{
									throw Full();
								}
								else
								{
									list.Enqueue(enqueueElement);

								}
							}
			break;
			case DEQUEUE: if(list.isEmpty())
						  throw Empty();

						  list.Dequeue();

			break;
			case IS_FULL: if(list.isFull())
						  {
							cout << "The list is full";
						  }
						  else
						  {
							cout << "The list is not Full";
						  }
			break;

			case IS_EMPTY:  if(list.isEmpty())
						    {
						       cout << "The list is currently empty" << endl;
						    }
							else
							{
							   cout << "The list is not empty" << endl;
							}
			break;

			case OUTPUT_LIST: if(list.isEmpty())
							  throw Empty();

							  cout << list.OutputList();
			break;

			case FRONT:       if(list.isEmpty())
							  throw Empty();

							  cout << list.Front();

			}
			cout << endl;
			OutputMenu();
			userChoice = ErrorCheckInput(0,6,"****Please enter a number****",
										"****Please enter a number between 1 and 7",
										"Please enter a menu option: ");

		}
	}
	catch(Full&)
	{
		cout << "Inside full Catch" << endl;

		ListOptions(list);
		cout << "Lets try that again!" << endl << endl;

	}
	catch(Empty&)
	{
		cout << "\nInside empty catch code block!" << endl;
		cout << " Lets try that again!" << endl << endl;

		ListOptions(list);

	}
	catch(string& s)
	{
		cout << s << endl;
		cout << "Entered catch block!" << endl;
		cout << "Lets try that again!" << endl << endl;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << " Lets try that again!" << endl << endl;


		ListOptions(list);

	}




}

#endif /* HEADER_H_ */
