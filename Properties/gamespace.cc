





#include "gamespace.h"

/*
 *
 * Constructors
 *
 */





GameSpace :: GameSpace()
{
	type = -1;
	price = -1;
	owner = -1;
	color = -1;
	base_rent = -1;
	house1 = -1;
	house2 = -1;
	house3 = -1;
	house4 = -1;
	hotel = -1;
	mortage = -1;
}









/* 
 *
 * Accessors
 *
 *
 */
int GameSpace::getPrice() const
{
	return price;
}
int GameSpace::getOwner() const
{
	return owner;
}

int GameSpace::getColor() const
{
	return color;
}

int GameSpace::getRent() const
{	
	//Calculate Rent later
	return 1;
}

int GameSpace::getHouse1() const
{
	return house1;
}

int GameSpace::getHouse2() const
{
	return house2;
}	

int GameSpace::getHouse3() const
{
	return house4;
}

int GameSpace::getHouse4() const
{
	return house4;
}

int GameSpace::getHotel() const
{
	return hotel;
}

bool GameSpace::getMort() const
{
	return mortage;
}



/*
 *
 *
 * Operators
 *
 */

bool GameSpace::operator==(const GameSpace& other) const
{


	//Don't need the comparison operators
	return 1;

}


bool GameSpace::operator!=(const GameSpace& other) const
{


	//Don't need the comparison operators
	return 1;

}


/*
 *
 * Output Operators
 *
 */


ostream& operator<<(ostream& s, const GameSpace &other)
{


}


