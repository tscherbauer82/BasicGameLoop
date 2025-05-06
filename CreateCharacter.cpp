#include "CreateCharacter.h"
#include <iostream>  

#include <ctime> //for random stat seeding
using namespace std;

createCharacter::createCharacter(string n, int heal, int str, int def) :
	name(n), health(heal), strength(str), defense(def) {
}

void createCharacter::setName(string n) {
	name = n;
}

void createCharacter::setAttributes(int heal, int str, int def) {
	health = heal;
	strength = str;
	defense = def;
}

void createCharacter::generateRandomStats() {
	bool rngInitialized = false;

	//creates RNG for the first time if it's not already
	if (!rngInitialized) {
		srand(static_cast<unsigned int>(time(nullptr)));
		rngInitialized = true;
	}

	//These stats guarantee a baseline (at least ten health and five for each the strength and defense) but then will add a "random" amount to create
	//a new experience every time you create a new character (help from https://www.geeksforgeeks.org/rand-and-srand-in-ccpp/)
	health = 10 + rand() % 11;
	strength = 5 + rand() % 11;
	defense = 5 + rand() % 11; 
}

string createCharacter::getName() const {
	return name;
}

int createCharacter::getHealth() const {
		return health;
}

int createCharacter::getStrength() const {
	return strength;
}

int createCharacter::getDefense() const {
	return defense;
}

void createCharacter::printStats() const {
	cout << "Name: " << name << "\n" << "Health: " << health << "\n" << "Strength: " << strength << "\n" << "Defense: " << defense << "\n";
}