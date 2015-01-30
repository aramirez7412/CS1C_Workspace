/*******************************************************************************
 * NAME   : Anthony Ramirez
 * CLASS  : CS1C
 * SECTION: T/TH 6:00-8:50
 * DATE   : 9/4/14
 * LAB #3 : Shapes and Inheritance
 *******************************************************************************/

#ifndef CIRCLETYPE_H_
#define CIRCLETYPE_H_

#include <iomanip>
#include <iostream>
using namespace std;


//D E F I N E
#define pi 3.1416 //Defines pi and assigns value 3.1416

class CircleType
{
	//P R I V A T E
	private:

	double radius; //-radius

	//P U B L I C
	public:
	//C O N S T R U C T O R
	/***************************************************************************
	 * CirclType (Constructor)
	 * -------------------------------------------------------------------------
	 * This method will initialize the private member "radius" to 0
	 *
	 * POST-CONDITIONS: radius = r; Initialized to 0
	 ***************************************************************************/
	CircleType(double r = 0);


	//M U T A T O R S
	/***************************************************************************
	 * +SetRadius
	 * -------------------------------------------------------------------------
	 * This method will set the radius of the circle object
	 *
	 * POST-CONDITIONS: if(r>=0 radius = r;
	 * 					otherwise radius is initialized to 0;
	 ***************************************************************************/
	void SetRadius(double r);

	/***************************************************************************
	 * +Area
	 * -------------------------------------------------------------------------
	 * This method will calculate and return the Area with the given radius
	 *
	 * POST-CONDITION: a double is returned holding the Area value
	 ***************************************************************************/
	double Area() const;

	/***************************************************************************
	 * +Circumference
	 * -------------------------------------------------------------------------
	 * This method will calculate and return the Circumference with the given
	 * radius.
	 *
	 * POST-CONDITION: a double is returned holding the Circumference value
	 ***************************************************************************/
	double Circumference() const;


	//A C C E S S O R S
	/***************************************************************************
	 * +GetRadius
	 * -------------------------------------------------------------------------
	 * This method returns the radius
	 *
	 * POST-CONDITION returns the radius
	 ***************************************************************************/
	double GetRadius() const;

	/***************************************************************************
	 * +PrintAll
	 * -------------------------------------------------------------------------
	 * This method prints the Area, Circumference, and radius
	 *
	 * POST-CONDITIONS: The Area, Circumference, and radius will be output
	 * 					to the console
	 ***************************************************************************/
	void PrintAll() const;
};


#endif /* CIRCLETYPE_H_ */
