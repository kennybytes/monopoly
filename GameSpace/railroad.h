
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
		Railroad(string n = "Railroad", int r = NON, int p = NON, int mV = NON);

		void display(ostream & out) const;

	private:
};


#endif
