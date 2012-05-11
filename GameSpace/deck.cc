
/*
 * File: deck.cc
 * Author: Kevin Hu
 * Date Created: 4/21/12
 * Date Modified: 4 May 2012
 * Rev: v0.3
 *
 * File Description:
 *
 *
 *
 */
#include <stdlib.h>
#include <vector>
#include <iostream>
using namespace std;

#include "deck.h"

typedef int Position;

/*	Constructor	*/

Deck :: Deck(string n, CellType t)
 : GameSpace(n, t)
{
}


/*	Actions		*/

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * Does an action from CHANCE (pseudo) stack
 * by simply doing an action based on a random number.
 * Does not keep track of what has been drawn like 
 * a real card stack.
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
void Deck :: chance(Player &p, int i, vector<GameSpace*> &gs)
{
	
	int c = rand()%17;  // Card based on a random draw
	string input;	    // Used to receive user response for several cards
	Position temppos;   // Stores temppos, usually to determine whether
		            // passed GO!

	// Does an action based on a random number c
	switch(c)
	{	
		case 0:
			cout << "Advance to Go, Collect $200!" << endl;
			p.send_to(0);	//Send to GO tile
			p.update_balance(200);	// Collect $200
			break;

		case 1:	
			cout << "Advance to Illinois Ave - "
			<< "if you pass Go, collect $200" << endl;

			// store position to compare IF			
			temppos = p.get_position();

			// Send to gamespace Illinois Ave
			p.send_to(24);

			// If passed GO, collect $200
			if(p.get_position() < temppos)	p.update_balance(200);
			break;

		case 2:
			cout << "Advance token to nearest Utility. "
				<< "If unowned, you may buy. "
				<< "If owned, throw dice and pay owner"
				<< " 10x amount thrown." << endl;
			if(p.get_position() < 12 ||
				   p.get_position() > 28)
				p.send_to(12);
			else p.send_to(28);

			// ASK TO BUY;			
			// Check owner, buy or pay
			if((*gs[p.get_position()]).getOwner() == NON)
			{	cout << "Current Utility Unowned, do you " <<
					"want to buy?(Y/N)" << endl;
				cout << (*gs[p.get_position()]).getPrice();
				cin >> input;
				while(input != "y" || input != "Y" ||
					input != "n" || input != "N")
				{	
				   if(input == "Y" || input == "y")
				   {
					(*gs[p.get_position()]).setOwner(i);
					p.update_balance(
						-(*gs[p.get_position()]).getPrice() );
					
					cout << name << " bought " 
					<< (*gs[p.get_position()]).getName() << endl;
				   }

				   else if(input == "N" || input == "n")
				   {
					break;
				   }
				   else
				   {
					cout << "Incorrect Input" << endl <<
					"want to buy?(Y/N)" << endl;
					cin >> input;
				   }
				}
			}
			// else PAY RENT;
			break;

		// Double chance of happening
		case 3:
		case 4:
			cout << " Advance token to the nearest Railroad"
				<< " and pay owner 2x rental to which he"
				<< " is otherwise entitled. If unowned,"
				<< " may buy." << endl;

			// Determine which RR to go to
			if(p.get_position() < 5 ||
	   				p.get_position() > 35)
				p.send_to(5);

			else if(p.get_position() > 5 ||
	   				p.get_position() < 15)
				p.send_to(15);

			else if(p.get_position() > 15 ||
	   				p.get_position() < 25)
				p.send_to(25);

			else if(p.get_position() > 25 ||
	   				p.get_position() < 35)
				p.send_to(35);

			// Check owner, buy or pay
			if((*gs[p.get_position()]).getOwner() == NON)
			{	cout << "Current Railroad Unowned, do you " <<
					"want to buy?(Y/N)" << endl;
				cout << (*gs[p.get_position()]).getPrice();
				cin >> input;
				while(input != "y" || input != "Y" ||
					input != "n" || input != "N")
				{	
				   if(input == "Y" || input == "y")
				   {
					(*gs[p.get_position()]).setOwner(i);
					p.update_balance(
						-(*gs[p.get_position()]).getPrice() );
					
					cout << name << " bought " 
					<< (*gs[p.get_position()]).getName() << endl;
				   }

				   else if(input == "N" || input == "n")
				   {
					break;
				   }
				   else
				   {
					cout << "Incorrect Input" << endl <<
					"want to buy?(Y/N)" << endl;
					cin >> input;
				   }
				}
			}


			// else PAY RENT;
			break;

		case 5:
 			cout << " Advance to St. Charles Place -"
				<< " if you pass Go, collect $200" << endl;
			
			// store position to compare IF			
			temppos = p.get_position();

			// Send to gamespace St. Charles Place
			p.send_to(11);

			// If passed GO, collect $200
			if(p.get_position() < temppos)	
			{	p.update_balance(200);
				cout << "Passed GO! Collected $200!" << endl;
			}
			break;

		case 6:
			cout << "Bank pays you dividend of $50" << endl;
			p.update_balance(50);
			break;

		case 7:
			cout << "Get out of Jail Free -  this card may be"
				<< " kept until needed, or traded/sold" << endl;
			p.setJailCard(true);
			break;

		case 8:
 			cout << "Go back 3 spaces" << endl;
			p.update_position(-3);
			break;

		case 9:
			cout << "Go directly to Jail - do not pass Go,"
				<< " do not collect $200" << endl;
			p.send_to(10);	// Send to tile
			p.go_jail();		// Actually in jail
			break;

		case 10:
 			cout << "Pay poor tax of $15" << endl;
			p.update_balance(-15);
			break;

		case 11:
			cout << "Take a trip to Reading Railroad - if you"
				<< " pass Go, collect $200" << endl;
			temppos = p.get_position();

			p.send_to(5);
			// Collect $200 if you pass Go
			if(p.get_position() < temppos)	p.update_balance(200);
			break;

		case 12:
			cout << "Take a walk to TEP'S PLACE! - advance token"
				<< " to Tep's Office" << endl;
			p.send_to(39);
			break;

		case 13:
 			cout << "Your building loan matures -"
				<< " collect $150" << endl;
			p.update_balance(100);
			break;

		case 14:
			cout << "You have won a crossword competition -"
				<< " collect $100" << endl;
			p.update_balance(100);
			break;

		case 15:
			cout << "You have found access to the wonderful " <<
			"game of EE205mon! Collect $205 for sharing findings!"
			<< endl;
			p.update_balance(205);
			break;

		case 16:
			cout << "You find money on the floor!" << endl;
			p.update_balance(rand()%11);
			break;
	}
}



// Does an action based on the Community Chest stack, similarly to Chance 
void Deck :: comchest(Player &p)
{
	int c = rand()%17;
	Position temppos;

	switch(c)
	{	
		case 0:
			cout << "Advance to Go, Collect $200!" << endl;
			p.send_to(0);	//Send to GO tile
			p.update_balance(200);	// Collect $200
			break;

		case 1:
			cout << "Bank error in your favor,"
				<< " Collect $200!" << endl;
			p.update_balance(200);	// Collect $200
			break;

		case 2:
			cout << "Doctor's fees, pay $50!" << endl;
			p.update_balance(-50);	// pay $50
			break;

		case 3:
			cout << "Get out of Jail Free -  this card may be"
				<< " kept until needed, or traded/sold" << endl;
			p.setJailCard(true);
			break;

		case 4:
			cout << "Go directly to Jail - do not pass Go,"
				<< " do not collect $200" << endl;
			p.send_to(10);	// Send to tile
			p.go_jail();		// Actually in jail
			break;

		case 5:
			cout << "Income Tax refund - Collect $20" << endl;
			p.update_balance(20);
			break;

		case 6:
			cout << "Life Insurance Matures = Collect $100" << endl;
			p.update_balance(100);
			break;

		case 7:
			cout << "Pay Hospital Fees of $100" << endl;
			p.update_balance(-100);
			break;

		case 8:
			cout << "Pay School Fees of $50" << endl;
			p.update_balance(-50);
			break;

		case 9:
			cout << "Receive $25 Consultancy Fee" << endl;
			p.update_balance(25);
			break;

		case 10:
			cout << "You have won second prize in a beauty contest"
				<< " - Collect $10" << endl;
			p.update_balance(10);
			break;

		case 11:
			cout << "You inherit $100" << endl;
			p.update_balance(100);
			break;

		case 12:
			cout << "From sale of stock you get $50" << endl;
			p.update_balance(50);
			break;

		case 13:
			cout << "Holiday Fund matures - Receive $100" << endl;
			p.update_balance(100);
			break;

		case 14: 
			cout << "TEP HAS GIVEN YOU AN F IN EE205!!!!!!" << endl
			<< "Pay him ALL your cash in a chance" <<
			" for a passing grade!" << endl;
			p.update_balance(-p.get_balance());
			p.set_dead();
			break;

		case 15:
			cout << "You managed to hack Wiliki!!!!!" << endl
			<< "Gain $10000 from accessing top secret information!"
			<< endl;
			p.update_balance(10000);
			break;

		case 16:
			cout << "You open up a real treasure chest!" << endl
			<< "..." << endl << "....." << endl << "........" <<
			endl << "There is $1." << endl;
			p.update_balance(1);
			break;

	}
}

/*	Display Operator	*/
void Deck :: display(ostream & out) const
{
	out << "Name = " << name << endl;
	out << "Type = " << type << endl;
}
