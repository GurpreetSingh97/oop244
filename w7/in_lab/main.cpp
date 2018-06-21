#include <iostream>
#include "Hero.h"

using namespace std;
using namespace sict;
 
int main() {
  int number;
  cout << "Enter the number of warriors:";
  cin >> number;

  Hero arr[number];
 
  for(int i =0;i<number;i++){

  char p_name[41];
  cout << "name:";
  cin >> p_name;
  cin.ignore();

  int health;
  int attackStrength;
  cout << "health:" ;
  cin >> health;
  cin.ignore();
  cout << "Strength:";
  cin >> attackStrength;
  cin.ignore();

  arr[i] = Hero(p_name,health,attackStrength);
  }


 cout << "Greek Heroes";  
 
  cout << endl << "Quarter Finals" << endl;
  const Hero& greek_winner1 = achilles * hector; 
  const Hero& greek_winner2 = hercules * theseus;
  const Hero& greek_winner3 = oddyseus * ajax;
  const Hero& greek_winner4 = atalanta * hippolyta;
  
  cout << endl << "Semi Finals" << endl;
  const Hero& greek_winner_semifinal1 = greek_winner1  * greek_winner2;
  const Hero& greek_winner_semifinal2 = greek_winner3  * greek_winner4;

  cout << endl << "Finals" << endl;
  greek_winner_semifinal1 * greek_winner_semifinal2;
  
  return 0;
}
