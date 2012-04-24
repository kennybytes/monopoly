/*
 *
 * Test driver for 'Property' class
 *
 */


#include <iostream>
using namespace std;

#include "gamespace.h"
#include "container.h"

int main()
{

	GameSpace A;
	A.setName("Test 1");
	A.setPrice(100);
	A.setOwner("Kenny");
	A.setColor(RED);
	cout << A << endl;
	
	

}


