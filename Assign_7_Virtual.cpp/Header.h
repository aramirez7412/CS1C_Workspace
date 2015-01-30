/*******************************************************************************
 * NAME     : Anthony Ramirez
 * CLASS    : CS1C
 * SECTION  : T/TH 6:00-8:50
 * DATE     : 9/23/14
 * ASSIGN #7: Virtual Methods
 *******************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_

//P R E ~ P R O C E S S O R ~ D I R E C T I V E S
#include <iostream>
#include <string>
#include <iomanip>
#include <ostream>
#include <limits>
#include <ios>
using namespace std;

//F U N C T I O N ~ D E F I N I T I O N S

/*******************************************************************************
 * FUNCTION OutputHeader
 * -----------------------------------------------------------------------------
 * THis function will output the name header to either the console or a text file
 *
 * RETURNS: none
 *******************************************************************************/
void OutputHeader(ostream&     out,     //OUT - used to determine where to send
				  const string NAME,    //OUT - Student name
				  const string CLASS,   //OUT - Class name
				  const string SECTION, //OUT - class time
				  const int    LAB_NUM, //OUT - Assignment or Lab number
				  const string LAB_NAME,//OUT - Assignment or Lab name
				  char asType			//CALC - either a for assign or l for lab
				  );

#endif /* HEADER_H_ */
