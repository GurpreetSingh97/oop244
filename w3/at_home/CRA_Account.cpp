/*************************
//Name : Gurpreet Singh
//Student number:145795167
//Date : 2 Oct 2017
**************************/

#include <iostream>
#include <string.h>
#include <iomanip>
#include "CRA_Account.h"


using namespace std;

namespace sict {


	

	void CRA_Account::set(const char* familyName, const char* givenName, int sin) {
		
		//sin validation algorithm starts
		bool sin_validation;
		int sum1 = 0; // odd number sum
		int dup_sin = sin;
		dup_sin = dup_sin / 10;
		for (int i = 0; i <= 3; i++) {

			int digit = dup_sin % 10;
			int double_digit = digit * 2;
			if (double_digit >10) {
				sum1 += double_digit % 10;
				double_digit = double_digit / 10;
				sum1 += double_digit;
			}
			else {
				sum1 += double_digit;
			}
			dup_sin = dup_sin / 100;
		}

		int sum2 = 0; // even number sum
		dup_sin = sin / 100;
		for (int j = 0; j <= 3; j++) {
			sum2 += dup_sin % 10;
			dup_sin /= 100;
		}

		int total_sum = sum1 + sum2; // sum of both totals

		int next_ten = (((total_sum / 10) % 10) * 10) + 10; // to find the next highest integer multiple of 10
		int difference = next_ten - total_sum;

		if (difference == sin % 10) {
			sin_validation = true;
		}
		else {
			sin_validation = false;
		}

		//sin validation algorith ends


		if (sin_validation == true && sin > min_sin && sin < max_sin && strcmp(familyName, "\0") != 0 && strcmp(givenName, "\0") != 0) {
			strcpy(family_name, familyName);
			strcpy(given_name, givenName);
			number = sin;
			taxYears = 0;
		}

		else {
			strcpy(family_name, "\0");
			strcpy(given_name, "\0");
			number = 0;
			taxYears = 0;
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
			

			for (int k = 0; k < taxYears; k++) {
				if (balanceDue[k] > 2) {
					cout << "Year (" << taxReturnYear[k] << ") balance owing: " << fixed << setprecision(2)<< balanceDue[k] << endl;
				}
				else if (balanceDue[k] < -2) {
					cout << "Year (" << taxReturnYear[k] << ") refund due: "<< fixed << setprecision(2)  << 0-balanceDue[k] << endl; // subtracting from 0 just to make it +ve for display purpose
				}
				else {
					cout << "Year (" << taxReturnYear[k] << ") No balance owing or refund due!" << endl;
				}
			}


		}
		else {
			cout << "Account object is empty" << endl;
		}
	}


	void CRA_Account::set(int year, double balance) {
		if (number > min_sin && number < max_sin&& taxYears<4) {
			taxReturnYear[taxYears] = year;
			balanceDue[taxYears] = balance;
			taxYears++;
			
		}       
	}

	


}
