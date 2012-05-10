
/* 
 * File: tax.h
 * Name: R4T5
 * Date: 4 May 2012
 * Rev: v0.1
 */

#ifndef TAX
#define TAX

#include "deed.h"

class Tax : public Deed
{
	public:
		Tax(string n = "", CellType t = NON, int r = NON, int pr = NON);

		virtual void display(ostream & out) const;
		friend ostream & operator<<(ostream & s, const Tax &t);

	private:
		int PercentRate;
};


#endif
