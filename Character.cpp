#include "Character.h"
#include "Encounter.h"
#include <iostream>
#include <ctime>
using namespace std;

Character::Character(string n, int heal, int str, int def) :
    name(n), health(heal), strength(str), defense(def) {}

void Character::setName(string n) {
    name = n;
}

void Character::setAttributes(int heal, int str, int def) {
    health = heal;
    strength = str;
    defense = def;
}

void Character::generateRandomStats() {
    static bool rngInitialized = false;
    if (!rngInitialized) {
        srand(static_cast<unsigned int>(time(nullptr)));
        rngInitialized = true;
    }

    health = 10 + rand() % 11;
    strength = 5 + rand() % 11;
    defense = 5 + rand() % 11;
}

string Character::getName() const {
    return name;
}

int Character::getHealth() const {
    return health;
}

int Character::getStrength() const {
    return strength;
}

int Character::getDefense() const {
    return defense;
}

void Character::printStats() const {
    cout << "Name: " << name << "\n"
        << "Health: " << health << "\n"
        << "Strength: " << strength << "\n"
        << "Defense: " << defense << "\n";
}

// createCharacter() function for use in main program
void createCharacter() {

    string name;
    cout << "Enter your character's name: ";
    getline(cin, name);

    Character player(name, 0, 0, 0);
    player.generateRandomStats();
    player.printStats();


    Encounter goblinAmbush(
        "Three goblins attack!!",
        10, 4,
        12, 5,
        8, 3
    );
    goblinAmbush.startEncounter();

}