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
}


bool Player :: set_alive()
{	return alive = 1;	}

bool Player :: set_dead()
{	return alive = 0;	}



Position Player :: update_position(int dice)
{
	if(!bankrupt())
	{
		p = (p + dice)%40; 
	}
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

Position Player :: get_position()
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
