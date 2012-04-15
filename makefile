## MakeFile for EE205 Final Project
## R4T5 
## Date: 15 Apr 12
## Author: Kenny Luong
## Rev: v0.2

CCC = g++
CCFLAGS = -ansi

monopoly: container.o common.o monopoly.o
	  $(CCC) -o monopoly container.o common.o monopoly.o

container.o: container.h container_inl.h listnode.h listnode_inl.h common.h entry.h

common.o: common.h

arraycontainer:
	rm container.h container_inl.h container.cc listnode.h listnode_inl.h
	ln -s Container/container.h .
	ln -s Container/container_inl.h .
	ln -s Container/container.cc .
	ln -s Container/listnode.h .
	ln -s Container/listnode_inl.h .
	touch container.h container_inl.h container.cc listnode.h listnode_inl.h

listcontainer:
	rm container.h container_inl.h container.cc listnode.h listnode_inl.h
	ln -s Container/container.h .
	ln -s Container/container_inl.h .
	ln -s Container/container.cc .
	ln -s Container/listnode.h .
	ln -s Container/listnode_inl.h .
	touch container.h container_inl.h container.cc listnode.h listnode_inl.h

common:
	rm common.h common.cc
	ln -s Container/common.h .
	ln -s Container/common.cc .
	touch common.h common.cc

entry:
	rm entry.h
	ln -s entry.h .
	touch entry.h

clean:
	rm -f *.o

real_clean:
	rm -f monopoly
