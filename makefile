#
#
#	Makefile_Template
#
#
#

CCC = g++
CCFLAGS = -ansi

testpl: testpl.o gamespace.o deed.o property.o tax.o utility.o railroad.o misc.o
	$(CCC) $(CCFLAGS) -o testpl testpl.o gamespace.o deed.o property.o\
				tax.o utility.o railroad.o misc.o

testpl.o: gamespace.h deed.h property.h tax.h utility.h railroad.h misc.h

gamepspace.o: gamespace.h

deed.o: deed.h
property.o: property.h
tax.o: tax.h
utility.o: utility.h
railroad.o: railroad.h
misc.o: misc.h


commonlinks:
	rm -f common.h common.cc entry.h
	ln -s Common/common.h
	ln -s Common/common.cc
	ln -s Common/entry.h

player:
	rm -f player.h player.cc
	ln -s Player/player.h
	ln -s Player/player.cc

gamespace:
	rm -f gamespace.h gamespace.cc color.h celltype.h deed.h deed.cc\
		property.h property.cc tax.h tax.cc railroad.h railroad.cc\
		utility.h utility.cc misc.h misc.cc

	ln -s GameSpace/gamespace.h
	ln -s GameSpace/gamespace.cc
	ln -s GameSpace/color.h
	ln -s GameSpace/celltype.h
	ln -s GameSpace/deed.h
	ln -s GameSpace/deed.cc
	ln -s GameSpace/property.h	
	ln -s GameSpace/property.cc
	ln -s GameSpace/tax.h
	ln -s GameSpace/tax.cc
	ln -s GameSpace/utility.h
	ln -s GameSpace/utility.cc
	ln -s GameSpace/railroad.h
	ln -s GameSpace/railroad.cc
	ln -s GameSpace/misc.h
	ln -s GameSpace/misc.cc

template:
	rm -f container.cc container.h
	ln -s Template/container.cc
	ln -s Template/container.h


clean:
	rm -f *.o

real_clean: clean
	rm -f monopoly
