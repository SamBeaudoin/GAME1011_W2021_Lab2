#include "Weapon.h"
#include <iostream>
#include <string>

using namespace std;

Weapon::Weapon(string n, string d, int dmg, string a1, string a2, string a3)
{
	SetName(n);
	SetDesc(d);
	SetDmg(dmg);
	SetAbilities(a1, a2, a3);
}

void Weapon::SetAbilities(string a1, string a2, string a3)
{
	this->abilities[0] = a1;
	this->abilities[1] = a2;
	this->abilities[2] = a3;
}

string Weapon::GetAbilities()
{
	return this->abilities[0] + "\n\n" + this->abilities[1] + "\n\n" + this->abilities[2];
}

ostream& operator<<(ostream& out, Weapon w)
{
	cout << "The Weapon " << w.GetName() << ", it is " << w.GetDesc() << "\nIt does "
		<< w.GetDmg() << " DPS.\n\n" << "With the following special abilities:\n\n"
		<< w.GetAbilities() << endl;
}
