//Name:Gurpreet Singh
//Student number:145795167


#include <iostream>
#include <cstring>

#ifndef SICT_HERO_H
#define SICT_HERO_H

#define MAX_ROUND 100

namespace sict {
	class Hero {
		char* name;
		int health;
		int attack_strength;

	public:
		Hero();
		Hero(const char* h_name, int h_health, int h_attack_strenght);
		void operator-=(int attack);
		bool isAlive() const;
		int attackStrength() const;
		bool isEmpty() const;
		

		//helper friend function
		friend std::ostream&  operator<<(std::ostream& os, const Hero& hero);

	};
	
	//helper function
	const Hero& operator*(const Hero& first, const Hero& second);
}
#endif // SICT_HERO_H
