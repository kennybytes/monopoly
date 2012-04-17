//	EE205
//	R4T5
//	Final Project
//
//	Monopoly.cc 
//	Main Driver for Final Project
//
<<<<<<< HEAD
<<<<<<< HEAD
// 

=======
>>>>>>> kevinhu1
=======
>>>>>>> kevinhu1
#include <iostream>
using namespace std;
main()
{

	cout << "Now we're playing monopoly!" << endl;

	cout << "How many players? (1-4)" << endl;

	int players;
	cin >> players;
	while(players < 1 || players > 4)
	{	cout << "Invalid number of players" << endl;
		cout << "How many players? (1-4)" << endl;
		cin >> players;
	}

	// Initialize Board, players
	InitBoard();
	InitPlayers(players);

	int turn = 1;
	int flag = 0;	// ends game if 1
	int option;
	int rollValue;
	bool rollCheck;

	while(!flag)
	{
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
			{	rollValue = roll();
				// roll = rand()%12 + 1;   // Roll dice, values 1-12
				rollCheck = 1;	      // Tell program user has rolled

				if(turn == 1)
				P1.movePosition(rollValue)
				else if(turn == 2)
				P2.movePosition(rollValue)
				else if(turn == 3)
				P3.movePosition(rollValue)
				else if(turn == 4)
				P4.movePosition(rollValue)
			
				// Perform action on tile
<<<<<<< HEAD

				DisplayOptions();
				cin >> option;
			}

			else if(option == 1 && rollCheck) // Already rolled
			{	cout << "Already rolled! Choose another option" << endl;
				DisplayOptions();
				cin >> options;
			}

=======

				DisplayOptions();
				cin >> option;
			}

			else if(option == 1 && rollCheck) // Already rolled
			{	cout << "Already rolled! Choose another option" << endl;
				DisplayOptions();
				cin >> options;
			}

>>>>>>> kevinhu1
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
			// else do nothing; while loop ends
		}

		// Update next turn; who will go next?
		if(turn < players)
		turn++

		//Go from last player to first
		else if(turn == players) 
		turn = 1;
		else // else invalid!
		{	cerr << "Error!" << endl;
			flag = 1;
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



