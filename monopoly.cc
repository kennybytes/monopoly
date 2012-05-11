/*
 *
 *
 * EE 205
 * monopoly.cc
 *
 * Rotation 4 Team 5
 *
 * Main Driver for monopoly
 *
 */

#include <iostream>
#include <vector>
using namespace std;

#include "common.h"
#include "celltype.h"
#include "color.h"

#include "gamespace.h"
#include "deed.h"
#include "property.h"
#include "utility.h"
#include "railroad.h"
#include "tax.h"
#include "misc.h"
//#include "deck.h"
#include <time.h>

#include "player.h"

#include "container.h"

void DisplaySplash();
int main()
{	
	int players = 0;
	vector<Player> Players;

	DisplaySplash();
	srand(time(NULL));
	
	cout << "How many players? ";
	cin >> players;

	cout << players << " Players." << endl;
		
	// Add players
	for(int i = 0; i < players; i++)
	{
		string name;

		cout << "Player " << i+1 << " Name :";
		cin >> name;

		Player a;
		a.set_name(name);
		Players.push_back(a);	
	}
	
	
	for(int i = 0; i < players; i++)
	{
		cout << Players[i] << endl;
	}
	
 	

	// Main Game Loop
	for( int i = 0; i< players; i=(i + 1 )  %players)
	{

		cout << "main loop" << endl;
		string input = "0";
			
		int flag = 0;
		while(flag==0)
		{		
			flag = 0;
			cout << "Enter option: ";
			cin >> input;
			cout << endl;
			//DisplayMenu();

	
			if(input == "roll")
			{	
				//roll dice and iterate position
				
				Players[i].roll_dice();
				cout << Players[i].getRollValue() 
						<< endl;
				Players[i].update_position
					(Players[i].getRollValue());
				
				cout << Players[i].get_name()
					<< " Moved to position "
					<< Players[i].get_position() 
					<< endl;
					
			//	DoAction(Players, Board);
			}
			
			if(input ==  "n")
			{

				cout << "Next Player" << endl;
				break;
			}

		}


	}			
	
	
	
	

	
	

	

	// Begin main loop
	while(1);
		
	



/*
	int NumberPlayers = 3;
	typedef Player PlayerArray[NumberPlayers];

	PlayerArray PA;

	Player A;

	int i = 1;

	cout << "Player " << i << ": " <<endl;
	cout << PA[i] << endl;
*/

}


void DisplaySplash(){

	cout << "We're Playing Monopoly!" << endl;
}

void DisplayOptions(){
	



}



