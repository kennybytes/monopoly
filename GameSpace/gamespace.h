
/* 
 * File: gamespace.h
 * Name: R4T5
 * Date: 4 May 2012
 * Rev: v0.2
 */

#ifndef GAMESPACE
#define GAMESPACE

#include "celltype.h"
#include <iostream>
using namespace std;

class GameSpace
{

public:
	/* Constructors */
	GameSpace(string n = " ", int t = NON );

	/* Accessors */
	virtual string getName() const;  
	virtual CellType getType() const;

	/* Modifiers */
	void setName(string n);
	void setType(CellType t);
	
	/* Operators */
	// bool operator==(const GameSpace& other) const;
	// bool operator!=(const GameSpace& other) const;

	virtual void display(ostream & out) const = 0;


protected:
	/* GameSpace data information */
	string name;	//Name of the block
	CellType type;	//Type of block

};       

	inline ostream& operator<<(ostream& s, const GameSpace &gs)
	{	gs.display(s); return s; 	}

#endif
