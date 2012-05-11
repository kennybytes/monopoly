//
// tw.h
//
// Declare a simple text window class.
//
class TextWindow
{
  private:
    enum {MaxRows = 24, MaxCols = 80};

    char contents[MaxRows][MaxCols];
    int actual_rows, actual_cols;
    char fill;

  public:
    TextWindow(int r, int c, char f = 'c');

    int Height() const;
    int Width() const;
    char Get(int r, int c) const;

    void Display();

    void PutRow(int r, int c, char ch, int n = 1);          
    void PutCol(int start_r, int c, char ch, int n = 1);   
    void Put(int r, int c, const char *string);
    void Fill(char fill_ch);
    void Erase();
};
