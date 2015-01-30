/*******************************************************************************
 * NAME     : Anthony Ramirez
 * CLASS    : CS1C
 * SECTION  : T/TH 6:00-8:50
 * DATE     : 10/14/14
 * ASSIGN #8: Friends and Operator Overloading
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
void CheckIDFunction(const Student& CS1CStu, const Student& MathStu);
void PrintStudent(const Student& someStudent);

void CheckIdCS1C(const CS1CStudent& student1, const CS1CStudent& student2);

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
			              12344,
			              19,
			              2.0,
			              'M',
			              100,
			              'y',
			              05,
			              16,
			              2015);
	CS1CStudent csStudent2("Jack",
							  "Sophomore",
				              "909-899-9874",
				              12345,
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

	cout << "**Friend Function check!**" << endl;
	CheckIDFunction(csStudent, mathStudent);

	cout << "Changing both the ID's to 1234..." << endl;

	csStudent.SetId(1234);
	mathStudent.SetId(1234);

	CheckIDFunction(csStudent, mathStudent);


	cout << endl << "**Comparison Operator Check! ==**" << endl;
	CheckIdCS1C(csStudent, csStudent2);

	cout << "Changing both the ID's to 54321...";

	csStudent.SetId(54321);
	csStudent2.SetId(54321);

	CheckIdCS1C(csStudent, csStudent);

	cout << endl << "**Checking AddToAge Method**" << endl;

	cout << "Adding 5 to age..." << endl;
	cout << "current Age is " << csStudent.GetAge();
	csStudent.AddToAge(5);
	cout << "New total Age: " << csStudent.GetAge();


	cout << endl << endl << "**Checking Overloaded Plus Sign + **";
	cout << endl << "CS1C age: " << csStudent.GetAge();
	cout << endl << "Adding 10...csStudent = csStudent + 10..." << endl;
	csStudent = csStudent +10;
	cout << "New Age: " << csStudent.GetAge();


	return 0;
}

void PrintStudent(const Student& someStudent)
{
	cout << "Using non-member print function!" << endl;
	someStudent.PrintAll();
}

