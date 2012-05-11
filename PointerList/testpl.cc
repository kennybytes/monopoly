

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


void InitBoard(vector<GameSpace> &GameSpaceList)
{
	ptr = new Misc("Free Parking", 1);
	GameSpaceList.push_back(ptr);
	
	ptr = new Utility("Electricity !", 2);
	GameSpaceList.push_back(ptr);

	ptr = new Railroad("Kenny Railroad", 2);
	GameSpaceList.push_back(ptr);

	ptr = new Tax("Yiheng Tax", 2);
	GameSpaceList.push_back(ptr);

	ptr = new Property("Tep's Office", 2, 1);
	GameSpaceList.push_back(ptr);

	ptr = new Property("Mediterranean Avenue", 2, 60, BROWN, 10, 30, 90, 160, 250, false);

	// Property ( Name, Type, Rent, Price, Owner, Color, House1-4, Hotel, Mortgage 
	GameSpaceList.push_back(ptr);
}



	// cout << GameSpaceList[1].getName() << endl;

	// cout << *ptr.getName() << endl;



	for(vector<GameSpace*>::iterator it = GameSpaceList.begin();
				it!=GameSpaceList.end(); it++)
	{
		ptr = *it;

		cout << *ptr << endl;
	}




	return 0;
}
	

