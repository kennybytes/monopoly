
CCC = g++
CCFLAGS = -ansi

testcontainer: common.o testcontainer.o
	$(CCC) -o testcontainer common.o testcontainer.o

constack.o: constack.h container.h common.h listnode.h listnode_inl.h

common.o: common.h

container.o: container.h common.h listnode.h listnode_inl.h

testcontainer.o: container.h listnode.h listnode_inl.h common.h

clean:
	rm -f *.o

real_clean: clean
	rm -f testcontainer
