#ifndef ENCOUNTER_H
#define ENCOUNTER_H

#include <string>
using namespace std;

class Encounter {
private: 
		string description;
		int enemyHealth[3];
		int enemyAttack[3];

public:
	Encounter(string desc, int hp1, int atk1, int hp2, int atk2, int hp3, int atk3);

	void startEncounter();
};

#endif