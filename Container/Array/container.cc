
/*  File: container.c
 *  Date: 12 Sep 06
 *  Rev:  25 Sep 07
 *
 *  Container class definitions - version 2
 */

#include <stdlib.h>
#include "common.h"
#include "entry.h"
#include "container.h"
#include <iostream>
using namespace std;

/*******************************************************************/
/*                                                                 */
/*  Simple Container Operations                                    */
/*                                                                 */
/*******************************************************************/


void Container::traverse(void(*Visit)(Entry))
/*  applies the operation Visit to each element of the Container
    pre: Container has been created; Visit is a function that processes
	elements of type Entry. Visit does not modify the Container.
    post: the action Visit has been applied to each element in the Container
	begining at the first
 */
{
for(int i = 0; i < count; i++)
    Visit(elements[i]);
}

/*******************************************************************/
/*                                                                 */
/*  More Complex Container Operations                                   */
/*                                                                 */
/*******************************************************************/

void Container::insert(Entry x, Position p)
/*  insert entry x into Container at position p (-1 is end of container)
    pre:  Container has been created, x is a valid entry, and 0 <= p <= n,
	where n is number of Container entries
    post: x is inserted in the Container at position p, all entries at p and after
	have increased in position by 1.
    error: if Container is full, nothing done and waring produced.
 */
{
int i = count;

if(isfull()) {
    Warning("Container: Container is full; did nothing");
    return;
    }

if( p == -1 ) {
    elements[i] = x;
    }

else if(Valid(p, count)) {
    while(i != p) {
	if((i+1) != (MAXSIZE-1))
		elements[i+1] = elements[i];
	i--;
	}
	elements[i+1] = elements[i];
	elements[i] = x;
    }

count++;
}

Entry Container::remove(Position p)
/*  delete and return entry at position p
    pre:  Container has been created, and 0 <= p < n, where n is number
	of Container entries
    post: entry at position p has been deleted and returned as x, all entries
	after p have decreased in position by 1
    error: if Container is shorter than p, nothing done an waring produced.
*/
{
if(Valid(p, count-1)) {
    Entry x = elements[p];
    while(p != count) {
	elements[p] = elements[p+1];
	p++;
    }
    count--;
    return x;
    }

else {
    Warning("Container: Shorter than position p; returning -1");
    return -1;
    }
}

bool Container::Equal(const Container &b) const
{
	if(size() != b.size())
		return false;
	for(int i = 0; i <= (count-1); i++)
	{
		if(elements[i] != b.elements[i])
		return false;
	}
	return true;
}

bool Container::NotEqual(const Container &b) const
{
return !Equal(b);
}

ostream& operator<<(ostream& s, const Container& a)
{
	for(int i = 0; i < a.size(); i++)
	{
		cout << a.get(i) << endl;
	}
}

