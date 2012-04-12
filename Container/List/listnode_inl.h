/* File: listnode_inl.h
 *
 */

#include <stdlib.h>
#include "common.h"
#include "entry.h"
#include "listnode.h"

// constructor
inline ListNode::ListNode(Entry x)
/* 
 *
 */
{
setdata(x);
}

// accessors
inline Entry ListNode::getdata() const
/*
 *
 */
{
return entry;
}

inline ListNode *ListNode::getnext() const
/*
 *
 */
{
return next;
}

// mutators
inline void ListNode::setdata(Entry x)
/*
 *
 */
{
entry = x;
}

inline void ListNode:: setnext(ListNode *n)
/*
 *
 */
{
next = n;
}
