/* File: player.cc 	*
 * Date: April 9th 2012	*
 * By: R4T5		*/

#include "player.h"
#include "container.h"

#include <iostream>
using namespace std;

Player :: Player()
{
	jail = false;
	p = 0;
	balance = 1500;
	prop.clear();
	alive = 1;
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

	
void Player :: buy_prop(Properties pr)
{
	//if(pr.value() < balance) 
	prop.insert(pr);
	//else cout << "Not enough money!" <<endl;
	//update_balance(-pr.value());
}
		
bool Player :: bankrupt()
{
	return (balance == 0);
}

void Player :: go_jail()
{
	jail = true;
}

void Player :: set_free()
{
	jail = false;
}
