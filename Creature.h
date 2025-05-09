#ifndef CREATURE_H
#define CREATURE_H

#include <string>
using namespace std;

class Enemy {
protected:
	string name;
	int health;
	int attack;

public:
	Enemy(string n, int hp, int atk);
	virtual void displayStats() const;
	virtual ~Enemy() = default;
};

#endif
