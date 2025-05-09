#include <iostream>
#include <string>
#include "Character.h"
#include "Creature.h"

using namespace std;

void clearInput() {
	cin.clear();
	cin.ignore(500, '\n');
}

int displayMainMenu() {
	int choice;
	cout << "Imagination Adventure: A Text Based Journey\n";
	cout << "1. Start New Game\n";
	cout << "2. How to Play\n";
	cout << "3. Quit\n";
	cin >> choice;
	clearInput();
	return choice;
}

int main() {
	int choice;
	do {
		choice = displayMainMenu();
		switch (choice) {
		case 1:
			createCharacter();
			break;
		case 2:
			cout << "How to Play" << endl;
			cout << "Input your commands to journey through the adventure.\n";
			cout << "Start by creating your character";
			break;
		case 3:
			cout << "Quit Game" << endl;
			break;
			}
	} while (choice != 3);
	return 0;
}

