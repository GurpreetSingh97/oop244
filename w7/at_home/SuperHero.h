//Name:Gurpreet Singh
//Student number: 145795167


#include "Hero.h"
#ifndef SUPERHERO_H
#define SUPERHERO_H

using namespace sict;

class SuperHero :  public Hero{
	
	int super_attack;
	int defence;

	public:
		SuperHero();
		SuperHero(const char* p_name, int p_health, int p_attack,int p_super_attack,int p_defence);
		int superattackStrength() const;
		int defend() const;
		
};
//Helper Function
const SuperHero& operator*(const SuperHero& first, const SuperHero& second);
#endif //SUPERHERO
