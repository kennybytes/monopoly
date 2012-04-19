#
#
#	IO General Makefile
#
#

CCC = g++
CCFLAGS = -ansi

writetest: writetest.o
	$(CCC) $(CCFLAGS) -o writetest writetest.o


readtest: readtest.o
	$(CCC) $(CCFLAGS) -o readtest readtest.o
clean:
	rm -f *.o

real_clean: clean
	rm -f writetest readtest
