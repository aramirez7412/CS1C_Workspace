/*******************************************************************************
 * NAME     : Anthony Ramirez
 * CLASS    : CS1C
 * SECTION  : T/TH 6:00-8:50
 * DATE     : 10/9/14
 * ASSIGN ##: EXTRA CREDIT
 *******************************************************************************/

#include "Header.h"
/******************************************************************************
 * Extra Credit
 * ----------------------------------------------------------------------------
 * This program read a string from a text file and output the text file in
 * alphabetical order
 * -----------------------------------------------------------------------------
 * INPUT:
 * 	NONE
 *
 * OUTPUT:
 *	ptr[]
 *
 *******************************************************************************/
struct Word
{
	Word * next;
	char * cstringWord;
};
int main(int argc, char * argv[])
{

	//D E C L A R A T I O N S
	ifstream inputFile;
	Word * newWord  = NULL;
	Word * head     = NULL;
	Word * traverse = NULL;
	int    size;
	string word;
	char * tmp;
	char * temp1;
	char * temp2;
	int i, j;
	bool printed = false;

	int count;
	int index = 0;

	//I N I T I A L I Z A T I O N S

	/***************************************************************************
	 * FUNCTION OutputHeader
	 * -------------------------------------------------------------------------
	 * This function will output the header
	 ***************************************************************************/
	OutputHeader(cout, "Anthony Ramirez", "CS1C",
				 "6:00-8:50 PM", 5, "Math Student Class", 'A');

	//Opens the text file
	inputFile.open("Input.txt");

	count     = 0;
	newWord   = new Word;

	//extracts first word
	inputFile >> word;

	/***************************************************************************
	 * I N P U T
	 * -------------------------------------------------------------------------
	 * In the following segment of code, the text file is extracted from the text
	 * file.
	 ***************************************************************************/
	while(word    != "" &&
		  inputFile     &&
		  newWord != NULL)

	{
		size = word.length();

		//allocates memory for a c string
		newWord->cstringWord = new char[size + 1];

		//copies string into cstring
		strcpy(newWord->cstringWord, word.c_str());

		newWord->next = head;
		head          = newWord;

		newWord = new Word;
		count++;

		//extracts again
		inputFile >> word;

	}


	delete newWord;

	char * ptr[count];
	ptr[0] = head->cstringWord;
	traverse = head;



	while(index < count && traverse != NULL)
	{
		ptr[index] = traverse->cstringWord;
		traverse = traverse->next;

		index++;
	}

	traverse = head;
	head = head->next;

	//Insertion sort conducted here
	  for (i = 1; i < count; i++)
	  {
			j = i;

			//creates temporary pointers to ensure comparisons are case
			//insensitive
			temp1 = new char[strlen(ptr[j-1])];
			temp2 = new char[strlen(ptr[j])];


			strcpy(temp1, ptr[j-1]);
			strcpy(temp2, ptr[j]);
			temp1[0] = toupper(temp1[0]);
			temp2[0] = toupper(temp2[0]);
			while (j > 0 && (strcmp(temp1, temp2)>0))
			{
				  tmp        = ptr[j];
				  ptr[j]     = ptr[j - 1];
				  ptr[j - 1] = tmp;
				  j--;

				  delete temp1;
				  delete temp2;
				  if(j>0)
				  {
					  temp1 = new char[strlen(ptr[j-1])];
					  temp2 = new char[strlen(ptr[j])];


					  strcpy(temp1, ptr[j-1]);
					  strcpy(temp2, ptr[j]);
					  temp1[0] = toupper(temp1[0]);
					  temp2[0] = toupper(temp2[0]);
				  }
			}
	  }

	  cout << "Here is the file output in alphabetical order." << endl << endl;
    for(int index = 0; index < count; index++)
	{
		cout << ptr[index] << " ";
	}

    cout << endl << endl;
    char *tempPtr[count];

    int index2 = 0;

    cout << "Here is the file output in alphabetical order" << endl;
    cout << " with no repeated words " << endl << endl;
    cout << endl;
	for(index2 = 0; index2 < count; index2++)
	{

		printed = false;

		temp1 = new char[strlen(ptr[index2])];

		strcpy(temp1, ptr[index2]);

		for(unsigned int index = 0; index < strlen(ptr[index2]); index++)
		{
			temp1[index] = toupper(temp1[index]);
		}


		for(int index = 0; index < index2; index++)
		{
			if(strcmp(temp1, tempPtr[index])== 0)
			{
				printed = true;
			}
		}
		if(!printed)
		{
			cout << ptr[index2] << " ";
		}
		tempPtr[index2] = new char[strlen(ptr[index2])];
		strcpy(tempPtr[index2], ptr[index2]);

		for(unsigned int index = 0; index < strlen(ptr[index2]); index++)
		{
			tempPtr[index2][index] = toupper(tempPtr[index2][index]);
		}



		delete temp1;
	}

	//Performs a deep delete
	while(head != NULL)
	{
		delete traverse->cstringWord;
		delete traverse;
		traverse = head;
		head     = head->next;
	}





	return 0;
}




