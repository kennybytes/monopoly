/* File: player.h 	*
 * Date: April 9th 2012	*
 * By: R4T5		*/

class Player
{
	public:
		Position update(int dice, int balance);
	
		int getbalance();
	
		Properties sellpro();
		void buypro(Properties pr);
		
		bool bankcrupt();

	private:
		Position p;
		int balance;	
		Properties pro; 
	
};
