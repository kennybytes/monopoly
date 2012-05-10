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
	Tax t("Luxury Tax",100, 10);
	t.display(cout);


	cout << t.getTax(105) << endl;
	
	cout << t << endl;
	return 0;
}

