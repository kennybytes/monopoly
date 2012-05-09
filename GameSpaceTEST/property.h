
/*
 * File: property.h
 * Name: R4T5
 * Date: 4 May 2012
 * Rev: v0.1
 */

#ifndef PROPERTY
#define PROPERTY

class Property : public Deed
{
	public:
		Property();
		virtual void display(ostream & out) const;

	private:
		int Price;
		string Owner;
		int Color;
		int House1;
		int House2;
		int House3;
		int House4;
		int Hotel;
		bool mortgage;
};


#endif
