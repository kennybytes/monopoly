/* File: driver.cc */

#include "container.h"
#include "player.h"

#include <iostream>
using namespace std;

main()
{
   Player A;
   A.update_balance(1000);
   A.update_balance(-100);
   A.update_position(6);
   A.update_position(-5);
   A.update_position(3);
   A.update_position(-1);
   A.update_position(6);
   A.update_position(4);
   cout << A.get_balance()<<endl;
   cout << A.get_position()<<endl; 



   






}
