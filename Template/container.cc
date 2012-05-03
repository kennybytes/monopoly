
/*  File: container.cc
 *  Date: 26 Sep 05
 *  Mod:  25 Sep 07
 *  Rev:  v1
 *
 *  Container class definitions as a linked list
 */

#include "common.h"
//#include "entry.h"
#include "container.h"
#include "listnode.h"

#include <iostream>
using namespace std;

/*******************************************************************/
/*                                                                 */
/*  Constructors and Destructors                                   */
/*                                                                 */
/*******************************************************************/

template <class Entry>
Container<Entry> :: Container()
/*  initialize a Container object
    pre:  none
    post: container has been created and initialized to empty
 */
{	init_to_empty();	}

template <class Entry>
Container<Entry> :: ~Container()
{	destroy_elements();	}

/*******************************************************************/
/*                                                                 */
/*  Accessors                                                      */
/*                                                                 */
/*******************************************************************/

template <class Entry>
bool Container<Entry> :: isempty() const
/*  tests if a container is empty
    pre:  container has been created
    post: returns true if container is empty; false otherwise
 */
{	return ( count == 0);	}

template <class Entry>
bool Container<Entry> :: isfull() const
/*  tests if a container is full
    pre:  container has been created
    post: returns true if container is full; false otherwise
 */
{	return false;	}

template <class Entry>
int Container<Entry> :: size() const
/*  determines the size of a container
    pre:  container has been created
    post: returns the number of entries in the container
 */
{	return count;	}

template <class Entry>
Entry Container<Entry> :: get(Position p) const
/*  return entry at position p
    pre:  container has been created, and 0 <= p < n, where n is number
	of container entries
    post: entry at position p has been returned as x, container unchanged
    error: if container is shorter than p, nothing done an waring produced.
 */
{
	if( !valid_position(p,count-1) || isempty())
	{	Warning("Container: Get to illegal position; return ERROR");
		//return ERROR;
	}

	ListNode<Entry> *current = findpos(p);
	return current->getdata();
}


/*******************************************************************/
/*                                                                 */
/*  Mutators                                                       */
/*                                                                 */
/*******************************************************************/
template <class Entry>
void Container<Entry> :: clear()
/*  clear a Container object
    pre:  container has been created
    post: all entries have been removed; container is empty
 */
{	destroy_elements();
	init_to_empty();
}

template <class Entry>
void Container<Entry> :: traverse(void(*Visit)(Entry))
/*  applies the operation Visit to each element of the container
    pre: container has been created; Visit is a function that processes
	elements of type Entry. Visit does not modify the container.
    post: the action Visit has been applied to each element in the container
	begining at the first
 */
{
	ListNode<Entry> *current = head;
	while(current)
	{	(*Visit)(current->getdata());
		current = current->getnext();
	}
}

template <class Entry>
void Container<Entry> :: insert(Entry x, Position p)
/*  insert entry x into container at position p
    pre:  container has been created, x is a valid entry, and 0 <= p <= n,
	where n is number of container entries
    post: x is inserted in the container at position p,
	 all entries at p and after have increased in position by 1.
    error: if container is full, nothing done and waring produced.
 */
{
	// if adding to the end of the container
	if( p == END ) p = count;

	if( !valid_position(p,count) || isfull())
	{	Warning("Container: Insert to illegal position; nothing done");
		return;
	}

	// create new node
	ListNode<Entry> *newnode = (ListNode<Entry> *)malloc(sizeof(ListNode<Entry>));
	newnode->setdata(x);

	// if inserting at the begining of the container
	if(p == 0)
	{	newnode->setnext(head);
		head = newnode;
	}
	else  // othewise find position and insert
	{
		ListNode<Entry> *prev = findpos(p-1);
		newnode->setnext(prev->getnext());
		prev->setnext(newnode);
	}

	// update count;
	count++;

}

template <class Entry>
Entry Container<Entry> :: remove(Position p)
/*  delete and return entry at position p
    pre:  container has been created, and 0 <= p < n, where n is number
	of container entries
    post: entry at position p has been deleted and returned as x, all entries
	after p have decreased in position by 1
    error: if container is shorter than p, nothing done an waring produced.
 */
{
	ListNode<Entry> *current;

	if( !valid_position(p,count) || isfull() )
	{
		Warning("Container: Attempting to remove in illegal position; return ERROR");
		return ERROR;
	}
	
	else
	{
		if( p==0 )
		{
			current = head;
			head = current->getnext();	
		}

		else
		{
			ListNode<Entry> *prev = findpos(p-1);
			current = (prev->getnext());
			prev->setnext(current->getnext());
		}
	}

	Entry x = current->getdata();
	free(current);
	count--;
	return x;
	
}

template <class Entry>
void Container<Entry> :: replace(Entry x, Position p)
/*  replace entry at position p with x
    pre:  container has been created, and 0 <= p < n, where n is number
	of container entries
    post: entry at position p has been replaced with x, other entries unchanged
    error: if container is shorter than p, nothing done an waring produced.
 */
{
	if( !valid_position(p,count-1) || isempty())
	{	Warning("Container: Retrieve to illegal position; nothing done");
		return;
	}

	ListNode<Entry> *current = findpos(p);
	current->setdata(x);

}


/*******************************************************************/
/*                                                                 */
/*  Container private helper functions                                  */
/*                                                                 */
/*******************************************************************/

template <class Entry>
void Container<Entry> :: init_to_empty()
{	head = NULL;
	count = 0;
}

template <class Entry>
void Container<Entry> :: destroy_elements()
{
	ListNode<Entry> *current = head;
	ListNode<Entry> *prev = NULL;
	while(current)
	{	prev = current;
		current = prev->getnext();
		free(prev);
	}
}

template <class Entry>
ListNode<Entry> * Container<Entry> :: findpos(Position pos) const
/*  find the node at position pos
    pre: container has been created; pos is in bounds
    post: returns pointer to the node at pos
 */
{

	if(pos >= count)
	{	Warning("Container: Position out of range");
		return NULL;
	}

	ListNode<Entry> *current = head;
	for(int i = 0; i < pos; i++)
		current = current->getnext();

	return current;
}

template <class Entry>
bool Container<Entry> :: valid_position(Position p, int size) const
{	return ((p >= 0) && (p <= size));	}

template <class Entry>
bool Container<Entry> :: operator==(const Container &b) const {
	if(size() != b.size())
		return false;
	for(int i = 0; i < size(); i++){
		if(get(i) != b.get(i))
			return false;
	}
	return true;
}

template <class Entry>
bool Container<Entry> :: operator!=(const Container &b) const {
	return !operator==(b);
}

template <class Entry>
ContainerIterator<Entry> Container<Entry>::Start() const
{
	ContainerIterator<Entry> it(head);
	return it;
}

template <class Entry>
ContainerIterator<Entry> Container<Entry>::End() const
{
	ContainerIterator<Entry> it((ListNode<Entry>*)NULL);
	return it;
}

template <class Entry>
ContainerIterator<Entry> :: ContainerIterator(ListNode<Entry>* a)
{
	next = a;
}

template <class Entry>
Entry ContainerIterator<Entry> :: operator*() const
{
	if(next == 0)
	{
	  cerr << "Illegal dereference of iterator" << endl;
	  abort();
	}
	return next->getdata();
}

template <class Entry>
bool ContainerIterator<Entry> :: operator==(const ContainerIterator<Entry>& it) const
{ return next == it.next;}

template <class Entry>
bool ContainerIterator<Entry>::operator!=(const ContainerIterator<Entry>& it) const
{ return next != it.next;}

template <class Entry>
ContainerIterator<Entry> ContainerIterator<Entry>::operator++()
{
	if(next != 0) next = next->getnext();
	return *this;
}
template <class Entry>
ContainerIterator<Entry> ContainerIterator<Entry>::operator++(int)
{
	ContainerIterator it(*this);
	if(next != 0) next = next->getnext();
	return it;
}


template <class Entry>
ostream & operator<<(ostream& s, const Container<Entry> &a)
{
	for(int i = 0; i < a.size(); i++)
	{
		cout << a.get(i) << endl;	
	}	
	return s;
}
