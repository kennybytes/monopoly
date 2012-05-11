

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

//prototype
void InitBoard(vector<GameSpace*> &GameSpaceList);

int main()
{
	GameSpace * ptr;
	vector<GameSpace*> GameSpaceList;
	
	InitBoard(GameSpaceList);
}

void InitBoard(vector<GameSpace*> &GameSpaceList)
{
	GameSpace * ptr;

	// Position: 0
	ptr = new Misc("GO!", GO);
	GameSpaceList.push_back(ptr);


	// Position: 1
	ptr = new Property("Mediterranean Avenue", 2, 60, BROWN, 
				10, 30, 90, 160, 250);
	GameSpaceList.push_back(ptr);


	// Position: 2
	//ptr = new Deck("Community Chest", COMMUNITY_CHEST);
	//GameSpaceList.push_back(ptr);


	// Position: 3
	ptr = new Property("Baltic Avenue", 4, 60, BROWN, 
				20, 60, 180, 320, 450);
	GameSpaceList.push_back(ptr);


	// Position: 4
	ptr = new Tax("Income Tax", 200, 10);
	GameSpaceList.push_back(ptr);


	// Position: 5
	ptr = new Railroad("Reading Railroad", 25, 200);
	GameSpaceList.push_back(ptr);

	// Position: 6
	ptr = new Property("Oriental Avenue", 6, 100, SKYBLUE,
				30, 90, 270, 400, 550);
	GameSpaceList.push_back(ptr);



	// Position: 7
	//ptr = new Deck("Chance", CHANCE);
	//GameSpaceList.push_back(ptr);


	// Position: 8
	ptr = new Property("Vermont Avenue", 6, 100, SKYBLUE,
				30, 90, 270, 400, 550);
	GameSpaceList.push_back(ptr);



	// Position: 9
	ptr = new Property("Vermont Avenue", 8, 120, SKYBLUE,
				40, 100, 300, 450, 600);
	GameSpaceList.push_back(ptr);


	// Position: 10
	ptr = new Misc("Jail / Just Visiting", JAIL);
	GameSpaceList.push_back(ptr);




	// Position: 11
	ptr = new Property("St. Charles Place", 10, 140, INDIGO,
				50, 150, 450, 625, 750);
	GameSpaceList.push_back(ptr);



	// Position: 12
	ptr = new Utility("Electrical Company", 100, 150);
	GameSpaceList.push_back(ptr);




	// Position: 13
	ptr = new Property("States Avenue", 10, 140, INDIGO,
				50, 150, 450, 625, 750);
	GameSpaceList.push_back(ptr);


	// Position: 14
	ptr = new Property("Virginia Avenue", 12, 160, INDIGO, 
				60, 180, 500, 700, 900);
	GameSpaceList.push_back(ptr);

	// Position: 15
	ptr = new Railroad("Pennsylvania Railroad", 25, 200);
	GameSpaceList.push_back(ptr);

	// Position: 16
	ptr = new Property("St. James Place", 14, 180, ORANGE,
				70, 200, 550, 750, 950);
	GameSpaceList.push_back(ptr);

	// Position: 17
	//ptr = new Deck("Community Chest", COMMUNITY_CHEST);
	//GameSpaceList.push_back(ptr);

	// Position: 18
	ptr = new Property("Tennessee Avenue", 14, 180, ORANGE,
				70, 200, 550, 750, 950);
	GameSpaceList.push_back(ptr);

	// Position: 19
	ptr = new Property("New York Avenue", 16, 200, ORANGE,
				80, 220, 600, 800, 1000);
	GameSpaceList.push_back(ptr);



	// Position: 20
	ptr = new Misc("Free Parking", FREE_PARKING);	 
	GameSpaceList.push_back(ptr);



	// Position: 21
	ptr = new Property("Kentucky Avenue", 18, 220, RED,
				90, 250, 700, 875, 1050);
	GameSpaceList.push_back(ptr);

	// Position: 22
	//ptr = new Deck("Chance", CHANCE);
	//GameSpaceList.push_back(ptr);





	// Position: 23
	ptr = new Property("Indiana Avenue", 18, 220, RED,
				90, 250, 700, 875, 1050);
	GameSpaceList.push_back(ptr);


	// Position: 24
	ptr = new Property("Illinous Avenus", 20, 240, RED,
				100, 300, 750, 925, 1100);
	GameSpaceList.push_back(ptr);


	// Position: 25
	ptr = new Railroad("B&O Railroad", 25, 200);
	GameSpaceList.push_back(ptr);

	// Position: 26
	ptr = new Property("Atlantic Avenue", 22, 260, YELLOW,
				110, 330, 800, 975, 1150);
	GameSpaceList.push_back(ptr);


	// Position: 27
	ptr = new Property("Ventnor Avenue", 22, 260, YELLOW,
				110, 330, 800, 975, 1150);
	GameSpaceList.push_back(ptr);

	// Position: 28
	ptr = new Utility("Water Works", 100, 150);
	GameSpaceList.push_back(ptr);


	// Position: 29
	ptr = new Property("Marvin Avenue", 24, 280, YELLOW,
				120, 360, 850, 1025, 1200);
	GameSpaceList.push_back(ptr);

	// Position: 30
	ptr = new Misc("GO TO JAIL", GO_TO_JAIL);
	GameSpaceList.push_back(ptr);

	// Position: 31
	ptr = new Property("Pacific Avenue", 26, 300, GREEN,
				130, 390, 900, 1100, 1275);
	GameSpaceList.push_back(ptr);

	// Position: 32
	ptr = new Property("North Carolina Avenue", 26, 300, GREEN,
				130, 390, 900, 1100, 1275);
	GameSpaceList.push_back(ptr);


	// Position: 33
	//ptr = new Deck("Community Chest", COMMUNITY_CHEST);
	//GameSpaceList.push_back(ptr);


	// Position: 34
	ptr = new Property("Pennsylvania Avenue", 28, 320, GREEN,
				150, 450, 1000, 1200, 1400);
	GameSpaceList.push_back(ptr);

	// Position: 35
	ptr = new Railroad("Short Line", 25, 200);
	GameSpaceList.push_back(ptr);

	// Position: 36
	//ptr = new Deck("Chance", CHANCE);
	//GameSpaceList.push_back(ptr);


	// Position: 37
	ptr = new Property("Virginia Hinshaw's Place", 35, 350, BLUE,
				175, 500, 1100, 1300, 1500);
	GameSpaceList.push_back(ptr);


	// Position: 38
	ptr = new Tax("Luxury Tax", 75, 15);
	GameSpaceList.push_back(ptr);


	// Position: 39
	ptr = new Property("Tep's Office", 150, 1000, BLUE,
				300, 800, 1800, 2000, 2500);
	GameSpaceList.push_back(ptr);





	int i = 0;
	for(vector<GameSpace*>::iterator it = GameSpaceList.begin();
				it!=GameSpaceList.end(); it++)
	{

		ptr = *it;

		// cout << it << endl;
		cout << (*GameSpaceList[i]).getType() << endl << endl;
	

		// *ptr << endl;
		i++;
	}

}
	

