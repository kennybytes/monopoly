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
	A.setName("Loser");
	A.setPrice(100);
	A.setOwner("Banker");
	A.setColor(RED);
	A.setRent(25);
	A.setHouse1(50);
	A.setHouse2(100);
	A.setHouse3(150);
	A.setHouse4(200);
	A.setHotel(500);
	A.setType(4);
	cout << A << endl;
	
	

}


