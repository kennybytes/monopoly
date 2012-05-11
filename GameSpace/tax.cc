/* File: tax.cc
 * Name: Kevin Hu
 * Date: 9 May 2012
 * Rev: v0.1
 */

#include <iostream>
#include "tax.h"

// Constructor
Tax :: Tax(string n, int r, int pr)
 : GameSpace(n, TAXES),
   PercentRate(pr), FlatRate(r)
{}


//Display for operator <<
void Tax :: display(ostream & out) const
{
	out << "Name = " << name << endl;
	out << "Type = " << type << endl;
	out << "Tax = " << FlatRate << endl;
	out << "Percent Rent Rate = " << PercentRate << endl;
}


// Does a mathematical operation using PercentRate to deduct
int Tax :: getTax(int money) const
{
	return (int)(-PercentRate * money)/100;
}


// Deducts MONEY flat rate
int Tax :: getTax() const
{
	return -FlatRate;
}

