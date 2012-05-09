#
#
#	Makefile_Template
#
#
#

CCC = g++
CCFLAGS = -ansi

testpl: testpl.o gamespace.o 
	$(CCC) $(CCFLAGS) -o testpl testpl.o gamespace.o
testpl.o: gamespace.h
gamepspace.o: gamespace.h



commonlinks:
	rm -f common.h common.cc entry.h
	ln -s ../Common/common.h
	ln -s ../Common/common.cc
	ln -s ../Common/entry.h


gamespace:
	rm -f gamespace.h gamespace.cc color.h celltype.h
	ln -s ../GameSpaceTEST/gamespace.h
	ln -s ../GameSpaceTEST/gamespace.cc
	ln -s ../GameSpaceTEST/color.h
	ln -s ../GameSpaceTEST/celltype.h
	
clean:
	rm -f *.o

real_clean: clean
	rm -f testcontainer
