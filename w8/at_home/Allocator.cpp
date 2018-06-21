// OOP244 Workshop 8: Virtual Functions and Abstract Base Classes
// File: Allocator.cpp
// Version: 2.0
// Date: 2017/12/11
// Author: Chris Szalwinski, based on previous work by Heidar Davoudi
// Description:
// This file allocates an Account object in dynamic memory
///////////////////////////////////////////////////
#include "SavingsAccount.h" 
#include "ChequingAccount.h"

namespace sict {

	// define interest rate
	//
	const double account_rates = 0.05;
	const double interest_rate = 0.05;
	const double transaction_fee = 0.50;
	const double monthly_fee = 2.00;

	// TODO: Allocator function
	//
	iAccount* CreateAccount(const char* acc_name, double ini_bal) {
		Account* acc = nullptr;
		if (acc_name[0] == 'S') {	
			acc = new SavingsAccount(ini_bal, account_rates);

		}
		else if (acc_name[0] == 'C') {
			acc = new ChequingAccount(ini_bal, transaction_fee, monthly_fee);

		}
		else {
			acc = nullptr;
		}
		return acc;
	}






}
