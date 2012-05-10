/* File: tax.cc
 * Name: Kevin Hu
 * Date: 9 May 2012
 * Rev: v0.1
 */

#include <iostream>
#include "tax.h"

Tax :: Tax(string n, CellType t, int r, int pr)
 : Deed(n, t, r),
   PercentRate(pr)
{}


void Tax :: display(ostream & out) const
{
	// Deed::display(out);
	out << "Name = " << name << endl;
	out << "Type = " << type << endl;
	out << "Rent = " << rent << endl;
	out << "Percent Rent Rate = " << PercentRate << endl;
}

/*
ostream & operator<<(ostream & s, const Tax &t)
{
	t.display(s);
	return s;
}
*/
