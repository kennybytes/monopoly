
#include <iostream>
using namespace std;

#include "gamespace.h"
#include "misc.h"

int main()
{	int P = 1;

	Misc m("hi",GO);


	cout << m << endl;
	m.setName("Free Parking");
	m.setType(1);

	cout << m.getName() << endl;
	cout << "Type = " << m.getType() << endl;

}



