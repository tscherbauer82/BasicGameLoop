#include "Creature.h"
#include <iostream>

Enemy::Enemy(string n, int hp, int atk) : name(n), health(hp), attack(atk) {}

void Enemy::displayStats()const {
	cout << "Enemy: " << name
		<< "\nHealth: " << health
		<< "\nAttack: " << attack;
}