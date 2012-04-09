//
// usetw.cc
//
// A simple main program to create a window and display it.
//
#include "tw.h"

main()
{
  TextWindow tw(24, 80, '.');

  tw.Put(2,4, "alex");  // put an "alex" in there
  tw.Display();         // display the window

  tw.Put(3,4, "alex");  // put an "alex" in there
  tw.Display();

  while(1);
}
