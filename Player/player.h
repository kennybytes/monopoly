/* File: player.h 	*
 * Date: April 9th 2012	*
 * By: R4T5		*/
#include "container.h"

typedef int Position;

class Player
{
	public:
		Player();
		
		Position update_position(int dice);

		void update_balance(int bal);
		//void update_balance(Properties pr);
	
		int get_balance();
		Position get_position();
	
		void buy_prop(Properties pr);
		
		bool bankcrupt();

		void go_jail();
		void set_free();	

	private:
		bool jail;
		Position p;
		int balance;	
		Container prop;	
};

