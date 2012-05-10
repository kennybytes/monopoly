
/*
 * File: deed.h
 * Name: R4T5
 * Date: 4 May 2012
 * Rev: v0.1
 */


// Abstract Class

#include <string>
#include "celltype.h"
#include "gamespace.h"
#include <iostream>
using namespace std;

#ifndef DEED
#define DEED


class Deed : public GameSpace
{
public:

	Deed(string n = "", CellType t = NON, int r = 0);

	/* Inherited:
	 * string getName() const;
	 * CellType getType() const;
	 */

	virtual void display(ostream & out) const = 0;
	// friend ostream& operator<<(ostream& s, const Deed &d);

protected:
	/* Inherited:
 	 * 	int type;
 	 * 	string name;
 	 */

	// Flat price of landing on Deed space
	int rent;

};

#endif
