/* File: listnode_inl.h
 *
 * File for inline function for listnode
*/


inline ListNode :: ListNode(Entry x)
{
	setdata(x);
	setnext(NULL); 
}

inline Entry ListNode :: getdata() const
{
	return entry;
}

inline ListNode * ListNode :: getnext() const
{	
	return next;
}

inline void ListNode :: setdata(Entry x)
{
	entry = x;
}

inline void ListNode :: setnext(ListNode *n)
{
	next = n;
}
