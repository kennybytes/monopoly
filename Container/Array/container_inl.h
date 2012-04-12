
/*  File: containeri_inl.h
 *  Date: 12 Sep 06
 *  Rev:  25 Sep 07
 *
 *  Container class definitions - version 2
 */

/* use clean
 * then touch container_inl.h
 * make
 */

#include <stdlib.h>
#include "common.h"
#include "entry.h"
#include "container.h"


inline Container::Container()
/*  initialize a Container object
 *      pre:  none
 *          post: Container has been created and initialized to empty
 *           */
{
clear();
}

inline void Container::clear()
/*  clear a Container object
 *      pre:  Container has been created
 *          post: all entries have been removed; Container is empty
 *           */
{
count = 0;
}

inline Entry Container::get(Position P) const
/*  return entry at position p
    pre:  Container has been created, and 0 <= p < n, where n is number
    of Container entries
    post: entry at position p has been returned as x, Container unchanged
    error: if Container is shorter than p, nothing done an waring produced.
 *                      */
{
if( Valid(P, count-1) )
	return elements[P];
else
	{
	Warning("Not a valid position; returning a -1");
	return -1;
	}
}

inline void Container::replace(Entry x, Position p)
/*  replace entry at position p with x
    pre:  Container has been created, and 0 <= p < n, where n is number
    of Container entries
    post: entry at position p has been replaced with x, other entries unchanged
    error: if Container is shorter than p, nothing done an waring produced.
 *                      */
{
if( Valid(p, count-1) )
	elements[p] = x;
else
	{
	Warning("Not a valid position; nothing done");
	return;
	}
}

inline int Container::size() const
/*  determines the size of a Container
    pre:  Container has been created
    post: returns the number of entries in the Container
 *           */
{
return count;
}

inline bool Container::isempty() const
/*  tests if a Container is empty
    pre:  Container has been created
    post: returns true if Container is empty; false otherwise
 *           */
{
return(count == 0);
}

inline bool Container::isfull() const
/*  tests if a Container is full
    pre:  Container has been created
    post: returns true if Container is full; false otherwise
           */
{
return(count == MAXSIZE);
}

inline bool Container::Valid(Position p, int size) const
/* tests if given position is a valid position. 
 * if p is within 0 and size then the position is within
 * the bounds of the current list of data entries
 */
{
return ( p >= 0 && p <= size );
}

inline bool Container::operator==(const Container &b) const
{
	return Equal(b); 
}

inline bool Container::operator!=(const Container &b) const
{
	return NotEqual(b); 
}

