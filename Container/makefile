#
#
#	Container makefile (Linked List)
#
#

CCC = g++
CCFLAGS = -ansi

testcontainer: container.o common.o testcontainer.o
	$(CCC) -o testcontainer container.o common.o testcontainer.o


common.o: common.h

container.o: container.h entry.h common.h listnode.h listnode_inl.h

testcontainer.o: container.h entry.h

commonlinks:
	rm -f common.h common.cc entry.h
	ln -s ../Common/common.h
	ln -s ../Common/common.cc
	ln -s ../Common/entry.h
clean:
	rm -f *.o

real_clean: clean
	rm -f testcontainer
