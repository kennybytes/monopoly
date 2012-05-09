#
#
#	Makefile_Template
#
#
#

CCC = g++
CCFLAGS = -ansi

testpl: testpl.o gamespace.o deed.o
	$(CCC) $(CCFLAGS) -o testpl testpl.o gamespace.o deed.o
testpl.o: gamespace.h deed.h
gamepspace.o: gamespace.h

deed.o: deed.h

commonlinks:
	rm -f common.h common.cc entry.h
	ln -s ../Common/common.h
	ln -s ../Common/common.cc
	ln -s ../Common/entry.h


gamespace:
	rm -f gamespace.h gamespace.cc color.h celltype.h deed.h deed.cc
	ln -s ../GameSpaceTEST/gamespace.h
	ln -s ../GameSpaceTEST/gamespace.cc
	ln -s ../GameSpaceTEST/color.h
	ln -s ../GameSpaceTEST/celltype.h
	ln -s ../GameSpaceTEST/deed.h
	ln -s ../GameSpaceTEST/deed.cc
	
clean:
	rm -f *.o

real_clean: clean
	rm -f testpl
