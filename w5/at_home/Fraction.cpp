// TODO: insert header files
#include <iostream>
#include "Fraction.h"

using namespace std;
// TODO: continue the namespace
namespace sict {

	// TODO: implement the default constructor
	Fraction::Fraction() {
		numerator = 0;
		denominator = 1;
	}

	// TODO: implement the two-argument constructor
	Fraction::Fraction(int num,int den) {
		if(num>0 && den>0){
			numerator = num;
			denominator = den;
			reduce();
			
		
		}
		else {
			numerator = 0;
			denominator = 1;
		}
	}

	// TODO: implement the max query
	int Fraction::max() const {
		int greater;
		if (numerator > denominator) {
			greater = numerator;
		}
		else {
			greater = denominator;
		}
		return greater;
	}

	// TODO: implement the min query
	int Fraction::min() const {
		int smaller;
		if (numerator < denominator) {
			smaller = numerator;
		}
		else {
			smaller = denominator;
		}
		return smaller;
	}

	// gcd returns the greatest common divisor of num and denom
	//
	int Fraction::gcd() const {
		int mn = min();  // min of numerator and denominator
		int mx = max();  // max of numerator and denominator
		int g_c_d = 1;
		bool found = false;

		for (int x = mn; !found && x > 0; --x) { // from mn decrement until divisor found
			if (mx % x == 0 && mn % x == 0) {
				found = true;
				g_c_d = x;
			}
		}
		return g_c_d;
	}

	// TODO: implement the reduce modifier
	void Fraction::reduce() {
		int divisor = gcd();
		numerator = numerator / divisor;
		denominator = denominator / divisor;
	}

	// TODO: implement the display query
	void Fraction::display() const {
		if (numerator > 0 && denominator > 0 && denominator != 1) {
			cout << numerator << "/" << denominator;
		}
		else if (numerator > 0 && denominator > 0 && denominator == 1) {
			cout << numerator;
		}
		else {
			cout << "no fraction stored";
		}
	}

	// TODO: implement the isEmpty query
	bool Fraction::isEmpty() const {
		bool answer;
		if (numerator == 0 && denominator == 1) {
			answer = true;
		}
		else {
			answer = false;
		}
		return answer;
	}

	// TODO: implement the + operator
	Fraction Fraction::operator+(const Fraction& rhs) const  {
		Fraction obj;
			if (!isEmpty() && !rhs.isEmpty()) {
			obj.numerator = (numerator*rhs.denominator) + (rhs.numerator*denominator);
			obj.denominator = denominator * rhs.denominator;

		}
		else {
			obj.numerator = 0;
			obj.denominator = 1;
	}
		obj.reduce();
		return obj;

	}

	Fraction Fraction::operator*(const Fraction& rhs) const {
		Fraction obj;
		if (!isEmpty() && !rhs.isEmpty()) {
			obj.numerator = numerator *rhs.numerator;
			obj.denominator = denominator* rhs.denominator;
			obj.reduce();
		}
		if(isEmpty() || rhs.isEmpty()) {
			obj.numerator = 0;
			obj.denominator = 1;
		}

		return obj;
	}

	bool Fraction::operator==(const Fraction& rhs) const {
		
		bool answer;
		if (!isEmpty() && !rhs.isEmpty()&& numerator==rhs.numerator&& denominator == rhs.denominator) {
			answer=true;
		}
		if (rhs.isEmpty() || isEmpty()) {
			answer = false;
		}
		return answer;
	}




	bool Fraction::operator!=(const Fraction& rhs) const {
		
		bool answer;
		if (!isEmpty() && !rhs.isEmpty() && numerator != rhs.numerator&& denominator != rhs.denominator) {
			answer = true;
		}
		if(rhs.isEmpty() || isEmpty()) {
			answer = false;
		}
		return answer;


	}
	Fraction& Fraction::operator+=(const Fraction& rhs) {
		if (!isEmpty() && !rhs.isEmpty()) {
			numerator = (numerator*rhs.denominator) + (rhs.numerator*denominator);
			denominator = denominator* rhs.denominator;
			reduce();
		}
		if (rhs.isEmpty() || isEmpty()) {
			numerator = 0;
			denominator = 1;
		}
		return *this;
	}






}
