// OOP244 Workshop 8: Virtual Functions and Abstract Base Classes
// File: ChequingAccount.cpp
// Version: 2.0
// Date: 2017/12/11
// Author: Chris Szalwinski, based on previous work by Heidar Davoudi
// Description:
// This file implements the ChequingAccount class
///////////////////////////////////////////////////


//Name: Gurpreet Singh
//Student Number: 145795167

#include "ChequingAccount.h"

using namespace std;

namespace sict {
	// constructor initializes balance and transaction fee
	//
	ChequingAccount::ChequingAccount(double ini_bal, double p_transaction_fee, double p_month_end_fee): Account(ini_bal) {
		if (p_transaction_fee>0) {
			transaction_fee = p_transaction_fee;
		}
		else {
			transaction_fee = 0.0;
		}

		if (p_month_end_fee>0) {
			month_end_fee = p_month_end_fee;
		}
		else {
			month_end_fee = 0.0;
		}

	}


	// credit (add) an amount to the account balance and charge fee
	bool ChequingAccount::credit(double amount) {
		bool return_answer = false;

		
		if (Account::credit(amount)==true) {
			Account::debit(transaction_fee);
			return_answer = true;
		
		}
		return return_answer;
	}

	// returns bool indicating whether money was credited
	//




	// debit (subtract) an amount from the account balance and charge fee
	// returns bool indicating whether money was debited
	//

	bool ChequingAccount::debit(double amount) {
		bool return_answer = false;
		bool answer = Account::debit(amount);
		if (answer == true) {
			Account::debit(transaction_fee);
			return_answer = true;
		}
		return return_answer;
	}

	// monthEnd debits month end fee
	//
	void ChequingAccount::monthEnd() {
		debit(month_end_fee);
	}


	// display inserts account information into ostream os
	//
	void ChequingAccount::display(std::ostream& obj) const {
		obj << "Account type: Chequing" << endl;
		obj << "Balance: $" << balance() <<endl;
		obj << "Per Transaction Fee: " << transaction_fee <<endl;
		obj << "Monthly Fee: " << month_end_fee <<endl;
	}



}
