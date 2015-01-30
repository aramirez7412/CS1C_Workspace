/*******************************************************************************
 * NAME   : Anthony Ramirez
 * CLASS  : CS1C
 * SECTION: T/TH 6:00-8:50
 * DATE   : 9/4/14
 * LAB #3 : Shapes and Inheritance
 *******************************************************************************/
#include "Header.h"

/*******************************************************************************
 * PromptUserForInput
 * -----------------------------------------------------------------------------
 * This function will error check user input. In this specific function, it
 * will utilize doubles to check.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *
 * 	prompt		 : Used for output and must be previously defined
 * 	min   		 : Used to set range and must be previously defined
 * 	max   		 : Used to set range and must be previously defined
 * 	errorMessage :   Used for output to notify user of an error and must be
 * 				    previously defined
 * 	errorMessage2:  Used for output to notify user of an error and must be
 * 				    previously defined
 *
 * 	POST-CONDITIONS
 *
 * 	Returns an error checked double
 *******************************************************************************/

double PromptUserForDoubleInput(string errorMessage,  //OUT - used for out
							 string errorMessage2,
							 string prompt,
							 double min,           //CALC - lower bound
							 double max)
{

	/***************************************************************************
	 * TEMPLATE CALL
	 * -------------------------------------------------------------------------
	 * Calls a template
	 ***************************************************************************/
	return ErrorCheckInput(min, max, errorMessage, errorMessage2, prompt);
}
