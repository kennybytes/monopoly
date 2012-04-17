/* File: player.h 	*
 * Date: April 9th 2012	*
 * By: R4T5		*/

typedef int Position;

class Player
{
	public:
		Player();
		
		Position update_position(int dice);
		void update_balance(int bal);
		void update_balance(Properties pr);
	
		int getbalance();
		Position getposition();
	
		Properties sellpro();
		void buypro(Properties pr);
		
		bool bankcrupt();

	private:
		Position p;
		int balance;	
		Properties pro; 
	
};
