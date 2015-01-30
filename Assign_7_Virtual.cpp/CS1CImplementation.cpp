/******************************************************************************
 * NAME     : Anthony Ramirez
 * CLASS    : CS1C
 * SECTION  : T/TH 6:00-8:50
 * DATE     : 9/9/14
 * ASSIGN #7: Virtual Methods
 *******************************************************************************/
#include "CS1CStudent.h"
/***********************************
 * CS1CStudent Class Implementation*
 ***********************************/
/***************************************************************************
 * CS1CStudent Constructor
 * -------------------------------------------------------------------------
 * This is the default constructor for the CS1CStudent class and will
 * initialize private members to zero
 *
 * Returns: All private members initialized to zero
 ***************************************************************************/
CS1CStudent::CS1CStudent():Student(),
						   assignmentScore (0),
						   pythonKnowledge ('X')

{
	graduationDate.SetAll(0,0,0);
}

/***************************************************************************
 * CS1C Student Constructor (non-default)
 * -------------------------------------------------------------------------
 * This is the non-default constructor for the student class and will
 * initialize private members to the parameters being passed in
 *
 * Returns: All private members initialized to respective parameter
 ***************************************************************************/
CS1CStudent::CS1CStudent(string 		newName,
						 string 	    newStanding,
						 string 		newNumber,
						 long 		    newId,
						 unsigned short newAge,
						 double 		newGpa,
						 char 		    newGender,
						 long 		    newScore,
						 char 		    pythonKnowledge,
						 int			month,
						 int 			day,
						 int 			year)

						 :Student( newName,
								   newStanding,
								   newNumber,
								   newId,
								   newAge,
								   newGpa,
								   newGender)
{
	SetAllCS1C(newScore, pythonKnowledge);
	SetAllDate(month, day, year);
}


CS1CStudent::~CS1CStudent()
{
	cout << "Virtual Destructor for CS1C called!" << endl;;
}
/*********************
 *  M U T A T O R S  *
 *********************/
/***************************************************************************
 * SetScore
 * -------------------------------------------------------------------------
 * This method will set the -assignmentScore member in the object
 *
 * RETURNS: none
 **************************************************************************/
void CS1CStudent::SetScore(long newScore)
{
	assignmentScore = newScore;
}

/***************************************************************************
 * SetPythonKnowledge
 * -------------------------------------------------------------------------
 * This method will set the -pythonKnowledge variable
 *
 * RETURNS: none
 **************************************************************************/
void CS1CStudent::SetPythonKnowledge(char check)
{
	pythonKnowledge = check;
}

/***************************************************************************
 * SetAllCS1C
 * -------------------------------------------------------------------------
 * This method will set all the private members and the members from the
 * super class
 *
 * RETURNS: none
 **************************************************************************/
void CS1CStudent::SetAllCS1C(long newScore,
							 char check)

{
		SetScore(newScore);
		SetPythonKnowledge(pythonKnowledge);
}

/*********************
 * A C C E S S O R S *
 *********************/

/***************************************************************************
 * SetAllDate
 * -------------------------------------------------------------------------
 * This method will set all private members
 *
 * Returns: All members will be assigned a value
 ***************************************************************************/
void CS1CStudent::SetAllDate(int newMonth,
					         int newDay,
					         int newYear)
{
	graduationDate.SetMonth(newMonth);
	graduationDate.SetDay(newDay);
	graduationDate.SetYear(newYear);
	graduationDate.SetDate();
}
void CS1CStudent::SetNewDay(int day)
{
	graduationDate.SetDay(day);
}

void CS1CStudent::SetNewMonth(int month)
{
	graduationDate.SetMonth(month);
}

void CS1CStudent::SetNewYear(int year)
{
	graduationDate.SetYear(year);
}


/***************************************************************************
 * GetAssignmentScore
 * -------------------------------------------------------------------------
 * This method will get -assignmentScore in the object
 *
 * RETURNS: none
 **************************************************************************/
long CS1CStudent::GetAssignmentScore() const
{
	return assignmentScore;
}

/***************************************************************************
 * GetPythonKnowledge
 * -------------------------------------------------------------------------
 * This method will get -pythonKnowledge in the object
 *
 * RETURNS: bool
 **************************************************************************/
char CS1CStudent::GetPythonKnowledge() const
{
	return pythonKnowledge;
}

/***************************************************************************
 * PropagateCS1C
 * -------------------------------------------------------------------------
 * This method will prompt the user for each input
 *
 * Returns:
 ***************************************************************************/
void CS1CStudent::PropagateCS1C()
{
	long   newScore;
	char   pyKnowledge;

	PropagateStudent();

	cout << "Enter Score: ";
	cin  >> newScore;

	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	SetScore(newScore);

	cout << "Enter python knowledge (Y/N): ";
	cin.get(pyKnowledge);

	SetPythonKnowledge(pyKnowledge);

	cin.ignore(numeric_limits<streamsize>::max(), '\n');

}

/***************************************************************************
 * PrintCS1C
 * -------------------------------------------------------------------------
 * This method will print all privata members0256
 *
 * RETURNS: string
 **************************************************************************/
void CS1CStudent::PrintAll() const
{
	//D E C L A R A T I O N
	const int WIDTH      = 22;
	string pyKnowledge;

	if(GetPythonKnowledge() == 'Y')
	{
		pyKnowledge = "Yes";
	}
	else
	{
		pyKnowledge = "No";
	}
//	cout << "CS1C Student Information" << endl;
//	cout << "------------------------" << endl;
	Student::PrintAll();
	cout << fixed << setprecision(2) << left;
	cout << setw(WIDTH) << "Assignment Score: " << GetAssignmentScore()<< endl;
	cout << setw(WIDTH)	<< "Python Knowledge: " << pyKnowledge         << endl;
	cout << setw(WIDTH) << "Graduation Date: "	<< graduationDate.GetDate()
	     << endl;

};

