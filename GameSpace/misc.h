
/* File: misc.h
 * Name: R4T5
 * Date: 4 May 2012
 * Rev: v0.1
 */


/* ~~~~~~~~~~~~~~~~~~~ *
 * MISC gamespaces do not hold any more functions than GameSpace functions.
 * They are derived simply for the case of keeping the GameSpace class
 * abstract. Examples are JAIL and FREE PARKING
 * ~~~~~~~~~~~~~~~~~~~ */

#include "gamespace.h"

#ifndef MISC
#define MISC

class Misc : public GameSpace
{
	public:
		Misc(string n = "", CellType t = NON);

		virtual void display(ostream & out) const;
		// friend ostream& operator<<(ostream & s, const Misc &m);
		
	private:

};


#endif
