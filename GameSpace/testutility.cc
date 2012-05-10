/*
 *
 *
 * testutility.cc
 *
 */

#include "utility.h"

int main()
{
	Utility u("Water Works", 20, 500);
	u.display(cout);

	u.setOwner(1);
	u.display(cout);

	return 0;

}

