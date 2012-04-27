
## R4T5 
## Date: 27 Apr 12
## Rev: v0.1
##
##
##	This is the makefile for the Board/Property Class
##	
##

CCC = g++
CCFLAGS = -ansi

testproperties: testproperties.o properties.o container.o common.o
	$(CCC) $(CCFLAGS) -o testproperties testproperties.o properties.o container.o common.o

testproperties.o: properties.h container.h

container:
	rm -f container.h container_inl.h container.cc listnode.h listnode_inl.h
	ln -s ../Container/container.h .
	ln -s ../Container/container_inl.h .
	ln -s ../Container/container.cc .
	ln -s ../Container/listnode.h .
	ln -s ../Container/listnode_inl.h .
	ln -s ../Container/entry.h
	touch container.h container_inl.h container.cc listnode.h listnode_inl.h

common:
	rm -f common.h common.cc
	ln -s ../Container/common.h .
	ln -s ../Container/common.cc .
	touch common.h common.cc

entry:
	rm entry.h
	ln -s entry.h .
	touch entry.h

clean:
	rm -f *.o

real_clean:	clean
	rm -f testproperties
