// OOP244 Workshop 8: Virtual Functions and Abstract Base Classes
// File: Account.cpp
// Version: 2.0
// Date: 2017/12/11
// Author: Chris Szalwinski, based on previous work by Heidar Davoudi
// Description:
// This file implements the Account class
///////////////////////////////////////////////////

#include "Account.h"

namespace sict {
	Account::Account() {
		current_balance = 0;
	}

	Account::Account(double balance){
		if (balance > 0) {
			current_balance = balance;
		}
		else {
			current_balance = 0;
		}
	}

	bool Account::credit(double credited) {
		bool answer;
		if (credited > 0) {
			current_balance += credited;
			answer = true;
		}
		else {
			answer = false;
		}
		return answer;
	}


	bool Account::debit(double debited) {
		bool answer;
		if (debited > 0) {
			current_balance -= debited;
			answer = true;
		}
		else {
			answer = false;
		}
		return answer;
	}

	//protected function
	double Account::balance() const {
		return current_balance;
	}

}