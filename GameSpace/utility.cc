/* File: utility.cc
 * Name: Kevin Hu
 * Date: 9 May 2012
 * Rev: v0.1
 */

#include <iostream>
#include "utility.h"

Utility :: Utility(string n, CellType t, int r, int p, string o)
 : Deed(n, t, r),
   Price(p), Owner(o)
{}


void Utility :: display(ostream & out) const
{
	// Deed::display(out);
	out << "Name = " << name << endl;
	out << "Type = " << type << endl;
	out << "Rent = " << rent << endl;
	out << "Price = " << Price << endl;
	out << "Owner = " << Owner << endl;
}

/*
ostream & operator<<(ostream & s, const Utility &u)
{
	u.display(s);
	return s;
}
*/
