#include "CharacterClass.h"
#include <iostream>
#include <string>

using namespace std;

CharacterClass::CharacterClass(string name, int hp, Weapon wep, string Aname, string Adesc, string Namemod) : Character(name, hp, wep)
{
	SetName(name, Namemod);
	SetHealth(hp);
	SetAttackName(Aname);
	SetAttackDesc(Adesc);
}

void CharacterClass::DisplayInfo()
{
	cout << "The Character: " << Character::name << " it has " << Character::health << " HP\n"
		<< "They are equipped with " << Character::item << endl << "They have the following racial ability\n"
		<< GetAttackName() << "It's description is the following: \n" << GetAttackDesc() << endl;
}
