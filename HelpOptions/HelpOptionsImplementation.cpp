#include "HelpOptions.h"

/*******************************************************************
 * I M P L E M E N T A T I O N ~F I L E (HelpOptions)
 * -----------------------------------------------------------------
 *******************************************************************/

HelpOptions::HelpOptions()
{
	companyInfo   = "****THis company manufactures and sells bomb detecting robots";
	appNavigation = "****To navigate this app, click a button in the main menu";
	purchaseInfo  = "****To purchase a robot, go to the main menu and select \"purchase robot\"";

	SetSwitchMenu();
}

HelpOptions::~HelpOptions()
{
}


//A C C E S S O R S
string HelpOptions::GetCompanyInfo() const
{
	return companyInfo;
}

string HelpOptions::GetAppNavigation() const
{
	return appNavigation;
}

string HelpOptions::GetPurchaseInfo() const
{
	return purchaseInfo;
}


//M U T A T O R S
void HelpOptions::SetCompanyInfo(string newInfo)
{
	companyInfo = newInfo;
}

void HelpOptions::SetAppNavigation(string newInfo)
{
	appNavigation = newInfo;
}
void HelpOptions::SetPurchaseInfo(string newInfo)
{
	purchaseInfo = newInfo;
}


void HelpOptions::DriverSwitchMenu()
{
	int choice;

	cout << "Hello, Welcome to the Help Options Menu!"          << endl;

	cout << "Please select a choice you need assistance with: " << endl;
	cout << GetSwitchMenu();
	cin  >> choice;
	cout << endl << endl;

	while(choice >= 0)
	{
		switch(choice)

		{
		case COMPANY_INFO:   cout << GetCompanyInfo();
							cout << endl;
		break;

		case APP_NAVIGATION: cout << GetAppNavigation();
		cout << endl;
		break;

		case  PURCHASE_INFO: cout << GetPurchaseInfo();
		cout << endl;
		break;
		}

		cout << "Enter another Help Options choice: ";
		cin  >> choice;
		cout << endl;
	}
}


void HelpOptions::SetSwitchMenu()
{
	ostringstream out;

	out << endl << "Help Options" 	    << endl
		<< "0 - Company Information"    << endl
		<< "1 - Application Navigation" << endl
		<< "2 - Purchase Info"          << endl;

	switchMenuText = out.str();
}

string HelpOptions::GetSwitchMenu()
{
	return switchMenuText;
}


void WordWrapInput(string newString)
{
	const int     SENTENCE_LIMIT = 25;
	int           index;
	string        word;
	string    	  sentence;
	int           wordLength;
	ostringstream out;

	wordLength = newString.length();

	for(index = 0; index < wordLength; index++)
	{
		if(newString[index] != ' ')
		{
			word += newString[index];
		}
		else
		{
			if(word.length()+ sentence.length() < SENTENCE_LIMIT)
			{
				sentence += word;
			}
			else
			{
				out << endl;
				out << sentence;
			}
		}
	}




}
