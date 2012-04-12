
CCC = g++
CCFLAGS = -ansi

testcontainer: container.o common.o testcontainer.o 
	$(CCC) -o testcontainer container.o common.o testcontainer.o

common.o: common.h

container.o: container.h entry.h common.h container_inl.h

testcontainer.o: container.h entry.h container_inl.h

container.h: container_inl.h
	touch container.h

clean:
	rm -f *.o

real_clean: clean
	rm -f testcontainer
