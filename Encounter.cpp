#include "Encounter.h"
#include <iostream>
#include <ctime>

using namespace std;

Encounter::Encounter(string desc, int hp1, int atk1, int hp2, int atk2, int hp3, int atk3)
	: description(desc) {
	enemyHealth[0] = hp1;
	enemyAttack[0] = atk1;
	enemyHealth[1] = hp2;
	enemyAttack[1] = atk2;
	enemyHealth[2] = hp3;
	enemyAttack[2] = atk3;
}

void Encounter::startEncounter() {
	cout << "\n Goblins on the Hill \n";
	cout << description << "\n";

	for (int i = 0; i < 3; ++i) {
		cout << "\nEnemy " << (i + 1) << " appears!\n";
		cout << "Health: " << enemyHealth[i] << ", Attack: " << enemyAttack[i] << "\n";

		int playerAttack = 10 + rand() % 6;
		cout << "You hit enemy " << (i + 1) << " for " << playerAttack << " damage!\n";

		if (playerAttack >= enemyHealth[i]) {
			cout << "Enemy " << (i + 1) << " is defeated!\n";
		}
	}
	cout << "Goblins have been defeated!! Your adventure continues...\n\n";
}
