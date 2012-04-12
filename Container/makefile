
CCC = g++
CCFLAGS = -ansi

testcontainer: container.o common.o testcontainer.o
	$(CCC) -o testcontainer container.o common.o testcontainer.o

constack.o: constack.h container.h entry.h common.h listnode.h listnode_inl.h

common.o: common.h

container.o: container.h entry.h common.h listnode.h listnode_inl.h

testcontainer.o: container.h entry.h

clean:
	rm -f *.o

real_clean: clean
	rm -f testcontainer
