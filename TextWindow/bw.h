//
// bw.h
//
// A simple BorderedTextWindow class
//
#include "tw.h"

class BorderedTextWindow : public TextWindow
{
  private:
    char border_char;            // New data

  public:
    BorderedTextWindow(int r, int c, char fill, char bchar);

    void PutBorder();            // New operation
    void Display();              // Overridden operation
};
