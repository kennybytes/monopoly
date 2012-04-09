//
// bw.cc
//
// Define the bordered window operations
//
#include "bw.h"

BorderedTextWindow::BorderedTextWindow(int r, int c, char fill, char bchar)
  : TextWindow(r, c, fill),           // invoke base class constructor
    border_char(bchar)                // initialize border_char field
  {}


void BorderedTextWindow::PutBorder()
{
  PutRow(0, 0, border_char, Width());
  PutRow(Height() - 1, 0, border_char, Width()); 
  PutCol(1, 0, border_char, Height() - 2);            
  PutCol(1, Width() - 1, border_char, Height() - 2);
}

void BorderedTextWindow::Display() 
{
  PutBorder();                  
  TextWindow::Display();       
}
