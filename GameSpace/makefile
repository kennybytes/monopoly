## R4T5 
## Date: 15 Apr 12
## Author: Kenny Luong
## Rev: v0.2
##
##
##	This is the makefile for the Board/Property Class
##	
##

CCC = g++
CCFLAGS = -ansi

testgamespace: testgamespace.o gamespace.o container.o common.o
	$(CCC) $(CCFLAGS) -o testgamespace testgamespace.o gamespace.o\
			container.o common.o

testprop: testprop.o property.o common.o deed.o gamespace.o
	$(CCC) $(CCFLAGS) -o testprop testprop.o property.o common.o deed.o gamespace.o

testutil: testutil.o utility.o common.o deed.o gamespace.o
	$(CCC) $(CCFLAGS) -o testutil testutil.o utility.o common.o deed.o gamespace.o

testrailroad: testrailroad.o railroad.o common.o deed.o gamespace.o
	$(CCC) $(CCFLAGS) -o testrailroad testrailroad.o railroad.o common.o deed.o gamespace.o

railroad.o: railroad.h

testmisc: testmisc.o misc.o common.o gamespace.o
	$(CCC) $(CCFLAGS) -o testmisc testmisc.o misc.o common.o gamespace.o

testgamespace.o: gamespace.h container.h

testprop.o: gamespace.h deed.h property.h common.h

testtax: testtax.o tax.o gamespace.o container.o common.o
	$(CCC) $(CCFLAGS) -o testtax testtax.o tax.o gamespace.o\
			container.o common.o
testtax.o: tax.h

testutility: testutility.o utility.o deed.o gamespace.o container.o common.o
	$(CCC) $(CCFLAGS) -o testutility testutility.o utility.o deed.o\
			gamespace.o container.o common.o
testutility.o: utility.h

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
	rm -f testgamespace
