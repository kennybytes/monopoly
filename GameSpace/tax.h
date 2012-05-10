
/* 
 * File: tax.h
 * Name: R4T5
 * Date: 4 May 2012
 * Rev: v0.1
 */

#ifndef TAX
#define TAX

#include "deed.h"

class Tax : public GameSpace
{

	public:
		Tax(string n = "",int r = NON, int pr = NON);

		void display(ostream & out) const;
		
		int getTax(const int money) const;
		int getTax() const;


	private:
		const int PercentRate;
		const int FlatRate;

};

#endif
