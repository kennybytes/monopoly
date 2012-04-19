
/*  File: container.h
 *  Date: 26 Sep 05
 *  Mod:  25 Sep 07
 *  Rev:  v1
 *
 *  Container class declaration as a linked list
 */

#ifndef CONTAINER_H
#define CONTAINER_H

#include <iostream>
using namespace std;

#include <stdlib.h>
#include "common.h"
#include "entry.h"
#include "listnode.h"

/*******************************************************************/
/*                                                                 */
/*  Container Declaration using linked-list implementation         */
/*                                                                 */
/*******************************************************************/

typedef int Position;
class ContainerIterator;

const int ERROR = -1;
const int END = -1;

class Container {

public:
	// constructors
	Container();
	~Container();

	// accessors
	bool isempty() const;
	bool isfull() const;
	int size() const;
	Entry get(Position p) const;

	// mutators
	void clear();
		// clear the container to empty
	void traverse(void(*Visit)(Entry));
		// apply Visit to each element in the container
	void insert(Entry x, Position p = -1 );
		// add a new node with data x at position p (-1 is end
		// of container)
	Entry remove(Position p);
		// remove node at position p returning its data
	void replace(Entry x, Position p);
		// replace data at position p with x

	ContainerIterator Start() const;
	ContainerIterator End() const;

	bool operator==(const Container &b) const;
		// compares two Containers for equality
	bool operator!=(const Container &b) const;
		// compares two Containers for inequality
	friend ostream & operator<<(ostream& s, const Container &a);

private:
	// private helper functions
	void init_to_empty();
	void destroy_elements();
	ListNode *findpos(Position p) const;
	bool valid_position(Position p, int size) const;

	int count;
	ListNode *head;
};

ostream & operator<<(ostream& s, const Container &a);

class ContainerIterator
{
 public:
	ContainerIterator(ListNode* a);
	
	Entry operator*() const;
	
	bool operator==(const ContainerIterator& it) const;
	bool operator!=(const ContainerIterator& it) const;
	
	ContainerIterator operator++();
	ContainerIterator operator++(int);
		
 private:
	ListNode *next;

};



#endif
