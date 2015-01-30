/*
 * HelpOptions.h
 *
 *  Created on: Nov 4, 2014
 *      Author: Anthony
 */

#ifndef HELPOPTIONS_H_
#define HELPOPTIONS_H_
#include <string>
#include <sstream>
#include <ios>
#include <iostream>
using namespace std;


enum SwitchOptions
{
	COMPANY_INFO,
	APP_NAVIGATION,
	PURCHASE_INFO
};


class HelpOptions
{
public:
	HelpOptions(); //Done
	~HelpOptions();//Done


	void WordWrapInput(string newString);
	//A C C E S S O R S
	string GetCompanyInfo()   const; //Done
	string GetAppNavigation() const; //Done
	string GetPurchaseInfo()  const; //Done

	//M U T A T O R S
	void SetCompanyInfo  (string newInfo);  //Done
	void SetAppNavigation(string newInfo);//Done
	void SetPurchaseInfo (string newInfo); //Done
	void SetSwitchMenu();				  //Done


	string GetSwitchMenu();				//Done
	void DriverSwitchMenu();			//Done


private:
	string companyInfo;
	string appNavigation;
	string purchaseInfo;
	string switchMenuText;

};


#endif /* HELPOPTIONS_H_ */
