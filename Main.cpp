#include <iostream>
#include <string>
#include "CharacterClass.h"
#include "Weapon.h"

using namespace std;

int main()
{
	const int NUM_OF_ORCS = 4;
	const int NUM_OF_WEAPONS = 3;
	Weapon* Warr[NUM_OF_WEAPONS] =
	{
				new Weapon("Big Choppa", "Square Cleaver-like Death", 25, "Can be used as a bludgening or slashing weapon",
					"Can be further augmented using high-class orc-tech", "It's uglyness makes common elves barf."),
		
				new Weapon("Claws", "Long and Pointy!", 35, "Claws do not need to be maintained.",
					"Claws cause the 'Bleed' effect for 1d4 rounds.", "Creatures with Claws have a climb speed equal to their walk speed."),
		
				new Weapon("Lil'Stabba", "Short spear that's tipped with... IS THAT POO!?", 15, "Can attack twice with one action.", "Causes the 'Poisoned' debuff",
					"The horrendous smell makes even Troglodytes wheeze.")
	};

	CharacterClass* Carr[NUM_OF_ORCS] =
	{
		new CharacterClass("BugBear", 300, *Warr[1], "BodySlam", "Knock the opponet prone", "The Big and Hairy!"),

		new CharacterClass("Hobgoblin", 250, *Warr[2], "Taunt", "Diverts enemy attention towards self", "The Feared and Commanding"),

		new CharacterClass("Snotling", 25, *Warr[3], "Flee", "Cowardice fuels your feet, run twice as fast when death looms", "The Cowardly Cannonfodder"),

		new CharacterClass("Moon Gobbo", 70, *Warr[3], "Eat 'Da Shrooms", "Go into a drug fueled frenzy of death and insults, + 25 to DPS", "Prophet of the Moon Gitz")
	};

	int UserChoice;
	const int ARMY_NUM = 20;
	CharacterClass* UserArmy[ARMY_NUM];
	for (int i = 0; i < ARMY_NUM; i++)
	{
		UserArmy[i] = nullptr;
	}
	
		cout << "Welcome to Sam's Orc Army Builder!" << endl << "-----------------------------------" << endl;
	while (UserChoice > 0)
	{
		cout << "Please use the following options to do one of the following actions:" << endl
			<< "1: Add a new character to your army." << endl
			<< "2: See your current army." << endl
			<< "3: Delete a unit in your army." << endl
			<< "0: Exit Program." << endl << endl;
		
		cin >> UserChoice;

		switch (UserChoice)
		{
		case 1:
			cout << "Which of the following characters would you like to add?" << endl;
			for (int i = 1; i < NUM_OF_ORCS + 1; i++)
			{
				Carr[i]->GetName() //ToDo: The Rest
			}

			break;
		case 2:


			break;
		case 3:


			break;
		case 0:
			cout << "Good Bye!" << endl;
			break;
		default:
			cout << "\n\nPlease pick a valid option.\n\n";
			break;
		}
	}
	return 0;
}