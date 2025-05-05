#include<iostream>
using namespace std;

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

void clearInput() {
	cin.clear();
	cin.ignore();
}



