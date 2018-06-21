//Name:Gurpreet Singh
//Student number:145795167


#include <iostream>
#include <cstring>
#include "Hero.h"
using namespace std;
namespace sict {

	Hero::Hero() {
		
		name = nullptr;
		health = -1;
		attack_strength = -1;
	}

	Hero::Hero( const char* h_name, int h_health, int h_attack_strenght) {
		
		if (h_name != nullptr && strlen(h_name) < 40 && h_health >0 && h_attack_strenght > 0) {
			name = new char[strlen(h_name )+ 1];
			strcpy(name, h_name);
			health = h_health;
			attack_strength = h_attack_strenght;
		}
		else {
			name = nullptr;
			health = 0;
			attack_strength = 0;
		}
	}

	void Hero::operator-=(int attack) {
		
		if (attack >= 0) {
			health = health - attack;
		}
		if (health < 0) {
			health = 0;
		}
	}

	bool Hero::isAlive() const {
		
		bool answer;
		if (health > 0) {
			answer = true;
		}
		else {
			answer = false;
		}
		return answer;
	}

	bool Hero::isEmpty() const {
		bool answer = false;
		if (name == nullptr && health == -1 && attack_strength == 1) {
			answer = true;
		}
		return answer;
	}

	int Hero::attackStrength() const {
		
		int answer;
		if (name == nullptr || health == -1 || attack_strength == -1) {
			answer = 0;
		}
		else {
			answer = attack_strength;
		}
		return answer;
	}
	
	 std::ostream& operator<<(std::ostream& os, const Hero& hero) {
			 os << hero.name;
		 return os;
	}

	 

	 

	 const Hero& operator*(const Hero& first, const Hero& second) {
		
		 //Ancient Battle! Achilles vs Hector : Winner is Hector in 4 rounds.
		 Hero a = first;
		 Hero b = second;
		 int number = 0;
		 Hero winner;
		 int flag = 0;
		 while (a.isAlive() == true && b.isAlive() == true && number < MAX_ROUND) {
			 a.operator-=(b.attackStrength());
			 b.operator-=(a.attackStrength());
			 number++;
		 }
		 if (a.isAlive() == true|| number == MAX_ROUND) {
			 winner = first;
			 flag = 1;
		 }
		 else {
			 winner = second;
			 
		 }
		 cout << "Ancient Battle! " << first << " vs " <<second << " : Winner is " << winner << " in " <<number << " rounds." <<endl;
		 
		 if (flag == 1) {
			 return first;
		 }
		 else {
			 return second;
		 }
		 
	 }

	
	 //ENDS HERE
}
