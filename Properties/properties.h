
/* File: properties.h
 * Name: R4T5
 * Date: 15 Apr 12
 * Rev: v0.1
 */

#include "container.h"
#include "gamespace.h"
#include "color.h"
#include "celltype.h"

typedef int CellType;
typedef int Player;

class Properties
{
	public:
		/* Constructor & Destructor */
		Properties();

		/* Accessor */
		Entry getInfo(Position p) const;
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
		
		/* Operators */
		friend ostream& operator<<(ostream& s, const Properties &other);

	private:
		Container<GameSpace> list;

		GameSpace clear_gamespace(GameSpace other);
};
