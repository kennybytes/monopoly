
/* 
 * File: gamespace.h
 * Name: R4T5
 * Date: 4 May 2012
 * Rev: v0.2
 */

#include <string>
#include "celltype.h"

#ifndef GAMESPACE
#define GAMESPACE

using namespace std;
typedef int Position;

class GameSpace
{

public:
	/* Constructors */
	GameSpace(string n = NON, int t = NON);

	/* Accessors */
	virtual string getName() const = 0;  
	virtual CellType getType() const = 0;

	/* Modifiers */
	void setName(string n);
	void setType(CellType t);
	
	/* Operators */
	bool operator==(const GameSpace& other) const;
	bool operator!=(const GameSpace& other) const;

	friend ostream& operator<<(ostream& s, const GameSpace &other);

private:
	/* GameSpace data information */
	string name;	//Name of the block
	CellType type;	//Type of block

};       

#endif
