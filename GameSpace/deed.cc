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

Deed :: Deed(string n, CellType t, int r)
: GameSpace(n, t), rent(r)
{}

/*
int getRent();
{	return rent;	}
*/

/*
void Deed :: rent(PlayerArray PA, int PlayerNumber, int rent)
{
	PA[PlayerNumber].update_balance(-1*rent);
}
*/

/*
void Deed :: display(ostream & out) const
{
	GameSpace::display(out);
	out << "Rent = " << rent << endl;
}

*/


/*
void Deed :: setName(string n)
{
	name = n;
}

void Deed :: setType(CellType t);
{
	type = t;
}
*/

/*
ostream& operator<<(ostream& s, const Deed &d)
{
	d.display(s);
	return s;
}

*/
