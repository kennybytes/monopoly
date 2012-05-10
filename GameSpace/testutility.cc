/*
 *
 *
 * testutility.cc
 *
 */

#include "utility.h"

int main()
{
	Utility u;
	u.setName("Water Works");
	u.setOwner(1);

	u.display(cout);
	return 0;

}

