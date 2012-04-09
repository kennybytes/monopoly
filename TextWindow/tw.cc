//
// tw.cc
//
// Define the TextWindow operations.
//
#include <iostream>
using namespace std;

#include "tw.h"

TextWindow::TextWindow(int r, int c, char f) 
  : actual_rows(r), actual_cols(c), fill(f)
  { Erase(); }
  
int TextWindow::Height() const
  { return actual_rows; }

int TextWindow::Width() const
  { return actual_cols; }

char TextWindow::Get(int r, int c) const
  { return contents[r][c]; }

void TextWindow::Put(int r, int c, const char *string)
{ 
  for (int i = 0; string[i] != '\0'; i++)
    contents[r][c + i] = string[i];
}

void TextWindow::PutRow(int r, int start_c, char ch, int n)
{ 
  for (int i = 0; i < n; i++)
    contents[r][start_c + i] = ch;
}

void TextWindow::PutCol(int start_r, int c, char ch, int n)
{ 
  for (int i = 0; i < n; i++)
    PutRow(start_r + i, c, ch);
}

void TextWindow::Erase() 
  { Fill(fill); }

void TextWindow::Fill(char fill_ch) 
{ 
  const int len = Width();
  for (int r = 0; r < Height(); r++)
    PutRow(r, 0, fill_ch, len);
}

void TextWindow::Display()
{ 
  for (int r = 0; r < Height(); r++)
  {
    for (int c = 0; c < Width(); c++)
      cout << Get(r, c);
    cout << endl;           
  }
}
