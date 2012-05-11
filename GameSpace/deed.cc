/*
 * File: deed.cc
 * Author: Kevin Hu
 * Date: 4 May 2012
 * Rev: v0.1
 */

#include <iostream>
#include "deed.h"
#include "gamespace.h"

using namespace std;

Deed :: Deed(string n, CellType t, int r, int p, int o, bool m)
: GameSpace(n, t), rent(r), price(p), owner(o), mortgage(m)
{}

/*
void Deed :: buyDeed(Player pl, int p)
{	owner = p;
	pl.update_balance(-price);
}
*/


/*
void Deed :: rent(PlayerArray PA, int PlayerNumber, int rent)
{
	PA[PlayerNumber].update_balance(-1*rent);
}
*/
