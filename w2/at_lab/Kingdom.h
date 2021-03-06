/***********************************************************
// OOP244 Workshop 2: Dynamic Memory
// File Kingdom.h
// Version 1.0
// Date:22 September
// Author:Gurpreet Singh
// Description:In this header file we are making a struct Kingdom and declare the prototype of display function in namespace sict.
// 
//
//
// Revision History
///////////////////////////////////////////////////////////
// Name:Gurpreet Singh     Date:22 Sept   Reason
// 
///////////////////////////////////////////////////////////
***********************************************************/

// TODO: header safeguards
#ifndef SICT_KINGDOM_H
#define SICT_KINGDOM_H

// TODO: sict namespace
namespace sict {
	// TODO: define the structure Kingdom in the sict namespace
	struct Kingdom {
		char m_name[32];
		int m_population;
	};
	// TODO: declare the function display(...),
	//         also in the sict namespace
	void display(const Kingdom &obj);
}

#endif
