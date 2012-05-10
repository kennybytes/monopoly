
#include <iostream>
using namespace std;

#include "property.h"
#include "deed.h"
#include "gamespace.h"

int main()
{
	Property prop;

	cout << prop << endl;

	prop.setName("THY PROPERTY");
	prop.setType(1);
	prop.setOwner(1);

	cout << prop.getName() << endl;
	cout << "Type = " << prop.getType() << endl;
	cout << "Owner = " << prop.getOwner() << endl;
}



