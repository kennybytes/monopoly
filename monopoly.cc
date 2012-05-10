//	EE205
//	R4T5
//	Final Project
//
//	Monopoly.cc 
//	Main Driver for Final Project
//

#include <iostream>
using namespace std;
main()
{

	cout << "Now we're playing monopoly!" << endl;
	cout << "===========================" << endl;
	cout << "How many players? " << endl;

	int players;
	cin >> players;
	while(players < 1)
	{	cout << "Invalid number of players" << endl;
		cout << "How many players? " << endl;
		cin >> players;
	}

	// Initialize Board, players
	// InitBoard();
	Player P[players];

	int flag = 0;	// ends game if 1
	int option;
	int dice;
	bool rollCheck;

   // Infinite loop until quit
   while(!flag)
   {
	// Cycle through each player once
	for(int i = 0; i < players; i++)
	{
		cout << "Player " << i+1 << "'s turn!" << endl;
		cout << player[i].getName() << " (" << i+1 << ") " << "(cash $" << player[i].get_balance() << ") on === PLACE" << endl;
		// Set rollCheck value per turn
		rollCheck = 0;

		// Display options

		DisplayOptions();
		/*
 		Code for DisplayOptions():

		cout << "Choose an option!" << endl;
		cout << "	1) Roll dice" << endl;
		cout << "	2) Manage Properties" << endl;
		cout << "	3) Display Cash" << endl;
		cout << "	4) Trade" << endl;
		cout << "	5) End Turn" << endl;
		*/

		cin >> option;
		// Will keep doing actions until player
		// legally chooses to end turn
		while(option != 5 && !rollCheck){
			if(option == 1 && !rollCheck) // Roll Dice
			{	dice = roll();
				// roll = rand()%12 + 1;   // Roll dice, values 1-12
				rollCheck = 1;	      // Tell program user has rolled

				P[i].update_position(dice);
			
				// Perform action on tile

				DisplayOptions();
				cin >> option;
			}

			else if(option == 1 && rollCheck) // Already rolled
			{	cout << "Already rolled! Choose another option" << endl;
				DisplayOptions();
				cin >> options;
			}

			else if(option == 2)
			{	


				DisplayOptions();
				cin >> option;
			}
			else if(option == 3)
			{


				DisplayOptions();
				cin >> option;
			}
			else if(option == 4)
			{
	
	
				DisplayOptions();
				cin >> option;
			}
			else if(option == 5 && !rollCheck)
			{	cout << "Must roll first!" << endl;
				DisplayOptions();
				cin >> option;
			}

			else if(option > 5 || option < 1)
			{ 	cout << "Invalid option!" << endl;
				DisplayOptions();
				cin >> option;
			}
			// else do nothing; switch to next player
		}
	}
   }

/*	ASM:
 * 	start
 *
 * 	init
 * 	player
 * 		1) roll
 * 			update pos
 * 			action block
 * 			check
 * 		2) manage properties
 * 		3) display cash
 * 		4) trade
 *		5) if(rolled)
 *			check
 *			next player
 *
 */










}



