#pragma once
#include "Weapon.h"
#include <iostream>
#include <string>

using namespace std;

class Character
{
protected:
	string name;
	int health;
	Weapon item;

public:

	Character(string name, int hp, Weapon& wep);

	~Character() {};

	virtual void SetName(string name)
	{
		this->name = name;
	}

	string GetName()
	{
		return name;
	}

	virtual void SetHealth(int hp)
	{
		health = hp;
	}

	void SetWeapon(Weapon& wep)
	{
		item = wep;
	}

	virtual void DisplayInfo() = 0;
};

