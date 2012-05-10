/* File: railroad.cc
 * Name: Kevin Hu
 * Date: 9 May 2012
 * Rev: v0.1
 */

#include <iostream>
#include "railroad.h"

Railroad :: Railroad(string n, int r, int p)
 	: Deed(n, RR, r), Price(p), Owner(0) {}



void Railroad :: display(ostream & out) const
{
	out << "Name = " << name << endl;
	out << "Type = " << type << endl;
	out << "Rent = " << rent << endl;
	out << "Price = " << Price << endl;
	out << "Owner = " << Owner << endl;
}

