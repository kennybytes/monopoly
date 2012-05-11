/* File: player.cc 	*
 * Date: April 9th 2012	*
 * By: R4T5		*/

#include "player.h"

#include <iostream>
using namespace std;

Player :: Player()
{
	jail = false;
	p = 0;
	balance = 1500;
	alive = 1;
	jailCard = false;
	jailCount = 0;
	rrCount = 0;
	utilCount = 0;
	name = "unnamed";
}
// not needed due to constructor
bool Player :: set_alive()
{	return alive = 1;	}

bool Player :: set_dead()
{	return alive = 0;	}

void Player :: set_name(string n)
{
	name = n;
}
string Player :: get_name(void)
{
	return name;
}

Position Player :: update_position(int dice)
{
	if(!bankrupt())
	{
		p = (p + dice) % 20; 
	}
	return p;
}

Position Player :: send_to(Position newp)
{
	p = newp;
	return p;
}

void Player :: update_balance(int bal)
{
	balance = balance + bal;
}	
	
int Player :: get_balance()
{
	return balance;
}

int Player :: get_position()
{
	return p;
}

bool Player :: bankrupt()
{
	return (balance <= 0);
}

void Player :: go_jail()
{
	jail = true;
}

void Player :: set_free()
{
	jail = false;
}

int Player :: roll_dice(void)
{
	dice[0] = (rand()%6) + 1;
	dice[1] = (rand()%6) + 1;

	if( dice[0] == dice[1] )
		dice[2] = 1;
	else
		dice[2] = 0;
	
	return dice[2];
}
int Player:: getRollValue(void)
{

	return dice[0] + dice[1];
}


void Player :: display(ostream & out) const
{
	// Deed::display(out);
	out << name << endl;
	out << "Position = " << p << endl;
	out << "Balance = " << balance << endl;
	out << "In Jail? = " << jail << endl;
	out << "Alive? = " << alive << endl;
	out << "Get Out Of Jail Free Card? = " << jailCard << endl;
	out << "Turn in Jail: " << jailCount << endl;
	out << "Railroad Count = " << rrCount << endl;
	out << "Utility Count = " << utilCount << endl;
}
