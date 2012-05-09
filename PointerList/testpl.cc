

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

	GameSpace gs = *ptr;

	for(vector<GameSpace*>::iterator it = GameSpaceList.begin();
				it!=GameSpaceList.end(); it++)
	{
		ptr = *it;
		gs = *ptr;

		cout << *ptr << endl;

		cout << gs.getName() << endl; // also works for deed!

	}



	return 0;
}


