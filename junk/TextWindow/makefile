## MakeFile for TextWindow Class
## R4T5 
## Date: 4/4/12
## Author: Kenny Luong


CCC = g++
CFLAGS = -ansi

textwindow: tw.o usetw.o
	$(CCC) -o textwindow tw.o usetw.o

bordertextwindow: bw.o tw.o usebw.o
	$(CCC): -o bordertextwindow usebw.o bw.o tw.o

bw.o: bw.h tw.h
usebw.o: bw.h

tw.o: tw.h
usetwo.o: tw.h

clean:
	rm -f *.o

real_clean:
	rm -f monopoly
