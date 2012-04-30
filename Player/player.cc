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

void Player :: update_position(int dice)
{
	if(!bankcrupt())
	{
		p = (p + dice)%40; 
	}
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
