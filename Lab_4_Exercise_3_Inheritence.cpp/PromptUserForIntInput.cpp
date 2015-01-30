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
int PromptUserForIntInput(string errorMessage,  //OUT - used for out
					   	  string errorMessage2, //OUT - used for out
					   	  string prompt,		//OUT - used to prompt user
					   	  int    min,           //CALC - lower bound
					   	  int    max) 			//CALC - used for out
{
	//Calls upon template method
	return ErrorCheckInput(min, max, errorMessage, errorMessage2, prompt);
}
