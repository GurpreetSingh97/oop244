#include <iostream>
#include <cstring>
#include "Contact.h"

using namespace std;

namespace sict {
	Contact::Contact() {
		name[0] = '\0';
		number = nullptr;
		no = 0;
	}

	bool Contact::isValid(long long num) const {
		bool answer = false;
		if (num > 9999999999 && num < 1000000000000) {
			int countryCode = num / 10000000000;
			num = num % 10000000000;
			int areaCode = num / 10000000;
			num = num % 10000000;
			int rest_number = num;
			if (countryCode > 0 && countryCode < 99 && areaCode> 99 && areaCode < 1000 && rest_number>999999 && rest_number < 10000000) {
				answer = true;
			}
			else {
				answer = false;
			}
		}
		else {
			answer = false;
		}
		return answer;
	}



	// TODO
	Contact::Contact(const char customerName[], const long long phoneNumber[], int num) {
		if (customerName != nullptr && customerName[0] != '\0') {
			strncpy(name, customerName, 20);
			name[19] = '\0';
		}
		else {
			name[0] = '\0';
		}

		if ( phoneNumber != nullptr && phoneNumber[0] != '\0' && num != 0) {
			

			number = new long long[num];
			int x = 0;
			for (int i = 0; i < num; i++) {
				bool valid = isValid(phoneNumber[i]);
				
				if (valid == true) {
					number[x] = phoneNumber[i];
					x++;
				}
			}
			no = x;
		}

		else {
			
			number = nullptr;
			no = 0;
		}


	}



	Contact::~Contact() {
		delete[] number;
	}

	bool Contact::isEmpty() const {
		bool answer;
		if (name[0] == '\0' && number == nullptr && no == 0) {
			answer = true;
		}
		else {
			answer = false;
		}
		return answer;
	}

	void Contact::display() const {
		if (isEmpty() == true) {
			cout << "Empty contact!" << endl;
		}
		else {
			cout << name << endl;
			for (int i = 0; i < no; i++) {
				long long duplicate = number[i];
				int country_code = duplicate / 10000000000;
				duplicate = duplicate % 10000000000;
				int area_code = duplicate / 10000000;
				duplicate = duplicate % 10000000;
				int rest_number1 = duplicate / 10000;
				duplicate = duplicate % 10000;
				int rest_number2 = duplicate;

				if (rest_number2<10) {
					cout << "(+" << country_code << ") " << area_code << " " << rest_number1 << "-000" << rest_number2 << endl;
				}
				else {
					cout << "(+" << country_code << ") " << area_code << " " << rest_number1 << "-" << rest_number2 << endl;
				}
			}
		}

	}



}