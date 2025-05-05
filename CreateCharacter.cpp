#include "CreateCharacter.h"
#include <iostream>
using namespace std;

createCharacter::createCharacter(string n, int heal, int str, int def) :
	name(n), health(heal), strength(str), defense(def) {}

