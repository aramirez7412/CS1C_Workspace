

#ifndef EXCEPTIONCLASSESLINKEDLIST_H_
#define EXCEPTIONCLASSESLINKEDLIST_H_

#include <string>
#include <iostream>
using namespace std;

class Full
{
public:
	//C O N S T R U C T O R
	/**********************************************************************
	 * Full (default constructor)
	 * --------------------------------------------------------------------
	 * This constructor outputs that the list is full
	 **********************************************************************/
	Full();


	//D E S T R U C T O R
	/**************************************************************************
	 * ~Full (destructor)
	 * ------------------------------------------------------------------------
	 * Destructor of the Full class
	 **************************************************************************/
	~Full();
};




/**************************************************************************
 * Empty
 * ------------------------------------------------------------------------
 * This class was defined for the List Class
 **************************************************************************/
class Empty
{
public:
	//C O N S T R U C T O R
	Empty();

	//D E S T R U C T O R
	~Empty();

};






#endif /* EXCEPTIONCLASSESLINKEDLIST_H_ */
