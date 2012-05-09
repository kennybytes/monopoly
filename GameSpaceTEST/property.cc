
/* File: property.cc
 * Name: R4T5
 * Date: 4 May 2012
 * Rev: v0.1
 */

#include "property.h"

Property :: Property()
{
}

void Property :: display(ostream & out) const
{
	Deed::display(out);
	out << "Rent = " << rent << endl;
	out << "Owner = " << Owner << endl;
	out << "Color = " << Color << endl;
	out << "House 1 Price = " << House1 << endl;
	out << "House 2 Price = " << House2 << endl;
	out << "House 3 Price = " << House3 << endl;
	out << "House 4 Price = " << House4 << endl;
	out << "Hotel Price = " << Hotel << endl;
	out << "Mortage = " << Mortgage << endl;
	
	int Price;
                string Owner;
                int Color;
                int House1;
                int House2;
                int House3;
                int House4;
                int Hotel;
                bool mortgage;
}
