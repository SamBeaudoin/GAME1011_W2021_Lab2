#pragma once
#include "Character.h"
#include <iostream>
#include <string>

using namespace std;
class CharacterClass : public Character
{
private:
	string AttackName;
	string AttackDesc;
	string Modification;

public:
	CharacterClass(string name, int hp, Weapon& wep, string Aname, string Adesc, string Namemod);

	~CharacterClass() {};

	virtual void SetName(string name, string Namemod)
	{
		this->name = name + " " + Namemod;
	}

	virtual void SetHealth(int hp)
	{
		this->health = hp;
	}

	void SetAttackName(string Aname)
	{
		AttackName = Aname;
	}

	void SetAttackDesc(string dsc)
	{
		AttackDesc = dsc;
	}

	void SetModification(string mod)
	{
		Modification = mod;
	}

	string GetAttackName()
	{
		return AttackName;
	}

	string GetAttackDesc()
	{
		return AttackDesc;
	}

	string GetModification()
	{
		return Modification;
	}

	virtual void DisplayInfo();

};

