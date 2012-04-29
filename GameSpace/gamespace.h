

#include <string>
using namespace std;
#include "color.h"
#include "celltype.h"

#ifndef GAMESPACE
#define GAMESPACE


typedef int Position;
typedef int Price;
typedef int Color;

class GameSpace{

public:

	
	/* Constructors */
	GameSpace();

	/* Accessors */
	string getName() const;	  
	int getPrice() const;
	string getOwner() const;
	int getColor() const;
	int getRent() const;
	int getHouse1() const;
	int getHouse2() const;
	int getHouse3() const;
	int getHouse4() const;
	int getHotel() const;  	
	bool getMort() const;

	/* Modifiers */
	void setName(string n);
	void setPrice(Price p);
	void setOwner(string o);
	void setColor(Color c);
	void setRent(Price p);
	void setHouse1(Price p);
	void setHouse2(Price p);
	void setHouse3(Price p);
	void setHouse4(Price p);
	void setHotel(Price p);
	void setMortage(Price p);
	void setType(CellType t);
	
	/* Operators */
	bool operator==(const GameSpace& other) const;
	bool operator!=(const GameSpace& other) const;
	friend ostream& operator<<(ostream& s, const GameSpace &other);


private:

	/* GameSpace data information */
	string name;	//Name of the block
	int type;	//Type of block
	
        int price;	
        string owner;
        int color;
	
	/* rent costs */
        int rent; 
        int house1;
        int house2;
        int house3;
        int house4;
        int hotel;

        bool mortage;

};       

#endif
