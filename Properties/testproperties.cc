
/*
 * File: testproperties.cc
 * Name: R4T5
 * Date: 29 Apr 12
 * Mod: v0.1
 */

#include "properties.h"
#include "container.h"
#include <iostream>

using namespace std;

main()
{
	GameSpace t1;
	Container<GameSpace*> list;

	list.insert(t1);

	cout << list.get(0) << endl;

	//Properties prop;

	//cout << prop << endl;
}
