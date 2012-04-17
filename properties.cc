
/* File: properties.cc
 * Name: R4T5
 * Date: 15 Apr 12
 * Rev: v0.1
 */

/* Constructor & Destructor */
Properties :: Properties()
{
	const int t1.owner = 0;		// 0 is banker
	const int t1.house = 0;		// no houses at begin
	const bool t1.mort = false;	// no mortgages at begin

	t1.name = "Go";
	t1.price = 0;
	t1.color = 0;
	t1.rent = 0;
	t1.house1 = 0;
	t1.house2 = 0;
	t1.house3 = 0;
	t1.house4 = 0;
	t1.hotel = 0;
	list.insert(t1);

	t1.name = "Mediterranean Avenue";
	t1.price = 60;
	t1.color = 1;
	t1.rent = 2;
	t1.house1 = 10;
	t1.house2 = 30;
	t1.house3 = 90;
	t1.house4 = 160;
	t1.hotel = 250;
	list.insert(t1);
	
	t1.name = "Community Chest";
	t1.price = 0;
	t1.color = 0;
	t1.rent = 0;
	t1.house1 = 0;
	t1.house2 = 0;
	t1.house3 = 0;
	t1.house4 = 0;
	t1.hotel = 0;
	list.insert(t1);

	t1.name = "Baltic Avenue";
	t1.price = 60;
	t1.color = 1;
	t1.rent = 4;
	t1.house1 = 20;
	t1.house2 = 60;
	t1.house3 = 180;
	t1.house4 = 320;
	t1.hotel = 450;
	list.insert(t1);

	t1.name = "Income Tax";
	t1.price = 200;
	t1.color = 0;
	t1.rent = 0;
	t1.house1 = 0;
	t1.house2 = 0;
	t1.house3 = 0;
	t1.house4 = 0;
	t1.hotel = 0;
	list.insert(t1);

	t1.name = "Reading Railroad";
	t1.price = 200;
	t1.color = 9;
	t1.rent = 25;
	t1.house1 = 50;
	t1.house2 = 100;
	t1.house3 = 200;
	t1.house4 = 0;
	t1.hotel = 0;
	list.insert(t1);

	t1.name = "Oriental Avenue";
	t1.price = 100;
	t1.color = 2;
	t1.rent = 6;
	t1.house1 = 30;
	t1.house2 = 90;
	t1.house3 = 270;
	t1.house4 = 400;
	t1.hotel = 550;
	list.insert(t1);

	t1.name = "Chance";
	t1.price = 0;
	t1.color = 0;
	t1.rent = 0;
	t1.house1 = 0;
	t1.house2 = 0;
	t1.house3 = 0;
	t1.house4 = 0;
	t1.hotel = 0;
	list.insert(t1);

	t1.name = "Vermont Avenue";
	t1.price = 100;
	t1.color = 2;
	t1.rent = 6;
	t1.house1 = 30;
	t1.house2 = 90;
	t1.house3 = 270;
	t1.house4 = 400;
	t1.hotel = 550;
	list.insert(t1);

	t1.name = "Connecticut Avenue";
	t1.price = 120;
	t1.color = 2;
	t1.rent = 8;
	t1.house1 = 40;
	t1.house2 = 100;
	t1.house3 = 300;
	t1.house4 = 450;
	t1.hotel = 600;
	list.insert(t1);

	t1.name = "Jail/Just Visiting";
	t1.price = 0;
	t1.color = 0;
	t1.rent = 0;
	t1.house1 = 0;
	t1.house2 = 0;
	t1.house3 = 0;
	t1.house4 = 0;
	t1.hotel = 0;
	list.insert(t1);

	t1.name = "St. Charles Place";
	t1.price = 140;
	t1.color = 3;
	t1.rent = 10;
	t1.house1 = 50;
	t1.house2 = 150;
	t1.house3 = 450;
	t1.house4 = 625;
	t1.hotel = 750;
	list.insert(t1);

	t1.name = "Electrical Company";
	t1.price = 150;
	t1.color = 10;
	t1.rent = 4;
	t1.house1 = 10;
	t1.house2 = 0;
	t1.house3 = 0;
	t1.house4 = 0;
	t1.hotel = 0;
	list.insert(t1);

	t1.name = "States Avenue";
	t1.price = 140;
	t1.color = 3;
	t1.rent = 10;
	t1.house1 = 50;
	t1.house2 = 150;
	t1.house3 = 450;
	t1.house4 = 625;
	t1.hotel = 750;
	list.insert(t1);

	t1.name = "Virginia Avenue";
	t1.price = 160;
	t1.color = 3;
	t1.rent = 12;
	t1.house1 = 60;
	t1.house2 = 180;
	t1.house3 = 500;
	t1.house4 = 700;
	t1.hotel = 900;
	list.insert(t1);

	t1.name = "Pennsylvania Railroad";
	t1.price = 200;
	t1.color = 9;
	t1.rent = 25;
	t1.house1 = 50;
	t1.house2 = 100;
	t1.house3 = 200;
	t1.house4 = 0;
	t1.hotel = 0;
	list.insert(t1);

	t1.name = "St. James Place";
	t1.price = 180;
	t1.color = 4;
	t1.rent = 14;
	t1.house1 = 70;
	t1.house2 = 200;
	t1.house3 = 550;
	t1.house4 = 750;
	t1.hotel = 950;
	list.insert(t1);

	t1.name = "Community Chest";
	t1.price = 0;
	t1.color = 0;
	t1.rent = 0;
	t1.house1 = 0;
	t1.house2 = 0;
	t1.house3 = 0;
	t1.house4 = 0;
	t1.hotel = 0;
	list.insert(t1);

	t1.name = "Tennessee Avenue";
	t1.price = 180;
	t1.color = 4;
	t1.rent = 14;
	t1.house1 = 70;
	t1.house2 = 200;
	t1.house3 = 550;
	t1.house4 = 750;
	t1.hotel = 950;
	list.insert(t1);

	t1.name = "New York Avenue";
	t1.price = 200;
	t1.color = 4;
	t1.rent = 16;
	t1.house1 = 80;
	t1.house2 = 220;
	t1.house3 = 600;
	t1.house4 = 800;
	t1.hotel = 1000;
	list.insert(t1);

	t1.name = "Free Parking";
	t1.price = 0;
	t1.color = 0;
	t1.rent = 0;
	t1.house1 = 0;
	t1.house2 = 0;
	t1.house3 = 0;
	t1.house4 = 0;
	t1.hotel = 0;
	list.insert(t1);

	t1.name = "Kentucky Avenue";
	t1.price = 220;
	t1.color = 5;
	t1.rent = 18;
	t1.house1 = 90;
	t1.house2 = 250;
	t1.house3 = 700;
	t1.house4 = 875;
	t1.hotel = 1050;
	list.insert(t1);

	t1.name = "Chance";
	t1.price = 0;
	t1.color = 0;
	t1.rent = 0;
	t1.house1 = 0;
	t1.house2 = 0;
	t1.house3 = 0;
	t1.house4 = 0;
	t1.hotel = 0;
	list.insert(t1);

	t1.name = "Indiana Avenue";
	t1.price = 220;
	t1.color = 5;
	t1.rent = 18;
	t1.house1 = 90;
	t1.house2 = 250;
	t1.house3 = 700;
	t1.house4 = 875;
	t1.hotel = 1050;
	list.insert(t1);

	t1.name = "Illinois Avenue";
	t1.price = 240;
	t1.color = 5;
	t1.rent = 20;
	t1.house1 = 100;
	t1.house2 = 300;
	t1.house3 = 750;
	t1.house4 = 925;
	t1.hotel = 1100;
	list.insert(t1);

	t1.name = "B&O Railroad";
	t1.price = 200;
	t1.color = 9;
	t1.rent = 25;
	t1.house1 = 50;
	t1.house2 = 100;
	t1.house3 = 200;
	t1.house4 = 0;
	t1.hotel = 0;
	list.insert(t1);

	t1.name = "Atlantic Avenue";
	t1.price = 260;
	t1.color = 6;
	t1.rent = 22;
	t1.house1 = 110;
	t1.house2 = 330;
	t1.house3 = 800;
	t1.house4 = 975;
	t1.hotel = 1150;
	list.insert(t1);

	t1.name = "Ventnor Avenue";
	t1.price = 260;
	t1.color = 6;
	t1.rent = 22;
	t1.house1 = 110;
	t1.house2 = 330;
	t1.house3 = 800;
	t1.house4 = 975;
	t1.hotel = 1150;
	list.insert(t1);

	t1.name = "Water Works";
	t1.price = 150;
	t1.color = 10;
	t1.rent = 4;
	t1.house1 = 10;
	t1.house2 = 0;
	t1.house3 = 0;
	t1.house4 = 0;
	t1.hotel = 0;
	list.insert(t1);

	t1.name = "Marvin Avenue";
	t1.price = 280;
	t1.color = 6;
	t1.rent = 24;
	t1.house1 = 120;
	t1.house2 = 360;
	t1.house3 = 850;
	t1.house4 = 1025;
	t1.hotel = 1200;
	list.insert(t1);

	t1.name = "Go to Jail";
	t1.price = 0;
	t1.color = 0;
	t1.rent = 0;
	t1.house1 = 0;
	t1.house2 = 0;
	t1.house3 = 0;
	t1.house4 = 0;
	t1.hotel = 0;
	list.insert(t1);

	t1.name = "Pacific Avenue";
	t1.price = 300;
	t1.color = 7;
	t1.rent = 26;
	t1.house1 = 130;
	t1.house2 = 390;
	t1.house3 = 900;
	t1.house4 = 1100;
	t1.hotel = 1275;
	list.insert(t1);

	t1.name = "North Carolina Avenue";
	t1.price = 300;
	t1.color = 7;
	t1.rent = 26;
	t1.house1 = 130;
	t1.house2 = 390;
	t1.house3 = 900;
	t1.house4 = 1100;
	t1.hotel = 1275;
	list.insert(t1);

	t1.name = "Community Chest";
	t1.price = 0;
	t1.color = 0;
	t1.rent = 0;
	t1.house1 = 0;
	t1.house2 = 0;
	t1.house3 = 0;
	t1.house4 = 0;
	t1.hotel = 0;
	list.insert(t1);

	t1.name = "Pennsylvania Avenue";
	t1.price = 320;
	t1.color = 7;
	t1.rent = 28;
	t1.house1 = 150;
	t1.house2 = 450;
	t1.house3 = 1000;
	t1.house4 = 1200;
	t1.hotel = 1400;
	list.insert(t1);

	t1.name = "Short Line";
	t1.price = 200;
	t1.color = 9;
	t1.rent = 25;
	t1.house1 = 50;
	t1.house2 = 100;
	t1.house3 = 200;
	t1.house4 = 0;
	t1.hotel = 0;
	list.insert(t1);

	t1.name = "Chance";
	t1.price = 0;
	t1.color = 0;
	t1.rent = 0;
	t1.house1 = 0;
	t1.house2 = 0;
	t1.house3 = 0;
	t1.house4 = 0;
	t1.hotel = 0;
	list.insert(t1);

	t1.name = "Park Place";
	t1.price = 350;
	t1.color = 8;
	t1.rent = 35;
	t1.house1 = 175;
	t1.house2 = 500;
	t1.house3 = 1100;
	t1.house4 = 1300;
	t1.hotel = 1500;
	list.insert(t1);

	t1.name = "Luxury Tax";
	t1.price = 0;
	t1.color = 0;
	t1.rent = 75;
	t1.house1 = 0;
	t1.house2 = 0;
	t1.house3 = 00;
	t1.house4 = 0;
	t1.hotel = 0;
	list.insert(t1);

	t1.name = "Boardwalk";
	t1.price = 400;
	t1.color = 8;
	t1.rent = 50;
	t1.house1 = 200;
	t1.house2 = 600;
	t1.house3 = 1400;
	t1.house4 = 1700;
	t1.hotel = 2000;
	list.insert(t1);
}

Properties :: ~Properties()
{

}

/* Accessor */
string Properties :: getName(Position p)
{
	return list.get(p).name;
}

int Properties :: getPrice(Position p)
{
	return list.get(p).price;
}

int Properties :: getOwner(Position p)
{
	return list.get(p).owner;
}

int Properties :: getColor(Position p)
{
	return list.get(p).color;
}

int Properties :: getRent(Position p)
{
	return list.get(p).rent;
}

int Properties :: getHouse1(Position p)
{
	return list.get(p).house1;
}

int Properties :: getHouse2(Position p)
{
	return list.get(p).house2;
}

int Properties :: getHouse3(Position p)
{
	return list.get(p).house3;
}

int Properties :: getHouse4(Position p)
{
	return list.get(p).house4;
}

int Properties :: getHotel(Position p)
{
	return list.get(p).hotel;
}

bool Properties :: getMort(Position p)
{
	return list.get(p).mort;
}

/* Mutator */
void Properties :: changeOwner(Player p1, Position p)
{
	Entry t1 = list.get(p);
	t1.owner = p1;
	list.replace(t1,p);
}
