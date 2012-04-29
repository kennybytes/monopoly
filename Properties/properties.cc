
/* File: properties.cc
 * Name: R4T5
 * Date: 15 Apr 12
 * Rev: v0.2
 */

#include <string>
#include "celltype.h"
#include "gamespace.h"
#include "properties.h"

/* Constructor & Destructor */
Properties :: Properties()
{
	GameSpace t1;

	t1.setName("Go");
	t1.setType(10);
	list.insert(t1);

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
	t1.setType(4);
	list.insert(t1);
	
	t1.setName("Community Chest");
	t1.setType(1);
	list.insert(t1);

	t1.setName("Baltic Avenue");
	t1.setPrice(60);
	t1.setColor(BROWN);
	t1.setRent(4);
	t1.setHouse1(20);
	t1.setHouse2(60);
	t1.setHouse3(180);
	t1.setHouse4(320);
	t1.setHotel(450);
	t1.setType(4);
	list.insert(t1);

	t1.setName("Income Tax");
	t1.setType(5);
	list.insert(t1);

	t1.setName("Reading Railroad");
	t1.setPrice(200);
	t1.setRent(25);
	t1.setType(3);
	list.insert(t1);

	t1.setName("Oriental Avenue");
	t1.setPrice(100);
	t1.setColor(SKYBLUE);
	t1.setRent(6);
	t1.setHouse1(30);
	t1.setHouse2(90);
	t1.setHouse3(270);
	t1.setHouse4(400);
	t1.setHotel(550);
	t1.setType(4);
	list.insert(t1);

	t1.setName("Chance");
	t1.setType(0);
	list.insert(t1);

	t1.setName("Vermont Avenue");
	t1.setPrice(100);
	t1.setColor(SKYBLUE);
	t1.setRent(6);
	t1.setHouse1(30);
	t1.setHouse2(90);
	t1.setHouse3(270);
	t1.setHouse4(400);
	t1.setHotel(550);
	t1.setType(4);
	list.insert(t1);

	t1.setName("Connecticut Avenue");
	t1.setPrice(120);
	t1.setColor(SKYBLUE);
	t1.setRent(8);
	t1.setHouse1(40);
	t1.setHouse2(100);
	t1.setHouse3(300);
	t1.setHouse4(450);
	t1.setHotel(600);
	t1.setType(4);
	list.insert(t1);

	t1.setName("Jail/Just Visiting");
	t1.setType(9);
	list.insert(t1);

	t1.setName("St. Charles Place");
	t1.setPrice(140);
	t1.setColor(INDIGO);
	t1.setRent(10);
	t1.setHouse1(50);
	t1.setHouse2(150);
	t1.setHouse3(450);
	t1.setHouse4(625);
	t1.setHotel(750);
	t1.setType(4);
	list.insert(t1);

	t1.setName("Electrical Company");
	t1.setPrice(150);
	t1.setType(2);
	list.insert(t1);

	t1.setName("States Avenue");
	t1.setPrice(140);
	t1.setColor(INDIGO);
	t1.setRent(10);
	t1.setHouse1(50);
	t1.setHouse2(150);
	t1.setHouse3(450);
	t1.setHouse4(625);
	t1.setHotel(750);
	t1.setType(4);
	list.insert(t1);

	t1.setName("Virginia Avenue");
	t1.setPrice(160);
	t1.setColor(INDIGO);
	t1.setRent(12);
	t1.setHouse1(60);
	t1.setHouse2(180);
	t1.setHouse3(500);
	t1.setHouse4(700);
	t1.setHotel(900);
	t1.setType(4);
	list.insert(t1);

	t1.setName("Pennsylvania Railroad");
	t1.setPrice(200);
	t1.setRent(25);
	t1.setType(3);
	list.insert(t1);

	t1.setName("St. James Place");
	t1.setPrice(180);
	t1.setColor(ORANGE);
	t1.setRent(14);
	t1.setHouse1(70);
	t1.setHouse2(200);
	t1.setHouse3(550);
	t1.setHouse4(750);
	t1.setHotel(950);
	t1.setType(4);
	list.insert(t1);

	t1.setName("Community Chest");
	t1.setType(1);
	list.insert(t1);

	t1.setName("Tennessee Avenue");
	t1.setPrice(180);
	t1.setColor(ORANGE);
	t1.setRent(14);
	t1.setHouse1(70);
	t1.setHouse2(200);
	t1.setHouse3(550);
	t1.setHouse4(750);
	t1.setHotel(950);
	t1.setType(4);
	list.insert(t1);

	t1.setName("New York Avenue");
	t1.setPrice(200);
	t1.setColor(ORANGE);
	t1.setRent(16);
	t1.setHouse1(80);
	t1.setHouse2(220);
	t1.setHouse3(600);
	t1.setHouse4(800);
	t1.setHotel(1000);
	t1.setType(4);
	list.insert(t1);

	t1.setName("Free Parking");
	t1.setType(7);
	list.insert(t1);

	t1.setName("Kentucky Avenue");
	t1.setPrice(220);
	t1.setColor(RED);
	t1.setRent(18);
	t1.setHouse1(90);
	t1.setHouse2(250);
	t1.setHouse3(700);
	t1.setHouse4(875);
	t1.setHotel(1050);
	t1.setType(4);
	list.insert(t1);

	t1.setName("Chance");
	t1.setType(0);
	list.insert(t1);

	t1.setName("Indiana Avenue");
	t1.setPrice(220);
	t1.setColor(RED);
	t1.setRent(18);
	t1.setHouse1(90);
	t1.setHouse2(250);
	t1.setHouse3(700);
	t1.setHouse4(875);
	t1.setHotel(1050);
	t1.setType(4);
	list.insert(t1);

	t1.setName("Illinois Avenue");
	t1.setPrice(240);
	t1.setColor(RED);
	t1.setRent(20);
	t1.setHouse1(100);
	t1.setHouse2(300);
	t1.setHouse3(750);
	t1.setHouse4(925);
	t1.setHotel(1100);
	t1.setType(4);
	list.insert(t1);

	t1.setName("B&O Railroad");
	t1.setPrice(200);
	t1.setRent(25);
	t1.setType(3);
	list.insert(t1);

	t1.setName("Atlantic Avenue");
	t1.setPrice(260);
	t1.setColor(YELLOW);
	t1.setRent(22);
	t1.setHouse1(110);
	t1.setHouse2(330);
	t1.setHouse3(800);
	t1.setHouse4(975);
	t1.setHotel(1150);
	t1.setType(4);
	list.insert(t1);

	t1.setName("Ventnor Avenue");
	t1.setPrice(260);
	t1.setColor(YELLOW);
	t1.setRent(22);
	t1.setHouse1(110);
	t1.setHouse2(330);
	t1.setHouse3(800);
	t1.setHouse4(975);
	t1.setHotel(1150);
	t1.setType(4);
	list.insert(t1);

	t1.setName("Water Works");
	t1.setPrice(150);
	t1.setType(2);
	list.insert(t1);

	t1.setName("Marvin Avenue");
	t1.setPrice(280);
	t1.setColor(YELLOW);
	t1.setRent(24);
	t1.setHouse1(120);
	t1.setHouse2(360);
	t1.setHouse3(850);
	t1.setHouse4(1025);
	t1.setHotel(1200);
	t1.setType(4);
	list.insert(t1);

	t1.setName("Go to Jail");
	t1.setType(8);
	list.insert(t1);

	t1.setName("Pacific Avenue");
	t1.setPrice(300);
	t1.setColor(GREEN);
	t1.setRent(26);
	t1.setHouse1(130);
	t1.setHouse2(390);
	t1.setHouse3(900);
	t1.setHouse4(1100);
	t1.setHotel(1275);
	t1.setType(4);
	list.insert(t1);

	t1.setName("North Carolina Avenue");
	t1.setPrice(300);
	t1.setColor(GREEN);
	t1.setRent(26);
	t1.setHouse1(130);
	t1.setHouse2(390);
	t1.setHouse3(900);
	t1.setHouse4(1100);
	t1.setHotel(1275);
	t1.setType(4);
	list.insert(t1);

	t1.setName("Community Chest");
	t1.setType(1);
	list.insert(t1);

	t1.setName("Pennsylvania Avenue");
	t1.setPrice(320);
	t1.setColor(GREEN);
	t1.setRent(28);
	t1.setHouse1(150);
	t1.setHouse2(450);
	t1.setHouse3(1000);
	t1.setHouse4(1200);
	t1.setHotel(1400);
	t1.setType(4);
	list.insert(t1);

	t1.setName("Short Line");
	t1.setPrice(200);
	t1.setRent(25);
	t1.setType(3);
	list.insert(t1);

	t1.setName("Chance");
	t1.setType(0);
	list.insert(t1);

	t1.setName("Park Place");
	t1.setPrice(350);
	t1.setColor(BLUE);
	t1.setRent(35);
	t1.setHouse1(175);
	t1.setHouse2(500);
	t1.setHouse3(1100);
	t1.setHouse4(1300);
	t1.setHotel(1500);
	t1.setType(4);
	list.insert(t1);

	t1.setName("Luxury Tax");
	t1.setRent(75);
	t1.setType(6);
	list.insert(t1);

	t1.setName("Boardwalk");
	t1.setPrice(400);
	t1.setColor(BLUE);
	t1.setRent(50);
	t1.setHouse1(200);
	t1.setHouse2(600);
	t1.setHouse3(1400);
	t1.setHouse4(1700);
	t1.setHotel(2000);
	t1.setType(4);
	list.insert(t1);
}

Properties :: ~Properties()
{
	
}

/* Accessor */
string Properties :: getName(Position p) const
{
	return list.get(p).getName();
}

int Properties :: getPrice(Position p) const
{
	return list.get(p).getPrice();
}

string Properties :: getOwner(Position p) const
{
	return list.get(p).getOwner();
}

int Properties :: getColor(Position p) const
{
	return list.get(p).getColor();
}

int Properties :: getRent(Position p) const
{
	return list.get(p).getRent();
}

int Properties :: getHouse1(Position p) const
{
	return list.get(p).getHouse1();
}

int Properties :: getHouse2(Position p) const
{
	return list.get(p).getHouse2();
}

int Properties :: getHouse3(Position p) const
{
	return list.get(p).getHouse3();
}

int Properties :: getHouse4(Position p) const
{
	return list.get(p).getHouse4();
}

int Properties :: getHotel(Position p) const
{
	return list.get(p).getHotel();
}

bool Properties :: getMort(Position p) const
{
	return list.get(p).getMort();
}

