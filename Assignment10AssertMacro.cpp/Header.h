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

#include <iostream>
#include <iomanip>

using namespace std;


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





#endif /* HEADER_H_ */
