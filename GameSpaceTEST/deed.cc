/* File Name: deed.cc
 * Author: Kevin Hu
 */

#include <iostream>
using namespace std;

Deed :: Deed
	(string n, int t, Container d)
: GameSpace(n, t), deck(d)
{}

void Deed :: pay(PlayerArray PA, int PlayerNumber, int rent);
{
	PA[PlayerNumber].update_balance(-1*rent);
}




