/*
 *
 *
 * TaxTest.cc
 *
 *
 */


#include "tax.h"

int main()
{


	Tax t("Luxury Tax", T, 100, 10);
	t.setName("Luxury Tax");
	t.display(cout);

	return 0;
}

