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
}

Position Player :: update_position(int dice)
{
	p = p + dice; 
	return p;
}
void Player :: update_balance(int bal)
{
	balance = balance + bal;
}	
/*
void Player :: update_balance(Properties pr)
{
	balance = balance - pr;
}
*/
	
	
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
	prop.insert(pr);
}
		
bool Player :: bankcrupt()
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
