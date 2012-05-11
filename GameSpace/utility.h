
/* 
 * File: utility.h
 * Name: R4T5
 * Date: 4 May 2012
 * Rev: v0.1
 */

/* ~~~~~~~~~~~~~~~~~~ *
 * Utility is a derived class from Deed.
 * Its rent is based off the player's roll.
 * The only utilities are one of Electricity Works
 * and Water Works.
 * ~~~~~~~~~~~~~~~~~~ */


#ifndef UTILITY
#define UTILITY

#include "deed.h"

class Utility : public Deed
{
	public:
		Utility(string n = "",int r = NON, int p = NON);

		virtual void display(ostream & out) const;
		
	private:
		// rent is: 4 * roll if only one owned
		//          10 * roll if both owned
};


#endif



