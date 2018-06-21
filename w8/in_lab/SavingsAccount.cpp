// OOP244 Workshop 8: Virtual Functions and Abstract Base Classes
// File: SavingsAccount.cpp
// Version: 2.0
// Date: 2017/12/11
// Author: Chris Szalwinski, based on previous work by Heidar Davoudi
// Description:
// This file implements the SavingsAccount class
///////////////////////////////////////////////////
#include <iostream>
#include <iomanip>
#include "SavingsAccount.h"
using namespace std;
namespace sict {
	SavingsAccount::SavingsAccount(): Account() {
		interest_rate = 0;
	}

	SavingsAccount::SavingsAccount(double ini_balance, double inter_rate): Account(ini_balance) {
		if (inter_rate > 0) {
			interest_rate = inter_rate;
		}
		else {
			interest_rate = 0;
		}
	}
	//MIGHT BE FALSE
	void SavingsAccount::monthEnd() {
		
		double bal = balance();
		double interest = bal * interest_rate;
		credit(interest);
	}

	void SavingsAccount::display(std::ostream& ostr) const {
		
			ostr << fixed;
			ostr << setprecision(2) << "Account type: Savings" << endl;
			ostr << setprecision(2) << "Balance: $" << balance() << endl;
			ostr << setprecision(2) << "Interest Rate (%): " << interest_rate * 100 << endl;
		
	}
	


}
