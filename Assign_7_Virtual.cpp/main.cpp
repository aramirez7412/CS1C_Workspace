/*******************************************************************************
 * NAME     : Anthony Ramirez
 * CLASS    : CS1C
 * SECTION  : T/TH 6:00-8:50
 * DATE     : 9/23/14
 * ASSIGN #7: Virtual Methods
 *******************************************************************************/

#include "Header.h"
#include "StudentClass.h"
#include "CS1CStudent.h"
#include "MathStudent.h"

/******************************************************************************
 * MathStudent
 * ----------------------------------------------------------------------------
 * This program contains three class. Student, CS1C Student, and Math Student
 * -----------------------------------------------------------------------------
 * INPUT:
 * 	NONE
 *
 * OUTPUT:
 *
 *  Content of Object is output
 *******************************************************************************/

void PrintStudent(const Student& someStudent);


int main()
{

	//D E C L A R A T I O N S
	MathStudent mathStudent("123 Hello",
							"Irvine",
							"Ca",
							92612,
							"Bob",
							"Sophomore",
							"909-456-7896",
							12345,
							20,
							3.90,
							'M',
							02,
							19,
							2014);
	Student     student("Charles",
						"Freshman",
						"909-369-9874",
						96325,
						18,
						0.0,
						'M');
	CS1CStudent csStudent("Jack",
						  "Sophomore",
			              "909-899-9874",
			              956945,
			              19,
			              2.0,
			              'M',
			              100,
			              'y',
			              05,
			              16,
			              2015);
	/***************************************************************************
	 * FUNCTION OutputHeader
	 * -------------------------------------------------------------------------
	 * This function will output the header
	 ***************************************************************************/
	OutputHeader(cout, "Anthony Ramirez", "CS1C",
				 "6:00-8:50 PM", 7, "Virtual Method", 'A');
	cout << endl << "Math Student" << endl << "------------" << endl;
	PrintStudent(mathStudent);

	cout << endl << "CS1C Student" << endl << "------------" << endl;
	PrintStudent(csStudent);

	cout << endl << "Student" << endl << "------------" << endl;
	PrintStudent(student);

	return 0;
}

void PrintStudent(const Student& someStudent)
{
	cout << "Using non-member print function!" << endl;
	someStudent.PrintAll();
}

