#
#
#	Makefile_Template
#
#
#

CCC = g++
CCFLAGS = -ansi

testpl: testpl.o gamespace.o deed.o property.o
	$(CCC) $(CCFLAGS) -o testpl testpl.o gamespace.o deed.o property.o
testpl.o: gamespace.h deed.h property.h
gamepspace.o: gamespace.h

deed.o: deed.h

property.o: property.h

commonlinks:
	rm -f common.h common.cc entry.h
	ln -s ../Common/common.h
	ln -s ../Common/common.cc
	ln -s ../Common/entry.h


gamespace:
	rm -f gamespace.h gamespace.cc color.h celltype.h deed.h deed.cc property.h property.cc
	ln -s ../GameSpace/gamespace.h
	ln -s ../GameSpace/gamespace.cc
	ln -s ../GameSpace/color.h
	ln -s ../GameSpace/celltype.h
	ln -s ../GameSpace/deed.h
	ln -s ../GameSpace/deed.cc
	ln -s ../GameSpace/property.h	
	ln -s ../GameSpace/property.cc

clean:
	rm -f *.o

real_clean: clean
	rm -f testpl
