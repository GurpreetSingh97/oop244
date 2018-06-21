/*************************
//Name : Gurpreet Singh
//Student number:145795167
//Date : 29 Sept 2017
**************************/

#include <iostream>
#include <string.h>
#include "CRA_Account.h"


using namespace std;

namespace sict {
	void CRA_Account::set(const char* familyName, const char* givenName, int sin) {
		if (sin > min_sin && sin < max_sin) {
			strcpy(family_name,familyName);
			strcpy(given_name, givenName);
			number = sin;
		}
		else {
			strcpy(family_name,"\0");
			strcpy(given_name,"\0");
			number = 0;
		}
	}


	bool CRA_Account::isEmpty() const {
		if (number > min_sin && number < max_sin) {
			return false;
		}
		else {
			return true;
		}
	}


	void CRA_Account::display() const {
		if (isEmpty() == false) {
			cout << "Family Name: " << family_name << endl;
			cout << "Given Name : " << given_name << endl;
			cout << "CRA Account: " << number << endl;
		}
		else {
			cout << "Account object is empty"<< endl;
		}
	}

}
