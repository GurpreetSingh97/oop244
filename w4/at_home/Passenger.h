// TODO: add file header comments here

// TODO: add header file guard here
#ifndef SICT_PASSENGER_H
#define SICT_PASSENGER_H


// TODO: declare your namespace here
namespace sict{
	// TODO: define the Passenger class here
	class Passenger {
		char* cust_name;		//customer_name
		char* cust_destination;  //customer_destination

		int dep_year;	//departure_date
		int dep_month;
		int dep_day;



	public:
		Passenger();
		Passenger(const char* pass_name, const char* dest_name);
		Passenger(const char* pass_name, const char* dest_name, int year, int month, int day);
		
		bool isEmpty();
		void display();

		const char* name() const;
		bool canTravelWith(const Passenger&) const;
	};



}
#endif // !SICT_PASSENGER_H