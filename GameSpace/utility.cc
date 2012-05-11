/* File: utility.cc
 * Name: Kevin Hu
 * Date: 9 May 2012
 * Rev: v0.1
 */

#include <iostream>
#include "utility.h"

/*	Constructor	*/
// Using Deed(Name, Type, Rent, Price, Owner, Mortgage)
Utility :: Utility(string n, int r, int p)
 : Deed(n, UTIL, r, p, NON, false)
{ }


/*	Display Operator	*/
void Utility :: display(ostream & out) const
{
	out << "Name = " << name << endl;
	out << "Type = " << type << endl;
	out << "Rent = " << rent << endl;
	out << "Price = " << price << endl;
	out << "Owner = " << owner << endl;
	out << "Mortgage = " << mortgage << endl;
}

