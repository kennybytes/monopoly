
/*  File: container.h
 *  Date: 26 Sep 05
 *  Mod:  25 Sep 07
 *  Rev:  v1
 *
 *  Container class declaration as a linked list
 */

#ifndef CONTAINER_H
#define CONTAINER_H

#include <stdlib.h>
#include "common.h"
#include "entry.h"
#include "listnode.h"
#include <iostream>
using namespace std;

/*******************************************************************/
/*                                                                 */
/*  Container Declaration using linked-list implementation         */
/*                                                                 */
/*******************************************************************/

typedef int Position;

const int ERROR = -1;
const int END = -1;

class ContainerIterator;

class Container {

public:
	// constructors
	Container();
	Container(Container &a);
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

        bool operator==(const Container &b) const;
        bool operator!=(const Container &b) const;

	Position lsrch(Entry x);


	ContainerIterator Start() const;
	ContainerIterator End() const;

private:
	// private helper functions
	void init_to_empty();
	void destroy_elements();
	ListNode *findpos(Position p) const;
	bool valid_position(Position p, int size) const;

	int count;
	ListNode *head;

        bool Equal(const Container &b) const;
};

	ostream& operator<<(ostream& s, const Container& a);
/*
*/
class ContainerIterator
{
public:
	ContainerIterator();

	Entry operator*() const;

	// compare iterators
	bool operator==(const ContainerIterator& it) const;
	bool operator!=(const ContainerIterator& it) const;

	ContainerIterator operator++();
	ContainerIterator operator++(int);


private:
	ListNode *next;

	friend ContainerIterator Container :: Start() const;
	friend ContainerIterator Container :: End() const;

};

#endif
