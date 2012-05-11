/* File: railroad.cc
 * Name: Kevin Hu
 * Date: 9 May 2012
 * Rev: v0.1
 */

#include <iostream>
#include "railroad.h"

/*	Constructor	*/
// Using Deed(Name, Type, Rent, Price, Owner, Mortgage)
Railroad :: Railroad(string n, int r, int p)
 : Deed(n, UTIL, r, p, NON, false) {}

/*	Display Operator	*/
void Railroad :: display(ostream & out) const
{
	out << "Name = " << name << endl;
	out << "Type = " << type << endl;
	out << "Rent = " << rent << endl;
	out << "Price = " << price << endl;
	out << "Owner = " << owner << endl;
	out << "Mortgage = " << mortgage << endl;
}

