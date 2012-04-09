//
// usebw.cc
//
// A simple main program to create a bordered window and display it.
//
#include "bw.h"

main()
{
  BorderedTextWindow tw(5, 10, '.', '*');

  tw.Put(2,4, "alex");  // put an "alex" in there
  tw.Display();         // display the window
}
