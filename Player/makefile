
CCC = g++
CCFLAGS = -ansi

driver: driver.o container.o player.o common.o
	$(CCC) -o driver driver.o container.o player.o common.o

player.o: player.h container.h entry.h common.h listnode.h listnode_inl.h

common.o: common.h

container.o: container.h entry.h common.h listnode.h listnode_inl.h

driver.o: container.h player.h entry.h

clean:
	rm -f *.o

real_clean: clean
	rm -f driver
