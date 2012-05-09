

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

int main()
{
	GameSpace * ptr;
	vector<GameSpace*> GameSpaceList;

	ptr = new GameSpace("Kenny", 1);
	GameSpaceList.push_back(ptr);
	
	ptr = new GameSpace("Kenny2", 2);
	GameSpaceList.push_back(ptr);

	ptr = new GameSpace("Kenny2", 2);
	GameSpaceList.push_back(ptr);

	ptr = new GameSpace("Kenny2", 2);
	GameSpaceList.push_back(ptr);

	ptr = new Deed("Kennydeed", 2, 1);
	GameSpaceList.push_back(ptr);

	ptr = new Property("Kennyprop", 2, 1);
	GameSpaceList.push_back(ptr);

	for(vector<GameSpace*>::iterator it = GameSpaceList.begin();
				it!=GameSpaceList.end(); it++)
	{
		ptr = *it;
		gs = *ptr;

		cout << *ptr << endl;
	}

	return 0;
}


