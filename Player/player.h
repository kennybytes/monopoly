/* File: player.h 	*
 * Date: April 9th 2012	*
 * By: R4T5		*/

typedef int Position;

#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
using namespace std;

#include <time.h>
#include <cstdlib>
using std::rand;

class Player
{
	public:
		Player();


		/* ~~~~~~~~~~ Accessors ~~~~~~~~~~ */
		// return name
		inline string get_name(void)
		{	return name;	}

		// returns player's balance
		inline int get_balance()
		{	return balance;		}


		// returns player's position on board
		inline int get_position()
		{	return p;	}


		/* ~~~~~~~~~~ Mutators ~~~~~~~~~~ */
		// set player name
		inline void set_name(string n)
		{	name = n;	}

		// Adds BAL to current balance
		inline void update_balance(int bal)
		{	balance += bal;	}


		// Sends the player to a specific position on the board
		inline Position send_to(Position newp)
		{	return p = newp;	}

		// sets jail = 1
		inline void go_jail()
		{	jail = true;	}

		// sets jail = 0
		inline void set_free()	
		{	jail = false;	}

		// Move DICE spaces forward based on dice roll
		Position update_position(int dice);

		// Subtracts RENT from current balance
		void pay_rent(int rent, Player &p);


		/* ~~~~~~~~~~~~ Boolean Operators ~~~~~~~~~ */

		// sets alive = 1
		inline bool set_alive()
		{	return alive = true;	}

		// sets alive = 0
		inline bool set_dead()
		{	return alive = false;	}

		// determines whether player gains or loses
		// a Get Out of Jail Free card
		inline void setJailCard(bool b)
		{	jailCard = b;	}
		
		// indicates whether player is bankrupt	
		inline bool bankrupt()
		{	return (balance <= 0);	}



		/* ~~~~~~~~~~~~~ Actions ~~~~~~~~~~~~~ */
		int roll_dice(void);	// Roll two dice
		int getRollValue(void); // Get the sum of two dice

		virtual void display(ostream & out) const;


	private:
		bool alive;	// If bankrupt, alive == 0
		bool jail;	// If in jail, jail == 1
		bool jailCard;	// Whether player has get out of jail card
		int jailCount;	// Keep track of how many turns in jail
		int p;		// Position on board
		int rrCount;	// How many railroad deeds player has
		int utilCount;	// How many utility deeds player has
		int balance;	// Total balance
		string name;	// player name
		int dice[2];	// Two dice values
};
	

inline ostream& operator<<(ostream& s, const Player &p)
{	p.display(s); return s; 	}




#endif
