/*  File: container.h
 *  Date: 12 Sep 06
 *  Rev: 25 Sep 07
 *
 *  Container class declarations and prototypes - version 2
 */

#ifndef CONTAINER_INL_H
#define CONTAINER_INL_H


/*
*   ---------------------------------------------------------
*   Function: Container()
*   Purpose: Constructor for Container class / initialize a Container object
*   Parameters: None
*   pre:  none
*   post: Container has been created and initialized to empty
*   ---------------------------------------------------------
*/
inline Container::Container()
{
        clear();
}


/*
*   ---------------------------------------------------------
*   Function: clear() 
*   Purpose: clear a Container object by emptying all contents
*   Parameters: None
*   pre:  Container has been created
*   post: all entries have been removed; Container is empty  
*   ---------------------------------------------------------
*/
inline void Container::clear()
{
        count = 0;
}
  

/*
*   ---------------------------------------------------------
*   Function: isempty()
*   Purpose: Tests if a Container is empty
*   Parameters: None
*   pre:  Container has been created
*   post: returns true if Container is empty; false otherwise
*   ---------------------------------------------------------
*/
inline bool Container::isempty() const
{
        return (size() == 0);
}
  

/*
*   ---------------------------------------------------------
*   Function: isfull()
*   Purpose: Tests if a Container is full
*   Parameters: None
*   pre:  Container has been created
*   post: returns true if Container is full; false otherwise 
*   ---------------------------------------------------------
*/
inline bool Container::isfull() const
{
        return (size() >= MAXSIZE);
}


  
/*
*   ---------------------------------------------------------
*   Function: size()
*   Purpose: Determines the size of a container
*   Parameters: None
*   pre:  Container has been created
*   post: returns the number of entries in the Container
*   ---------------------------------------------------------
*/
inline int Container::size() const
{
        return count;
}
  
/*
*   ---------------------------------------------------------
*   Function: traverse(void(*Visit)(Entry))
*   Purpose: Applies the operation Visit to each element of the Container
*   Parameters:  "void(*Visit)(Entry) - A function that will be applied to
*                       all elements in container.
*   pre:  Container has been created; Visit is a function that processes
*                       elements of type Entry. Visit does not modify the Container.
*   post: The action Visit has been applied to each element in the Container
*                       begining at the first
*   ---------------------------------------------------------
*/
inline void Container::traverse(void(*Visit)(Entry))
{ 
        for(int i = 0; i < size(); i++)
                Visit(get(i));
}


/*
*   ---------------------------------------------------------
*   Function: validpos(Position p)
*   Purpose: Determine if a position is within the bounds of the current list
*   Parameters: "Position p" - refers to the index in the container where the entry will
*                   be tested to be valid
*   pre:  Container has been created, and 0 <= p < n, where n is number
*               of current Container entries
*   post: if the position is valid then return true, return false otherwise.  
*   ---------------------------------------------------------
*/
inline bool Container::validpos(Position p, int type) const
{
	return ((p < (size()+type)) && p >= -1);
}
        

/*
*   ---------------------------------------------------------
*   Function: operator!=(const Container &b) const
*   Purpose: To make a not equal comparison operator for containers
*   Parameters: "Container &b" - refers to the address of another container that will
*                                 be compared to the current container to check if all
*                                 elements are not equal.
*   pre:  Container has been created, and &b points to a valid Container object.
*   post: if both Containers are not equal then returns true, return false otherwise.
*   ---------------------------------------------------------
*/
inline bool Container::operator!=(const Container &b) const
{
        return !(operator==(b));
}
         
#endif
