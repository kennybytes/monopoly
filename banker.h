
/* File: banker.h
 * Name: R4T5
 * Date: 15 Apr 12
 * Rev: v0.1
 */

#include "player.h"
#include "properties.h"

class Banker
{
	public:
		/* Constructor & Destructor */
		Banker();
		~Banker();

		/* Accessor */
		Properties getUserProperties(Player p1);
		int getUserBalance(Player p1);

		/* Mutator */
		void changeOwner();

	private:
		Properties tiles;
};
