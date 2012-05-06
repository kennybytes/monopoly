/*
 * File: deed.cc
 * Author: Kevin Hu
 * Date: 4 May 2012
 * Rev: v0.1
 */

#include <iostream>
#include "deed.h"

using namespace std;

Deed :: Deed(string n, int t, Container d)
: GameSpace(n, t), deck(d)
{}

void Deed :: pay(PlayerArray PA, int PlayerNumber, int rent)
{
	PA[PlayerNumber].update_balance(-1*rent);
}
