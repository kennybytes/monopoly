## R4T5 
## Date: 15 Apr 12
## Author: Kenny Luong
## Rev: v0.2
##
##
##	This is the makefile for the deck Class
##	
##

CCC = g++
CCFLAGS = -ansi

testdeck: testdeck.o deck.o container.o common.o
	$(CCC) $(CCFLAGS) -o testdeck testdeck.o deck.o container.o common.o

testdesk.o: deck.h container.h

container:
	rm -f container.h container_inl.h container.cc listnode.h listnode_inl.h
	ln -s ../Template/container.h .
	ln -s ../Template/container_inl.h .
	ln -s ../Template/container.cc .
	ln -s ../Template/listnode.h .
	ln -s ../Template/listnode_inl.h .
	ln -s ../Template/entry.h
	touch container.h container_inl.h container.cc listnode.h listnode_inl.h

common:
	rm -f common.h common.cc
	ln -s ../Template/common.h .
	ln -s ../Template/common.cc .
	touch common.h common.cc

clean:
	rm -f *.o

real_clean:	clean
	rm -f testgamespace
