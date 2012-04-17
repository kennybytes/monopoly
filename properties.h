
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
		Entry getInfo(Position p);

		/* Mutator */
		void changeOwner(Player p1, Position p);
		
	Private:
		Container list;
		Entry x;
};
