
/*
 * File: listnode_inl.h
 *
 * File for inline function for listnode
 *
*/

template <class Entry>
inline ListNode<Entry> :: ListNode(Entry x)
{
	setdata(x);
	setnext(NULL);
}

template <class Entry>
inline Entry ListNode<Entry> :: getdata() const
{
	return entry;
}

template <class Entry>
inline ListNode<Entry> * ListNode<Entry> :: getnext() const
{	
	return next;
}

template <class Entry>
inline void ListNode<Entry> :: setdata(Entry x)
{
	entry = x;
}

template <class Entry>
inline void ListNode<Entry> :: setnext(ListNode *n)
{
	next = n;
}
