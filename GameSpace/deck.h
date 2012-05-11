
/* File: deck.h
 * Name: R4T5
 * Date: 4 May 2012
 * Rev: v0.1
 */

#ifndef DECK_H
#define DECK_H

#include "gamespace.h"
#include "player.h"

class Deck : public GameSpace
{
	public:
		Deck(string n = "", CellType t = NON);

		void chance(Player p);
		void comchest(Player p);

		virtual void display(ostream & out) const;

	private:
		// no new data
};


#endif
