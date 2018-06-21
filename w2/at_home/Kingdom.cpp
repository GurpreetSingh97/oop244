/***********************************************************
// OOP244 Workshop 2: Dynamic Memory
// File Kingdom.cpp
// Version 1.0
// Date:22 Sept
// Author:Gurpreet Singh
// Description:In this file we are defining the display function and its overload function in the namespace sict.
// 
//
//
// Revision History
///////////////////////////////////////////////////////////
// Name:Gurpreet Singh     Date:22 Sept    Reason
// 
///////////////////////////////////////////////////////////
***********************************************************/

#include<iostream>
// TODO: include the necessary headers
#include "Kingdom.h"
using namespace std;

// TODO: the sict namespace
namespace sict {
	// TODO:definition for display(...)

	void display(const Kingdom &obj) {
		cout << obj.m_name << ", population " << obj.m_population << endl;
	}

	void display(const Kingdom obj[], int size) {
		cout << "------------------------------\n";
		cout << "Kingdoms of SICT\n";
		cout << "------------------------------\n";
		int total = 0;
		for (int i = 0; i < size; i++) {
			cout << i + 1 << ". " << obj[i].m_name << ", population " << obj[i].m_population << endl;
			total += obj[i].m_population;
		}
		cout << "------------------------------\n";
		cout << "Total population of SICT: " << total << endl;
		cout << "------------------------------\n";
	}


	 
}