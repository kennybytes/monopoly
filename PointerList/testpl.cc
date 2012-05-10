

/*
 *
 * PoGameSpaceer List test
 *
 *
 */
#include <iostream>
#include <vector>
using namespace std;

#include "gamespace.h"
#include "deed.h"
#include "property.h"
#include "tax.h"
#include "utility.h"
#include "railroad.h"
#include "misc.h"

int main()
{
	GameSpace * ptr;
	vector<GameSpace*> GameSpaceList;

	ptr = new Misc("Kenny", 1);
	GameSpaceList.push_back(ptr);
	
	ptr = new Utility("Kenny2", 2);
	GameSpaceList.push_back(ptr);

	ptr = new Railroad("Kenny2", 2);
	GameSpaceList.push_back(ptr);

	ptr = new Tax("TAX", 2);
	GameSpaceList.push_back(ptr);

	ptr = new Property("PROPERTY", 2, 1);
	GameSpaceList.push_back(ptr);

	for(vector<GameSpace*>::iterator it = GameSpaceList.begin();
				it!=GameSpaceList.end(); it++)
	{
		ptr = *it;

		cout << *ptr << endl;
	}

	return 0;
}


