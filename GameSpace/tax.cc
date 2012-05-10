/* File: tax.cc
 * Name: Kevin Hu
 * Date: 9 May 2012
 * Rev: v0.1
 */

#include <iostream>
#include "tax.h"

Tax :: Tax(string n, int r, int pr)
 : Deed(n, TAXES, r),
   PercentRate(pr), FlatRate(r)
{}


void Tax :: display(ostream & out) const
{
	// Deed::display(out);
	out << "Name = " << name << endl;
	out << "Type = " << type << endl;
	out << "Rent = " << rent << endl;
	out << "Percent Rent Rate = " << PercentRate << endl;
}


int Tax :: getRent(int money) const
{

	return PercentRate * money;
	

}

int Tax :: getRent() const
{

	return FlatRate;


}


/*
ostream & operator<<(ostream & s, const Tax &t)
{
	t.display(s);
	return s;
}
*/
