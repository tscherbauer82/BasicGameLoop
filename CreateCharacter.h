#ifndef CREATECHARACTER_H
#define CREATECHARACTER_H

#include <string>
using namespace std;

class createCharacter {
private:
	string name;
	int health;
	int strength;
	int defense;

public:
	createCharacter(string n, int heal, int str, int def);

	int attack();
	int damage();
	int healthLost();

	string getName();
	int getHealth();

};
#endif
