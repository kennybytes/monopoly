
/*  File: listnode.h
 *  Date: 26 Sep 05
 *  Rev:
 *
 *  Listnode class declaration
 */

#ifndef LISTNODE_H
#define LISTNODE_H

#include <stdlib.h>
#include "entry.h"

/*******************************************************************/
/*                                                                 */
/*  List Declaration using linked-list implementation              */
/*                                                                 */
/*******************************************************************/

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
};

#include "listnode_inl.h"
#endif
