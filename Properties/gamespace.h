

#include <string>
using namespace std;
#include "type.h"
#include "color.h"

typedef int Position;

#ifndef GAMESPACE
#define GAMESPACE

class GameSpace{


public:

	
	/* Constructors */
	GameSpace();

	/* Accessors */
	//string getName(const Position p) const;	  
	int getPrice() const;
	int getOwner() const;
	int getColor() const;
	int getRent() const;
	int getHouse1() const;
	int getHouse2() const;
	int getHouse3() const;
	int getHouse4() const;
	int getHotel() const;  	
	bool getMort() const;

	/* Modifiers */

	
	/* Operators */
	bool operator==(const GameSpace& other) const;
	bool operator!=(const GameSpace& other) const;
	friend ostream& operator<<(ostream& s, const GameSpace &other);


private:

	/* GameSpace data information */
	string name;	//Name of the block
	int type;	//Type of block
	

        int price;	
        int owner;
        int color;
	
	/* rent costs */
        int base_rent; 
        int house1;
        int house2;
        int house3;
        int house4;
        int hotel;

        bool mortage;

};       

#endif
