

#include <string>
using namespace std;
#include "color.h"
#include "celltype.h"

#ifndef GAMESPACE
#define GAMESPACE


typedef int Position;
typedef int Price;
typedef int Color;

class Deed : public GameSpace
{
public:

	Deed(string n = NON,
	     int t = NON,
	     Container d = NON);

	/* Inherited:
	 * string getName() const;
	 * CellType getType() const;
	 */
	
	virtual void rent(Player P[], int PlayerNumber, int rent) = 0; // draws a random card

private:
	/* Inherited:
 	 * int type;
 	 * string name;
 	 */

	// Flat price of landing on Deed space
	int rent;


};	
