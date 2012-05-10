
#include <iostream>
#include "gamespace.h"

main()
{


	GameSpace * ptr;
	list<GameSpace*> Board;
	ptr = new GameSpace(x, y, z);
	Board.push_back(ptr);

	// As long as BASE is GameSpace, can add to list!
	ptr = new Properties(x, y, z);
	Board.push_back(ptr);

	ptr = new Utility(x, y, z);
	Board.push_back(ptr);


	for(list<GameSpace*>::iterator it = Board.begin();
		it != Board.end(); i++);
	{	ptr = *it;
		cout << *ptr << endl;
	}
}
