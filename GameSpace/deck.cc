
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
void Deck :: chance(Player p, vector<GameSpace*> &gs)
{
	int c = rand()%17;
	Position temppos;
	switch(c)
	{	
		case 0:
			cout << "Advance to Go, Collect $200!" << endl;
			p.send_To(0);	//Send to GO tile
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
			if(p.get_position() < FIRST_UTILITY ||
				   p.get_position() > LAST_UTILITY)
				p.send_to(FIRST_UTILITY);
			else p.send_to(LAST_UTILITY);

			if(t1.getOwner() == "BANKER");
			// ASK TO BUY;			
			else PAY RENT;
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
			if(*gs[p.get_position()]).getOwner() == NON);
			// ASK TO BUY;			
			else PAY RENT;
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
				cout << "Passed GO! Collected $200!" endl;
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
			p.send_to(JAIL);	// Send to tile
			p.go_jail();		// Actually in jail
			break;

		case 10:
 			cout << "Make general repairs on all your property"
				<< " - for each house pay $25 - for each"
				<< " hotel $100" << endl;
			break;

		case 11:
 			cout << "Pay poor tax of $15" << endl;
			p.update_balance(-15);
			break;

		case 12:
			cout << "Take a trip to Reading Railroad - if you"
				<< " pass Go, collect $200" << endl;
			temppos = p.get_position();

			p.send_to(READING RAILROAD);
			// Collect $200 if you pass Go
			if(p.get_position() < temppos)	p.update_balance(200);
			break;

		case 13:
			cout << "Take a walk on the Boardwalk - advance token"
				<< " to Boardwalk" << endl;
			p.send_to(BOARDWALK);
			break;

		case 14:
 			cout << " You have been elected chairman of the board"
				<< " - pay each player $50" << endl;
			// PAY FUNCTION ?!
			break;

		case 15:
 			cout << "Your building loan matures -"
				<< " collect $150" << endl;
			p.update_balance(100);
			break;

		case 16:
			cout << "You have won a crossword competition -"
				<< " collect $100" << endl;
			p.update_balance(100);
			break;
	}
}

void Deck :: comchest(Player p)
{
	int c = rand()%17;
	Position temppos;

	switch(c)
	{	
		case 0:
			cout << "Advance to Go, Collect $200!" << endl;
			p.send_To(0);	//Send to GO tile
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
			p.send_to(JAIL);	// Send to tile
			p.go_jail();		// Actually in jail
			break;

		case 5:
			cout << "It is your birthday - Collect $10 from"
				<< " each player!" << endl;
			// Collect $10 from each player
			break;

		case 6:
			cout << "Grand Opera Night - Collect $50 from every"
				<< " player for opening night seats" << endl;
			// Collect $50 from each player
			break;

		case 7:
			cout << "Income Tax refund - Collect $20" << endl;
			p.update_balance(20);
			break;

		case 8:
			cout << "Life Insurance Matures = Collect $100" << endl;
			p.update_balance(100);
			break;

		case 9:
			cout << "Pay Hospital Fees of $100" << endl;
			p.update_balance(-100);
			break;

		case 10:
			cout << "Pay School Fees of $50" << endl;
			p.update_balance(-50);
			break;

		case 11:
			cout << "Receive $25 Consultancy Fee" << endl;
			p.update_balance(25);
			break;

		case 12:
			cout << "You are assessed for street repairs - "
				<< "$40 per house, $115 per hotel" << endl;
			// Repairs
			break;

		case 13:
			cout << "You have won second prize in a beauty contest"
				<< " - Collect $10" << endl;
			p.update_balance(10);
			break;

		case 14:
			cout << "You inherit $100" << endl;
			p.update_balance(100);
			break;

		case 15:
			cout << "From sale of stock you get $50" << endl;
			p.update_balance(50);
			break;

		case 16:
			cout << "Holiday Fund matures - Receive $100" << endl;
			p.update_balance(100);
			break;
		}
}

void Deck :: display(ostream & out) const
{
	out << "Name = " << name << endl;
	out << "Type = " << type << endl;
}


