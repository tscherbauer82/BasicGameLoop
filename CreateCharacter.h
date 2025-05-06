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

	void setName(string n);
	void setAttributes(int heal, int str, int def);

	void generateRandomStats();

	string getName() const;
	int getHealth() const;
	int getStrength() const;
	int getDefense() const;

	void printStats() const;
};

#endif
