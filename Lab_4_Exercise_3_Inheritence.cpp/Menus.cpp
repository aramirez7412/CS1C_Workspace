/*******************************************************************************
 * NAME   : Anthony Ramirez
 * CLASS  : CS1C
 * SECTION: T/TH 6:00-8:50
 * DATE   : 9/4/14
 * LAB #3 : Shapes and Inheritance
 *******************************************************************************/

#include "Header.h"
#include "CylinderType.h"
#include "CircleType.h"

/*******************************************************************************
 * MainMenu
 * -----------------------------------------------------------------------------
 * Outputs the main menu
 * -----------------------------------------------------------------------------
 * POST-CODNDITIONS
 *
 * CylinderType Class must be previously defined
 *
 * cyl: Used to for output and must be previously defined
 *
 * RETURNS none
 *******************************************************************************/
void MainMenu(CylinderType cyl) //OUT - used to output radius
{
	cout << setprecision(3);
	cout << "\nMAIN MENU \n";
	cout <<  "---------" << endl;
	cout << "***Current Radius " << cyl.GetRadius() << "***"<< endl;
	cout << "1 - Circle Operations"   << endl;
	cout << "2 - Cylinder Operations" << endl;
	cout << "3 - Change Radius"		  << endl;
	cout << "0 - Exit Program"		  << endl;
}

/*******************************************************************************
 * CircleMenu
 * -----------------------------------------------------------------------------
 * Outputs the circle menu
 * -----------------------------------------------------------------------------
 * POST-CODNDITIONS
 *
 * CylinderType Class must be previously defined
 *
 * cyl: Used to for output and must be previously defined
 *
 * RETURNS none
 *******************************************************************************/
void CircleMenu(CylinderType cyl) //OUT - used to output radius
{
	cout << setprecision(3);
	cout << "\nCIRCLE MENU \n";
	cout <<  " -----------" << endl;
	cout << "***Current Radius " << cyl.GetRadius() << "***"<< endl;
	cout << "1 - Calculate Area"            << endl;
	cout << "2 - Calculate Circumference"   << endl;
	cout << "3 - Print All"					<< endl;
	cout << "4 - Enter new radius" 		    << endl;
	cout << "5 - Go to Cylinder Operations" << endl;
	cout << "0 - Exit To Main Menu"         << endl;
}

/*******************************************************************************
 * CylinderMenu
 * -----------------------------------------------------------------------------
 * Outputs the cylinder menu
 * -----------------------------------------------------------------------------
 * POST-CODNDITIONS
 *
 * CylinderType Class must be previously defined
 *
 * cyl: Used to for output and must be previously defined
 *
 * RETURNS none
 *******************************************************************************/
void CylinderMenu(CylinderType cyl) //OUT - used to output radius
{
	cout << setprecision(3);
	cout << "\nCYLINDER MENU \n";
	cout <<  "-------------" << endl;
	cout << "***Current Radius " << cyl.GetRadius() << "***" << endl;
	cout << "***Current Height " << cyl.GetHeight() << "***" << endl;
	cout << "1 - Calculate Surface Area"  << endl;
	cout << "2 - Calculate Volume"		  << endl;
	cout << "3 - Print All"			      << endl;
	cout << "4 - Enter new radius"		  << endl;
	cout << "5 - Enter new height"		  << endl;
	cout << "6 - Go to Circle Operations" << endl;
	cout << "0 - Exit To Main Menu"		  << endl;
}
