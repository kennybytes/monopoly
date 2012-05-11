
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
		Utility(string n = "",int r = NON, int p = NON, int mV = NON);

		virtual void display(ostream & out) const;
		
	private:
		// rent is: 4 * roll if only one owned
		//          10 * roll if both owned
};


#endif



