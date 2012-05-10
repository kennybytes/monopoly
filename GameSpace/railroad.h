
/* 
 * File: railroad.h
 * Name: R4T5
 * Date: 4 May 2012
 * Rev: v0.1
 */

#ifndef RAILROAD
#define RAILROAD

#include "deed.h"

class Railroad : public Deed
{
	public:
		Railroad(string n = "", CellType t = NON, int r = NON, int p = NON, string o = "");

		virtual void display(ostream & out) const;
		friend ostream & operator<<(ostream & s, const Railroad &r);

	private:
		int Price;
		string Owner;

};


#endif
