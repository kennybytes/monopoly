
/* 
 * File: gamespace.h
 * Name: R4T5
 * Date: 4 May 2012
 * Rev: v0.2
 */

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~*
 * GameSpace is an abstract base class.
 * It is used to derive all classes, which are
 * types of block across the game board
 * ~~~~~~~~~~~~~~~~~~~~~~~~~ */

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
	inline virtual string getName() const
	{	return name;	}  

	inline virtual CellType getType() const
	{	return type;	}  

	/* Modifiers */
	inline virtual void setName(string n)
	{	name = n;	}

	inline virtual void setType(CellType t)
	{	type = t;	}

	/*	Derived functions	*/
	virtual int getOwner() const
	{}

	inline virtual void setOwner(int player)
	{}

	inline virtual int getTax(int tax)
	{}
	
	inline virtual int getTax()
	{}

	inline virtual int getPrice()
	{}

	/* Operators */
	virtual void display(ostream & out) const = 0;
	
	
   protected:
	/* GameSpace data information */
	string name;	//Name of the block
	CellType type;	//Type of block
};       

	/* Operator used depending on which derived class of
	 * GameSpace is used, thanks to virtual keyword */
	inline ostream& operator<<(ostream& s, const GameSpace &gs)
	{	gs.display(s); return s; 	}

#endif
