
/*
 * File: deed.h
 * Name: R4T5
 * Date: 4 May 2012
 * Rev: v0.1
 */

#include <string>
#include "celltype.h"

#ifndef GAMESPACE
#define GAMESPACE

using namespace std;
typedef int Position;
typedef int Price;
typedef int Color;

class Deed : public GameSpace
{
public:

	Deed(string n = NON, int t = NON, Container d = NON);

	/* Inherited:
	 * string getName() const;
	 * CellType getType() const;
	 */

	virtual void rent(Player P[], int PlayerNumber, int rent) = 0; 

private:
	/* Inherited:
 	 * int type;
 	 * string name;
 	 */

	// Flat price of landing on Deed space
	int rent;

};
