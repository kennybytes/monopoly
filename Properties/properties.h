
/* File: properties.h
 * Name: R4T5
 * Date: 15 Apr 12
 * Rev: v0.1
 */

#include "entry.h"
#include "container.h"
typedef int CellType;
typedef int Player;

class Properties
{
	public:
		/* Constructor & Destructor */
		Properties();
		~Properties();

		/* Accessor */
		string getName(Position p) const;
		int getPrice(Position p) const;
		string getOwner(Position p) const;
		int getColor(Position p) const;
		int getRent(Position p) const;
		int getHouse1(Position p) const;
		int getHouse2(Position p) const;
		int getHouse3(Position p) const;
		int getHouse4(Position p) const;
		int getHotel(Position p) const;
		bool getMort(Position p) const;
		
		/* Mutator */
		
	private:
		Container list;
};
