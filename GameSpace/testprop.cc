
#include <iostream>
using namespace std;

#include "property.h"
#include "deed.h"
#include "gamespace.h"

int main()
{	int P = 1;

	Property prop;

	cout << prop << endl;

	prop.setName("THY PROPERTY");
	prop.setType(1);

	cout << prop.getName() << endl;
	cout << "Type = " << prop.getType() << endl;
}



