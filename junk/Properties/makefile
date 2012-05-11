## R4T5 
## Date: 29 Apr 12
## Rev: v0.2
##
##
##	This is the makefile for the Board/Property Class
##	
##

CCC = g++
CCFLAGS = -ansi
testproperties: testproperties.o properties.o gamespace.o common.o
	$(CCC) $(CCFLAGS) -o testproperties testproperties.o properties.o gamespace.o common.o

testproperties.o: properties.h container.h

properties.o: properties.h container.h gamespace.h color.h celltype.h

gamespace.o: gamespace.h color.h celltype.h

common.o: common.h

gamespace:
	rm -f celltype.h gamespace.h gamespace.cc color.h
	ln -s ../GameSpace/celltype.h .
	ln -s ../GameSpace/gamespace.h .
	ln -s ../GameSpace/gamespace.cc .
	ln -s ../GameSpace/color.h .
	touch celltype.h gamespace.h gamespace.cc color.h

container:
	rm -f container.h container_inl.h container.cc listnode.h listnode_inl.h
	ln -s ../Template/container.h .
	ln -s ../Template/container_inl.h .
	ln -s ../Template/container.cc .
	ln -s ../Template/listnode.h .
	ln -s ../Template/listnode_inl.h .
	touch container.h container_inl.h container.cc listnode.h listnode_inl.h

common:
	rm -f common.h common.cc
	ln -s ../Template/common.h .
	ln -s ../Template/common.cc .
	touch common.h common.cc

clean:
	rm -f *.o

real_clean:	clean
	rm -f testproperties

