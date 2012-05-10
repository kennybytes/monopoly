/*
* File: property.h
* Name: R4T5
* Date: 4 May 2012
* Rev: v0.1
*/

#ifndef PROPERTY
#define PROPERTY

#include "deed.h"
#include "color.h"

class Property : public Deed
{
	public:
		Property(string n = "Property", int r = NON, int p = NON, int c = NON, int h1 = NON, int h2 = NON, int h3 = NON, int h4 = NON, int h = NON, bool m = 0);

		virtual void display(ostream & out) const;

	private:
		int color;
		int house1;
		int house2;
		int house3;
		int house4;
		int hotel;
		bool mortgage;
};


#endif
