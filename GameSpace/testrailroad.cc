
#include <iostream>
using namespace std;

#include "gamespace.h"
#include "deed.h"
#include "railroad.h"

int main()
{
	Railroad u;


	cout << u << endl;
	u.setName("Free Parking");
	u.setType(1);
	u.setRent(7);
	

	cout << u.getName() << endl;
	cout << "Type = " << u.getType() << endl;
	cout << "Rent = " << u.getRent() << endl;

}



