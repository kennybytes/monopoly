
/*
 * File: misc.cc
 * Author: Kevin Hu
 * Date Created: 4/21/12
 * Date Modified: 4 May 2012
 * Rev: v0.3
 *
 * File Description:
 *
 *
 *
 */

#include <iostream>
using namespace std;

#include "misc.h"


/*	Constructor	*/
Misc :: Misc(string n, CellType t)
 : GameSpace(n, t)
{
}

/*	Display Operator	*/
void Misc :: display(ostream & out) const
{
	out << "Name = " << name << endl;
	out << "Type = " << type << endl;
}

