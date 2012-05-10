/* File: player.h 	*
 * Date: April 9th 2012	*
 * By: R4T5		*/

typedef int Position;

class Player
{
	public:
		Player();

		// Move DICE spaces forward based on dice roll
		Position update_position(int dice);

		// Sends the player to a specific position on the board
		Position send_to(Position newp);

		// Adds BAL to current balance
		void update_balance(int bal);

		// returns player's balance
		int get_balance();

		// returns player's position on board
		Position get_position();
		
		// Subtracts RENT from current balance
		inline void pay_rent(int rent)
		{	balance -= rent;	}

		// determines whether player gains or loses
		// a Get Out of Jail Free card
		inline void setJailCard(bool b)
		{	jailCard = b;	}
		
		// indicates whether player is bankrupt	
		bool bankrupt();

		// sets jail = 1
		void go_jail();

		// sets jail = 0
		void set_free();	

		// sets alive = 1
		bool set_alive();

		// sets alive = 0
		bool set_dead();



	private:
		bool alive;	// If bankrupt, alive == 0
		bool jail;	// If in jail, jail == 1
		bool jailCard;	// Whether player has get out of jail card
		Position p;	// Position on board
		int rrCount;	// How many railroad deeds player has
		int utilCount;	// How many utility deeds player has
		int balance;	// Total balance
};

