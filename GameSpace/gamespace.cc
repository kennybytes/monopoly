
/*
 * File: gamespace.cc
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

#include "gamespace.h"


/*	Constructor	*/


GameSpace :: GameSpace(string n, CellType t)
 : name(n), type(t)
{
}



/*	Accessors	*/

string GameSpace::getName() const
{
	return name;
}

CellType GameSpace::getType() const
{	return type;
}


/*	Mutators	*/
void GameSpace::setName(string n)
{
	name = n;
}

void GameSpace::setType(CellType t)
{
	type = t;
}


/*	Operators	*/




/*
bool GameSpace::operator==(const GameSpace& other) const
{
	//Don't need the comparison operators
	return 1;
}


bool GameSpace::operator!=(const GameSpace& other) const
{
	//Don't need the comparison operators
	return 1;
}

void GameSpace :: display(ostream & out) const
{
	out << "Name = " << name << endl;
	out << "Type = " << type << endl;
}


//	Output operator	
ostream& operator<<(ostream& s, const GameSpace &gs)
{
	gs.display(s);
	// s << "Name = " << gs.name << endl;
	// s << "Type = " << gs.type << endl;

	return s;
}

*/
