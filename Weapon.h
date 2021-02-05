#pragma once
#include <iostream>
#include <string>

using namespace std;

class Weapon
{
private:
	string Wname;
	string description;
	int damage = 0;
	string abilities[2];

public:
	Weapon() {};

	Weapon(string n, string d, int dmg, string a1, string a2, string a3);

	~Weapon() {};

	void SetName(string name)
	{
		Wname = name;
	}

	string GetName()
	{
		return Wname;
	}

	void SetDesc(string desc)
	{
		description = desc;
	}

	string GetDesc()
	{
		return description;
	}

	void SetDmg(int dmg)
	{
		damage = dmg;
	}

	int GetDmg()
	{
		return damage;
	}

	void SetAbilities(string a1, string a2, string a3);

	string GetAbilities();

	friend ostream& operator<<(ostream& out, Weapon W);
};

