
/*  File: listnode.h
 *  Date: 26 Sep 05
 *  Rev:
 *
 *  Listnode class declaration
 */

#ifndef LISTNODE_H
#define LISTNODE_H

<<<<<<< HEAD
#include <stdlib.h>
//#include "entry.h"
=======
#include "entry.h"
#include <stdlib.h>
>>>>>>> 16cd0a32c654db6460fcf9471e198c4ce78c8488

/*******************************************************************/
/*                                                                 */
/*  List Declaration using linked-list implementation              */
/*                                                                 */
/*******************************************************************/
template <class Entry>
class ListNode
{
public:
	// constructor
	ListNode(Entry x);

	// accessors:
	Entry getdata() const;
	ListNode *getnext() const;

	// mutators
	void setdata(Entry x);
	void setnext(ListNode *n);


private:
	Entry entry;
	ListNode *next;
	int n;
};

#include "listnode_inl.h"

#endif
