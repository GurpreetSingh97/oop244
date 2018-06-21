/*************************
//Name : Gurpreet Singh
//Student number:145795167
//Date : 2 Oct 2017
**************************/

#ifndef SICT_CPR_ACCOUNT_H
#define SICT_CPR_ACCOUNT_H

namespace sict {

	const int max_name_length = 40;
	const int min_sin = 100000000;
	const int max_sin = 999999999;
	const int max_yrs = 4;

	class CRA_Account {
		char family_name[max_name_length + 1];
		char given_name[max_name_length + 1];
		int number;

		int taxReturnYear[max_yrs];
		double balanceDue[max_yrs];
		int taxYears;

	public:
		
		void set(const char* familyName, const char* givenName, int sin);
		bool isEmpty() const;
		void display() const;

		void set(int year, double balance);
		


	};
}

#endif
