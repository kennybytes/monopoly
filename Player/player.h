/* File: player.h 	*
 * Date: April 9th 2012	*
 * By: R4T5		*/

typedef int Position;

class Player
{
	public:
		Player();

		Position update_position(int dice);

		Position send_to(Position newp);
		void update_balance(int bal);

	
		int get_balance();
		Position get_position();
		
		inline void pay_rent(int rent)
		{	balance -= rent;	}

		inline void setJailCard(bool b)
		{	jailCard = b;	}
		
		bool bankrupt();

		void go_jail();
		void set_free();	

		bool set_alive();
		bool set_dead();



	private:
		bool alive;
		bool jail;
		bool jailCard;
		Position p;
		int balance;	
};

