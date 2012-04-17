
/* File: properties.h
 * Name: R4T5
 * Date: 15 Apr 12
 * Rev: v0.1
 */

#include "entry.h"

class Properties
{
	Public:
		/* Constructor & Destructor */
		Properties();
		~Properties();

		/* Accessor */
		string getName(Position p);
		int getPrice(Position p);
		int getOwner(Position p);
		int getColor(Position p);
		int getRent(Position p);
		int getHouse1(Position p);
		int getHouse2(Position p);
		int getHouse3(Position p);
		int getHouse4(Position p);
		int getHotel(Position p);
		bool getMort(Position p);
		
		/* Mutator */
		void changeOwner(Player p1, Position p);
		
	Private:
		Container list;
		Entry t1;
};
