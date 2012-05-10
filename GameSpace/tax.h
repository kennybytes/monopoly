
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
		Tax(string n = "",int r = NON, int pr = NON);

		virtual void display(ostream & out) const;
		friend ostream & operator<<(ostream & s, const Tax &t);
		
		int getRent(const int money) const;
		int getRent() const;


	private:
		const int PercentRate;
		const int FlatRate;

};

#endif
