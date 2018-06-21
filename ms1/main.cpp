// Final Project Milestone 1
// Student defined values tester
// Version 2.0
// Date	2017-10-11
// Author	Chris Szalwinski, Fardad Soleimanloo
// Description
// This program test the student implementation of the Date class
// for submission.
//
// For you final test before submission:
//      DO NOT MODIFY THIS FILE IN ANY WAY
//
//
// Revision History
// -----------------------------------------------------------
// Name               Date                 Reason
// CS                 2017-10-11           Fall semester upgrade
/////////////////////////////////////////////////////////////////
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include "Date.h"

using namespace std;
using namespace sict;

bool equalDates(const char* A, const char* B);
bool yes();

int main() {
	ifstream in("input.txt");
	Date d;
	in >> d;

	cout << "What was read:" << endl;
	cout << d << endl;

  return 0;
}

// checks equality of dates A and B
//
bool equalDates(const char* A, const char* B) {
  unsigned int i;
  for (i = 0; i < sizeof(Date); i++) {
    if (A[i] != B[i]) i = sizeof(Date);
  }
  return sizeof(Date) == i;
}

// accepts yes from console
//
bool yes() {
  char ch;
  ch = cin.get();
  cin.ignore(1000, '\n');
  return ch == 'y' || ch == 'Y';
}

