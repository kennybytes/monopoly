/* File: player.cc 	*
 * Date: April 9th 2012	*
 * By: R4T5		*/

#include "player.h"
#include <iostream>
using namespace std;

Position Player :: update_position(int dice)
{
	p = p + dice; 
	return p;
}
void Player :: update_balance(int bal)
{
	balance = balance + bal;
}	
void Player :: update_balance(Properties pr)
{
	balance = balance - pr.getvalue();
}
	
	
int Player :: getbalance()
{
	return balance;
}
	
Properties Player :: sellpro()
{
	update_balance(int);
}
		
void Player :: buypro(Properties pr)
{
	pro = pro + pr;	
	update_balance(int);
}
		
bool Player :: bankcrupt()
{
	return (balance == 0);
}

