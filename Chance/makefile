## R4T5 
## Date: 4/21 
## Author: Kenny Luong
##
##
##	This is the makefile for the Chance Class
##	
##

CCC = g++
CCFLAGS = -ansi

testgamespace: testgamespace.o gamespace.o container.o common.o
	$(CCC) $(CCFLAGS) -o testgamespace testgamespace.o gamespace.o container.o common.o

testgamespace.o: gamespace.h container.h


container:
	rm -f container.h container_inl.h container.cc listnode.h listnode_inl.h
	ln -s ../Container/container.h .
	ln -s ../Container/container_inl.h .
	ln -s ../Container/container.cc .
	ln -s ../Container/listnode.h .
	ln -s ../Container/listnode_inl.h .
	ln -s ../Container/entry.h
	touch container.h container_inl.h container.cc listnode.h listnode_inl.h
remove_container:
	rm -f container.h container_inl.h container.cc listnode.h listnode_inl.h

common:
	rm -f common.h common.cc
	ln -s ../Container/common.h .
	ln -s ../Container/common.cc .
	touch common.h common.cc
remove_common:
	rm -f common.h common.cc

entry:
	rm entry.h
	ln -s entry.h .
	touch entry.h

clean:
	rm -f *.o

real_clean:
	rm -f testgamespace
