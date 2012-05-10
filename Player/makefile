
CCC = g++
CCFLAGS = -ansi

driver: driver.o player.o common.o
	$(CCC) -o driver driver.o player.o common.o

player.o: player.h

common.o: common.h

common:
	rm -f common.h common.cc
	ln -s ../Template/common.h .
	ln -s ../Template/common.cc .
	touch common.h common.cc

# container.o: container.h entry.h common.h listnode.h listnode_inl.h

driver.o: player.h 

clean:
	rm -f *.o

real_clean: clean
	rm -f driver
