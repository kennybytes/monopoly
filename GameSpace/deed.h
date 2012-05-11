
/*
 * File: deed.h
 * Name: R4T5
 * Date: 4 May 2012
 * Rev: v0.1
 */


// Abstract Class

// #include "player.h"

#include "celltype.h"
#include "gamespace.h"

#include <iostream>
using namespace std;

#ifndef DEED
#define DEED


class Deed : public GameSpace
{
public:

	Deed(string n = "", CellType t = NON, int r = 0, int p = 0, 
		int o = 0, int mV = 0, bool m = false);

	/* Inherited:
	 * string getName() const;
	 * CellType getType() const;
	 */

	/*	Accessors	*/
	virtual inline int getRent() const
	{	return rent;	}

	virtual inline int getOwner() const
	{	return owner;	}


	/*	Mutators	*/
	virtual inline void setRent(int r)
	{	rent = r;	}

	virtual inline void setOwner(int o)
	{	owner = o;	}


	// void buyDeed(Player pl, int p);
	// void auction(Player pl, int p);

	virtual void display(ostream & out) const = 0;
	// friend ostream& operator<<(ostream& s, const Deed &d);

protected:
	/* Inherited:
 	 * 	int type;
 	 * 	string name;
 	 */

	// Flat price of landing on Deed space
	int rent;
	int price;
	int owner;
	int mortValue;
	bool mortgage;

};

#endif
