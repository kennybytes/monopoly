
/* 
 * File: utility.h
 * Name: R4T5
 * Date: 4 May 2012
 * Rev: v0.1
 */

#ifndef UTILITY
#define UTILITY

#include "deed.h"

class Utility : public Deed
{
	public:
		Utility(string n = "", CellType t = NON, int r = NON, 
						int p = NON, int o = NON);

		virtual void display(ostream & out) const;
		void setOwner(int player);

		// friend ostream & operator<<(ostream & s, const Utility &u);

	private:
		int Price;
		int Owner;

};


#endif
