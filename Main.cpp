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
		
				new Weapon("Claws", "They are Long and Pointy!", 35, "Claws do not need to be maintained.",
					"Claws cause the 'Bleed' effect for 1d4 rounds.", "Creatures with Claws have a climb speed equal to their walk speed."),
		
				new Weapon("Lil'Stabba", "Short spear that's tipped with... IS THAT POO!?", 15, "Can attack twice with one action.", "Causes the 'Poisoned' debuff",
					"The horrendous smell makes even Troglodytes wheeze.")
	};

	CharacterClass* OrcArr[NUM_OF_ORCS] =
	{
		new CharacterClass("BugBear", 300, *Warr[1], "BodySlam.\n", "Knock the opponet prone", "The Big and Hairy,"),

		new CharacterClass("Hobgoblin", 250, *Warr[0], "Taunt.\n", "Diverts enemy attention towards self", "The Feared and Commanding,"),

		new CharacterClass("Snotling", 25, *Warr[2], "Flee.\n", "Cowardice fuels your feet, run twice as fast when death looms", "The Cowardly Cannonfodder,"),

		new CharacterClass("Moon Gobbo", 70, *Warr[2], "Eat 'Da Shrooms.\n", "Go into a drug fueled frenzy of death and insults, + 25 to DPS", "Prophet of the Moon Gitz,")
	};

	int UserChoice = 1;
	const int ARMY_NUM = 20;
	CharacterClass* UserArmy[ARMY_NUM];
	for (int i = 0; i < ARMY_NUM; i++)
	{
		UserArmy[i] = nullptr;
	}
	
		cout << "Welcome to Sam's Orc Army Builder!" << endl 
			<< "===================================================" << endl;
	while (UserChoice > 0)
	{
		cout << "===================================================" << endl;
		cout << "Please use the following options to do one of the following actions:" << endl
			<< "1: Add a new character to your army." << endl
			<< "2: See your current army." << endl
			<< "3: Delete a unit in your army." << endl
			<< "0: Exit Program." << endl << endl;
		
		std::cin >> UserChoice;

		system("CLS");

		cout << "===============================================" << endl;
		switch (UserChoice)
		{
		case 1:
			cout << "Which of the following characters would you like to add?" << endl;
			for (int i = 0; i < NUM_OF_ORCS; i++)
			{
				cout << "Use " << i << " for: " << OrcArr[i]->GetName() << endl;

			}
			int orcChoice;
			std::cin >> orcChoice;

			for (int i = 0; i < ARMY_NUM; i++)
			{
				if (orcChoice < 0 || orcChoice > NUM_OF_ORCS - 1)
				{
					cout << "\nPlease enter a valid option." << endl << endl;
				}

				if (orcChoice > -1 && orcChoice < NUM_OF_ORCS)
				{
					if (UserArmy[i] == nullptr)
					{
						UserArmy[i] = OrcArr[orcChoice];
						cout << "\nYou have added: \n" << OrcArr[orcChoice]->GetName() << endl;
						break;
					}
				}
			}

			

			break;

		case 2:
			for (int i = 0; i < ARMY_NUM; i++)
			{
				if (UserArmy[i] != nullptr)
				{
					cout << "Slot " << i << " Contains ";
					UserArmy[i]->DisplayInfo();
				}

				if (UserArmy[i] == nullptr)
				{
					cout << "\nThis slot is Empty!\n";
				}

				cout << endl << "=====================================================" << endl << endl;
			}

			break;

		case 3:
			cout << "Please enter the slot number you would like to delete:" << endl;
			for (int i = 0; i < ARMY_NUM; i++)
			{
				
				if (UserArmy[i] == nullptr)
				{
					cout << "Slot #" << i << " is empty." << endl;
				}
				if (UserArmy[i] != nullptr)
				{
					cout << "Slot #" << i << " " << UserArmy[i]->GetName() << endl;
				}
				
				
			}
			int KillChoice;
			std::cin >> KillChoice;

			for (int i = 0; i < ARMY_NUM; i++)
			{
				if (!(KillChoice < 0 || KillChoice > ARMY_NUM))
				{
					if (UserArmy[KillChoice] == nullptr)
					{
						cout << "Slot #" << i << " is already empty." << endl;
						break;
					}

					if (UserArmy[KillChoice] != nullptr)
					{
						cout << UserArmy[KillChoice]->GetName() <<
							" In slot #" << KillChoice << " Will be deleted" << endl;
						
						UserArmy[KillChoice] = nullptr;
						break;
					}
				}

			}

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