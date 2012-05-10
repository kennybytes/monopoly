/* File: utility.cc
 * Name: Kevin Hu
 * Date: 9 May 2012
 * Rev: v0.1
 */

#include <iostream>
#include "utility.h"

Utility :: Utility(string n, int r, int p)
 : Deed(n, UTIL, r, p, 0)
{ }


void Utility :: display(ostream & out) const
{
	out << "Name = " << name << endl;
	out << "Type = " << type << endl;
	out << "Rent = " << rent << endl;
	out << "Price = " << price << endl;
	out << "Owner = " << owner << endl;
}

