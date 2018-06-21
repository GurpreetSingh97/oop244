// TODO: add file header comments here
#include<iostream>
#include <cstring>
// TODO: add your headers here
#include "Passenger.h"
using namespace std;

// TODO: continue your namespace here
namespace sict {
	// TODO: implement the default constructor here
	Passenger::Passenger() {
		cust_name = nullptr;
		cust_destination = nullptr;
		dep_day = 0;
		dep_month = 0;
		dep_year = 0;
	}
	
	// TODO: implement the constructor with 2 parameters here
	Passenger::Passenger(const char* pass_name, const char* dest_name) {
		if (pass_name != nullptr&& dest_name != nullptr&& pass_name[0]!='\0'&& dest_name[0]!='\0') {
			int pass_size = strlen(pass_name);
			cust_name = new char[pass_size];
			strcpy(cust_name,pass_name);


			int dest_size = strlen(dest_name);
			cust_destination = new char[dest_size];
			strcpy(cust_destination,dest_name);


			dep_day = 1;
			dep_month = 7;
			dep_year = 2017;
		}
		else {
			cust_name = nullptr;
			cust_destination = nullptr;
			dep_day = 0;
			dep_month = 0;
			dep_year = 0;

		}
	}
	

	Passenger::Passenger(const char* pass_name, const char* dest_name, int year, int month, int day) {
		bool date_validation = false;
		if (year >= 2017 && year <= 2020 && month >=1 && month <=12 && day>=1 && day<=31) {
			date_validation = true;
		}

		if (pass_name!=nullptr && dest_name!=nullptr && pass_name[0]!='\0' &&  dest_name[0]!='\0' && date_validation==true) {
			int pass_size = strlen(pass_name);
			cust_name = new char[pass_size];
			strcpy(cust_name, pass_name);


			int dest_size = strlen(dest_name);
			cust_destination = new char[dest_size];
			strcpy(cust_destination, dest_name);

			dep_year = year;
			dep_month = month;
			dep_day = day;

		}
		else {
			cust_name = nullptr;
			cust_destination = nullptr;
			dep_day = 0;
			dep_month = 0;
			dep_year = 0;
		}
	}



	// TODO: implement isEmpty query here
	bool Passenger::isEmpty() {
		if (cust_name == nullptr && cust_destination == nullptr) {
			return true;
		}
		else {
			return false;
		}
	}
	
	// TODO: implement display query here
	
	void Passenger::display() {
		if (isEmpty() == false) {
			cout << cust_name << " - " << cust_destination << " on " << dep_year << "/0" << dep_month << "/" << dep_day << endl;
		}
		else {
			cout << "No passenger!" << endl;
		}
	}

	// name function defination
	const char* Passenger::name() const {
		if (cust_name != nullptr) {
			return cust_name;
		}
		else {
			return '\0';
		}

	}
	// canTravelWith function defination
	bool Passenger::canTravelWith(const Passenger& obj) const {
		if (strcmp(obj.cust_destination, cust_destination) == 0 && obj.dep_day == dep_day) {
			return true;
		}
		else {
			return false;
		}


	}



}
