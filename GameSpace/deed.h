
/*
 * File: deed.h
 * Name: R4T5
 * Date: 4 May 2012
 * Rev: v0.1
 */

#include <string>
#include "celltype.h"
#include "gamespace.h"
#include <iostream>
using namespace std;

#ifndef DEED
#define DEED


typedef int Position;
typedef int Price;
typedef int Color;

class Deed : public GameSpace
{
public:

	Deed(string n = "", CellType t = NON, int r = 0);

	/* Inherited:
	 * string getName() const;
	 * CellType getType() const;
	 */

	// virtual void rent(PlayerArray PA, int PlayerNumber, int rent);

	virtual void display(ostream & out) const;

/*
protected:
	void setName(string n);
	void setType(CellType t);
*/


private:
	/* Inherited:
 	 * 	int type;
 	 * 	string name;
 	 */

	// Flat price of landing on Deed space
	int rent;
	friend ostream& operator<<(ostream& s, const Deed &d);
};

#endif
