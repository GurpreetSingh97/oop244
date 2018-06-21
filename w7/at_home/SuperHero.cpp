//Name:Gurpreet Singh
//Student number:145795167


#include "SuperHero.h"

using namespace std;

SuperHero::SuperHero() {
	super_attack = 0;
	defence = 0;
}

SuperHero::SuperHero(const char* p_name, int p_health, int p_attack, int p_super_attack, int p_defence) : Hero(p_name, p_health, p_attack) {
	if (p_super_attack > 0 && p_defence > 0) {
		super_attack = p_super_attack;
		defence = p_defence;
	}
	else {
		super_attack = 0;
		defence = 0;
	}
}


int SuperHero::superattackStrength() const {
	int answer;
	if (isEmpty() == true && super_attack==0 && defence==0) {
		answer = 0;
	}
	else {
		answer = super_attack;
	}
	return answer;
}


int SuperHero::defend() const {
	int answer;
	if (isEmpty() == true && super_attack == 0 && defence == 0) {
		answer = 0;
	}
	else {
		answer = defence;
	}
	return answer;
}

const SuperHero& operator*(const SuperHero& first, const SuperHero& second) {
	//Ancient Battle! Achilles vs Hector : Winner is Hector in 4 rounds.
	SuperHero a = first;
	SuperHero b = second;
	int number = 0;
	SuperHero winner;
	int flag = 0;
	while (a.isAlive() == true && b.isAlive() == true && number < MAX_ROUND) {
		a.operator-=((b.attackStrength()+b.superattackStrength()) - a.defend());
		b.operator-=((a.attackStrength() + a.superattackStrength()) -b.defend());
		number++;
	}
	if (a.isAlive() == true || number == MAX_ROUND) {
		winner = first;
		flag = 1;
	}
	else {
		winner = second;

	}
	cout << "Super Fight! " << first << " vs " << second << " : Winner is " << winner << " in " << number << " rounds." << endl;

	if (flag == 1) {
		return first;
	}
	else {
		return second;
	}


}
