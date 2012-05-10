

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

	ptr = new Property("Mediterranean Avenue", 4, 2, 60, "ME!", BROWN, 10, 30, 90, 160, 250, false);
	GameSpaceList.push_back(ptr);

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
	// Property ( Name, Type, Rent, Price, Owner, Color, House1-4, Hotel, Mortgage 
	

/*
	t1.setName("Mediterranean Avenue");
	t1.setPrice(60);
	t1.setOwner("Banker");
	t1.setColor(BROWN);
	t1.setRent(2);
	t1.setHouse1(10);
	t1.setHouse2(30);
	t1.setHouse3(90);
	t1.setHouse4(160);
	t1.setHotel(250);
	t1.setMortgage(false);
	t1.setType(4);
	list.insert(t1);
	t1 = clear_gamespace(t1);
	
	t1.setName("Community Chest");
	t1.setType(1);
	list.insert(t1);
	t1 = clear_gamespace(t1);

	t1.setName("Baltic Avenue");
	t1.setPrice(60);
	t1.setColor(BROWN);
	t1.setRent(4);
	t1.setHouse1(20);
	t1.setHouse2(60);
	t1.setHouse3(180);
	t1.setHouse4(320);
	t1.setHotel(450);
	t1.setMortgage(false);
	t1.setType(4);
	list.insert(t1);
	t1 = clear_gamespace(t1);

	t1.setName("Income Tax");
	t1.setType(5);
	list.insert(t1);
	t1 = clear_gamespace(t1);

	t1.setName("Reading Railroad");
	t1.setPrice(200);
	t1.setRent(25);
	t1.setType(3);
	list.insert(t1);
	t1 = clear_gamespace(t1);

	t1.setName("Oriental Avenue");
	t1.setPrice(100);
	t1.setColor(SKYBLUE);
*/
