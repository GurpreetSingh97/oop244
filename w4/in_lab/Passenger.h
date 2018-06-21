// TODO: add file header comments here
//Name:Gurpreet Singh, Id: 145795167, date: 6 Oct

// TODO: add header file guard here
#ifndef SICT_PASSENGER_H
#define SICT_PASSENGER_H


// TODO: declare your namespace here
namespace sict{
	// TODO: define the Passenger class here
	class Passenger {
		char* name;
		char* destination;

	public:
		Passenger();
		Passenger(const char* pass_name, const char* dest_name);
		bool isEmpty();
		void display();
	};



}
#endif // !SICT_PASSENGER_H
