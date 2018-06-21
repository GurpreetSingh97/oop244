// TODO: add file header comments here
//Name:Gurpreet Singh, Id: 145795167, date: 6 Oct

#include<iostream>
#include <cstring>
// TODO: add your headers here
#include "Passenger.h"
using namespace std;

// TODO: continue your namespace here
namespace sict {
	// TODO: implement the default constructor here
	Passenger::Passenger() {
		name = nullptr;
		destination = nullptr;
	}
	
	// TODO: implement the constructor with 2 parameters here
	Passenger::Passenger(const char* pass_name, const char* dest_name) {
		if (pass_name != nullptr&& dest_name != nullptr&& pass_name[0]!='\0'&& dest_name[0]!='\0') {
			int pass_size = strlen(pass_name);
			name = new char[pass_size];
			strcpy(name,pass_name);


			int dest_size = strlen(dest_name);
			destination = new char[dest_size];
			strcpy(destination,dest_name);


		}
		else {
			name = nullptr;
			destination = nullptr;

		}
	}
	
	// TODO: implement isEmpty query here
	bool Passenger::isEmpty() {
		if (name == nullptr && destination == nullptr) {
			return true;
		}
		else {
			return false;
		}
	}
	
	// TODO: implement display query here
	
	void Passenger::display() {
		if (isEmpty() == false) {
			cout << name << " - " << destination << endl;
		}
		else {
			cout << "No passenger!" << endl;
		}
	}

}
