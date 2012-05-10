#
#
#	Makefile_Template
#
#
#

CCC = g++
CCFLAGS = -ansi

monopoly: monopoly.o gamespace.o deed.o property.o tax.o utility.o railroad.o\
		misc.o container.o common.o player.o deck.o
	$(CCC) $(CCFLAGS) -o monopoly monopoly.o gamespace.o deed.o property.o\
				tax.o utility.o railroad.o misc.o container.o\
				common.o player.o deck.o
				

monopoly.o:  gamespace.h deed.h property.h tax.h utility.h railroad.h misc.h\
		container.h common.h player.h deck.h
gamepspace.o: gamespace.h
deed.o: deed.h
property.o: property.h
tax.o: tax.h
utility.o: utility.h
railroad.o: railroad.h
misc.o: misc.h
player.o: player.h
deck.o: deck.h


links: common player deck gamespace container

common:
	rm -f common.h common.cc 
	ln -s Template/common.h
	ln -s Template/common.cc

player:
	rm -f player.h player.cc
	ln -s Player/player.h
	ln -s Player/player.cc
deck:
	rm -f deck.h deck.cc
	ln -s GameSpace/deck.cc
	ln -s GameSpace/deck.h
gamespace:
	rm -f gamespace.h gamespace.cc color.h celltype.h deed.h deed.cc\
		property.h property.cc tax.h tax.cc railroad.h railroad.cc\
		utility.h utility.cc misc.h misc.cc deck.h deck.cc

	ln -s GameSpace/gamespace.h
	ln -s GameSpace/gamespace.cc
	ln -s GameSpace/color.h
	ln -s GameSpace/celltype.h
	ln -s GameSpace/deed.h
	ln -s GameSpace/deed.cc
	ln -s GameSpace/deck.h
	ln -s GameSpace/deck.cc
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

container:
	rm -f container.cc container.h\
		listnode.h listnode_inl.h
	ln -s Template/container.cc
	ln -s Template/container.h
	ln -s Template/listnode.h
	ln -s Template/listnode_inl.h

clean:
	rm -f *.o

real_clean: clean
	rm -f monopoly
	rm -f common.h common.cc entry.h
	rm -f player.h player.cc
	rm -f gamespace.h gamespace.cc color.h celltype.h deed.h deed.cc\
		property.h property.cc tax.h tax.cc railroad.h railroad.cc\
		utility.h utility.cc misc.h misc.cc
	rm -f container.cc container.h common.h common.cc\
		listnode.h listnode_inl.h
	rm -f deck.h deck.cc



