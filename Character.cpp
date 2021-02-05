#include "Character.h"
#include <iostream>
#include <string>

using namespace std;

Character::Character(string name, int hp, Weapon& wep)
{
	SetName(name);
	SetHealth(hp);
	SetWeapon(wep);
}