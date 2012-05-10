
/* File: misc.h
 * Name: R4T5
 * Date: 4 May 2012
 * Rev: v0.1
 */

#ifndef MISC
#define MISC

#include "gamespace.h"

class Misc : public GameSpace
{
	public:
		Misc(string n ="", CellType t = NON);

		virtual void display(ostream & out) const;
		friend ostream& operator<<(ostream & s, const Misc &m);

	private:

};


#endif
