

/*
 *
 * PoGameSpaceer List test
 *
 *
 */
#include <iostream>
#include <list>
using namespace std;

#include "gamespace.h"

int main()
{
	GameSpace * ptr;
	list<GameSpace*> GameSpaceList;

	ptr = new GameSpace("Kenny", 1);
	GameSpaceList.push_back(ptr);
	
	ptr = new GameSpace("Kenny2", 2);
	GameSpaceList.push_back(ptr);

	ptr = new GameSpace("Kenny2", 2);
	GameSpaceList.push_back(ptr);

	ptr = new GameSpace("Kenny2", 2);
	GameSpaceList.push_back(ptr);

	ptr = new GameSpace("Kenny2", 2);
	GameSpaceList.push_back(ptr);


	for(list<GameSpace*>::iterator it = GameSpaceList.begin();
				it!=GameSpaceList.end(); it++)
	{
		ptr = *it;

		cout << *ptr << endl;
	}


	
	



	return 0;
}


