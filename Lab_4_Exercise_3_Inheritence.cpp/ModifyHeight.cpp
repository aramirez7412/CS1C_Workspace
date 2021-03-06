/*******************************************************************************
 * NAME   : Anthony Ramirez
 * CLASS  : CS1C
 * SECTION: T/TH 6:00-8:50
 * DATE   : 9/4/14
 * LAB #3 : Shapes and Inheritance
 *******************************************************************************/

#include "Header.h"

/*******************************************************************************
 * ModifyHeight
 * -----------------------------------------------------------------------------
 * This function will modify the height with the Cylinder class
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *
 * 		Cylinder type must be previously defined
 *
 * POST-CONDITIONS
 * 		Sets the height within the cylinder class
 ******************************************************************************/
void ModifyHeight(CylinderType & cyl)
{
	//D E C L R A T I O N
		double newHeight; //IN - used to set radius

		//Retrieves an error checked double
		newHeight = PromptUserForDoubleInput("***Please enter a NUMBER***",
											 "***Enter a number between 0 and 2000",
								 "Please enter height to continue operations: ",
								 0.0,
								 2000.0);

		//Sets radius to newRadius
		cyl.SetHeight(newHeight);
}
