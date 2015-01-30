/**************************************************************************
 * NAME     : Anthony Ramirez
 * CLASS    : CS1C
 * SECTION  : T/TH 6:00-8:50
 * DATE     : 10/21/14
 * ASSIGN #9: Templates
 **************************************************************************/
#include "Header.h"
#include "List.h"
#include "Node.h"
/**************************************************************************
 *
 * ------------------------------------------------------------------------
 * INPUT
 *
 *
 * OUTPUT
 *
 *
 **************************************************************************/

/***************************************************************************
 * C O N S T A N T S ~ U S E D
 * ------------------------------------------------------------------------
 * CONST
 * CONST
 * CONST
 **************************************************************************/
int main()
{
	List<char>  charList;
	List<int>   intList;
	List<float> floatList;
	List<long>  longList;

/*****************************************
 * Using char List
 *****************************************/

	cout << "**********************************" << endl;
	cout << "* Testing the List Class w/ char *" << endl;
	cout << "**********************************" << endl;
	charList.Enqueue('A');
	charList.Enqueue('B');
	charList.Enqueue('C');
	charList.Enqueue('D');
	charList.Enqueue('E');
	charList.Enqueue('F');
	cout << charList.OutputList();

	charList.Dequeue();
	charList.Dequeue();
	charList.Dequeue();
	charList.Dequeue();
	cout << charList.OutputList();
	charList.Enqueue('g');
	charList.Enqueue('h');
	charList.Enqueue('i');
	charList.Enqueue('j');
	charList.Enqueue('K');

	cout << charList.OutputList();
	charList.Dequeue();
	charList.Dequeue();
	charList.Dequeue();

	cout << charList.OutputList();

/*****************************************
 * Using Int List
 *****************************************/
	cout << endl << endl;
	cout << "*********************************" << endl;
	cout << "* Testing the List Class w/ int *" << endl;
	cout << "*********************************" << endl;
	intList.Enqueue(1);
	intList.Enqueue(2);
	intList.Enqueue(3);
	intList.Enqueue(4);
	intList.Enqueue(5);
	intList.Enqueue(6);
	cout << intList.OutputList();

	intList.Dequeue();
	intList.Dequeue();
	intList.Dequeue();
	intList.Dequeue();
	cout << intList.OutputList();
	intList.Enqueue(7);
	intList.Enqueue(8);
	intList.Enqueue(9);
	intList.Enqueue(10);
	intList.Enqueue(11);

	cout << intList.OutputList();
	intList.Dequeue();
	intList.Dequeue();
	intList.Dequeue();

	cout << intList.OutputList();

/*****************************************
 * Using float List
 *****************************************/
	cout << endl << endl;
	cout << "*********************************" << endl;
	cout << "* Testing the List Class w/ int *" << endl;
	cout << "*********************************" << endl;
	floatList.Enqueue(1.5);
	floatList.Enqueue(1.6);
	floatList.Enqueue(1.7);
	floatList.Enqueue(2.5);
	floatList.Enqueue(2.89);
	floatList.Enqueue(2.456);
	cout << floatList.OutputList();

	floatList.Dequeue();
	floatList.Dequeue();
	floatList.Dequeue();
	floatList.Dequeue();
	cout << floatList.OutputList();
	floatList.Enqueue(11.4);
	floatList.Enqueue(12.4);
	floatList.Enqueue(13.6);
	floatList.Enqueue(17.96);
	floatList.Enqueue(178.6);

	cout << floatList.OutputList();
	floatList.Dequeue();
	floatList.Dequeue();
	floatList.Dequeue();

	cout << floatList.OutputList();



	cout << endl << endl;
	cout << "**********************************" << endl;
	cout << "* Testing the List Class w/ long *" << endl;
	cout << "**********************************" << endl;
	longList.Enqueue(560000);
	longList.Enqueue(789456);
	longList.Enqueue(123456);
	longList.Enqueue(7896325);
	longList.Enqueue(784142);
	longList.Enqueue(369356);
	cout << longList.OutputList();

	longList.Dequeue();
	longList.Dequeue();
	longList.Dequeue();
	longList.Dequeue();
	cout << longList.OutputList();
	longList.Enqueue(78965);
	longList.Enqueue(56321);
	longList.Enqueue(987654);
	longList.Enqueue(654321);
	longList.Enqueue(84785);

	cout << longList.OutputList();
	longList.Dequeue();
	longList.Dequeue();
	longList.Dequeue();

	cout << longList.OutputList();


cout << endl << endl;
cout << "*****Checking multiple methods of the List Class*****" << endl
     << endl;

cout << endl << endl;
cout << "***************************" << endl;
cout << "* Checking with char List *" << endl;
cout << "***************************" << endl << endl;

	charList.Enqueue('C');
	charList.Enqueue('o');
	charList.Enqueue('p');
	charList.Enqueue('e');
	charList.Enqueue('w');


	if(charList.isFull())
	{
		cout << endl << "(isFull() method) Checking isFull method for charList"
		     << endl;
	}
	else
	{
		cout << endl << "List is not full" << endl;
	}

	if(charList.isEmpty())
	{
		cout << "It is empty";
	}
	else
	{
		cout << endl <<  "List is not empty" << endl;
	}

	cout << endl << "Testing clear method" <<  endl;
	cout << "Clearing char list..." << endl;
	charList.ClearList();


	if(charList.isEmpty())
	{
		cout << "It is empty";
	}
	else
	{
		cout << endl <<  "List is not empty" << endl;
	}

	if(charList.isFull())
	{
		cout << endl << "Checking isFull method for charList" << endl;
	}
	else
	{
		cout << endl << "List is not full" << endl;
	}



	if(charList.isEmpty())
	{
		cout << "Checking isEmpty method for charList" << endl;
	}



	cout << endl << endl;
	cout << "**************************" << endl;
	cout << "* Checking with int List *" << endl;
	cout << "**************************" << endl << endl;


	intList.Enqueue(10);
	intList.Enqueue(11);
	intList.Enqueue(12);
	intList.Enqueue(13);
	intList.Enqueue(14);




	if(intList.isFull())
	{
		cout << endl << "Checking isFull method for charList" << endl;
	}
	else
	{
		cout << endl << "List is not full" << endl;
	}

	if(intList.isEmpty())
	{
		cout << "It is empty";
	}
	else
	{
		cout << endl <<  "List is not empty" << endl;
	}


	cout << endl << "*****Testing clear method*****" <<  endl;
	cout << "Clearing integer list..." << endl;
	intList.ClearList();

	if(intList.isFull())
	{
		cout << endl << "Checking isFull method for charList" << endl;
	}
	else
	{
		cout << endl << "List is not full" << endl;
	}

	if(intList.isEmpty())
	{
		cout << "It is empty";
	}
	else
	{
		cout << endl <<  "List is not empty" << endl;
	}


	cout << endl << endl;

	intList.Enqueue(1);
	if(!intList.isEmpty())
	{
		cout << "Returning the front of the integer list: " << intList.Front();
	}
	else
	{
		cout << "The list is empty, there is no front.";
	}

	/**********************************************************************
	 * The following segment of code checks the isEmpty and isFull method
	 * with all of the list
	 **********************************************************************/

//	cout << endl << endl;
//	cout << "****************************" << endl;
//	cout << "* Checking with float List *" << endl;
//	cout << "****************************" << endl << endl;
//	floatList.Enqueue(10.00);
//	floatList.Enqueue(11.25);
//	floatList.Enqueue(12.78);
//	floatList.Enqueue(13.15);
//	floatList.Enqueue(14.78);
//
//	if(floatList.isFull())
//	{
//		cout << endl << "Checking isFull method for charList" << endl;
//	}
//	else
//	{
//		cout << endl << "List is not full" << endl;
//	}
//
//	if(floatList.isEmpty())
//	{
//		cout << "It is empty";
//	}
//	else
//	{
//		cout << endl <<  "List is not empty" << endl;
//	}
//
//	cout << endl << "*****Testing clear method*****" <<  endl;
//	cout << "Clearing float list..." << endl;
//	floatList.ClearList();
//
//	if(floatList.isFull())
//	{
//		cout << endl << "Checking isFull method for charList" << endl;
//	}
//	else
//	{
//		cout << endl << "List is not full" << endl;
//	}
//
//	if(floatList.isEmpty())
//	{
//		cout << "It is empty";
//	}
//	else
//	{
//		cout << endl <<  "List is not empty" << endl;
//	}
//
//	cout << endl << endl;
//	cout << "**************************" << endl;
//	cout << "* Checking with long List*" << endl;
//	cout << "**************************" << endl << endl;
//
//	longList.Enqueue(10.00);
//	longList.Enqueue(11.25);
//	longList.Enqueue(12.78);
//	longList.Enqueue(13.15);
//	longList.Enqueue(14.78);
//
//	if(floatList.isFull())
//	{
//		cout << endl << "Checking isFull method for charList" << endl;
//	}
//	else
//	{
//		cout << endl << "List is not full" << endl;
//	}
//
//	if(longList.isEmpty())
//	{
//		cout << "It is empty";
//	}
//	else
//	{
//		cout << endl <<  "List is not empty" << endl;
//	}
//
//	cout << endl << "*****Testing clear method*****" <<  endl;
//	cout << "Clearing long list..." << endl;
//	longList.ClearList();
//
//	if(longList.isFull())
//	{
//		cout << endl << "**Checking isFull method for charList" << endl;
//	}
//	else
//	{
//		cout << endl << "**List is not full" << endl;
//	}
//
//	if(longList.isEmpty())
//	{
//		cout << "**It is empty";
//	}
//	else
//	{
//		cout << endl <<  "**List is not empty" << endl;
//	}
//	//Testing Full and IsEmpty methods



	return 0;
}
