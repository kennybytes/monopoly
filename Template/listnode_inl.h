
/*
 * File: listnode_inl.h
 *
 * File for inline function for listnode
<<<<<<< HEAD
*/

template <class Entry>
inline ListNode<Entry> :: ListNode(Entry x)
=======
 *
 */

inline ListNode :: ListNode(Entry x)
>>>>>>> 16cd0a32c654db6460fcf9471e198c4ce78c8488
{
	setdata(x);
	setnext(NULL);
}

<<<<<<< HEAD
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
=======
inline Entry ListNode :: getdata() const
{	return entry;	}

inline ListNode * ListNode :: getnext() const
{	return next;	}

inline void ListNode :: setdata(Entry x)
{	entry = x;	}

inline void ListNode :: setnext(ListNode *n)
{	next = n;	}
>>>>>>> 16cd0a32c654db6460fcf9471e198c4ce78c8488
