/*File: dequeue.cc
 *
 * A Dequeue is a Double Ended Queue
 */

#include "dequeue.h"
#include "container.h"
#include "listnode.h"
#include <iostream>

using namespace std;
/********************************************************/
/*							*/
/*	Constructor & Destructor			*/
/*							*/
/********************************************************/

Dequeue :: Dequeue()
{//initilize it 	
	DQ.clear();

}

Dequeue :: Dequeue(Dequeue &other)
{
	*this = other;
}

Dequeue :: ~Dequeue()
{//destroy it
	DQ.clear();
}


/********************************************************/
/*							*/
/*	Operation					*/
/*							*/
/********************************************************/

void Dequeue :: push_back(Entry x)
{ // add x to the back of the dequeue
	DQ.insert(x);
}
void Dequeue :: push_front(Entry x)
{ // add x to the front of the dequeue

	DQ.insert(x,0);
}

Entry Dequeue :: pop_front(void)
{// remove and return the front of the dequeue

	if(DQ.isempty())
	{
	cout << "WARNING THERE IS NOTHING IN THE FRONT!" << endl;
	}
	else
	return DQ.remove(0);
}

Entry Dequeue :: pop_back(void)
{//remove and return the back of the dequeue

	if(DQ.isempty())
	{
	cout << "WARNING THERE IS NOTHING IN THE BACK!" << endl;
	}
	else
	return DQ.remove(DQ.size()-1);
}

Entry Dequeue :: front(void)
{// return the front of the dequeue
	if(DQ.isempty())
	{return DQ.isempty();}
	else
	return DQ.get(0);
}

Entry Dequeue :: back(void)
{// return the back of the dequeue
	if(DQ.isempty())
	{return DQ.isempty();}
	else
	return DQ.get(DQ.size()-1);
}

void Dequeue :: display()
{
	for(int i=0; i< DQ.size(); i++)
		cout << DQ.get(i) << endl;
}

void Dequeue :: clear(void)
{
	DQ.clear();
}

void Dequeue :: operator=(const Dequeue& other)
{
	clear();

	for(ContainerIterator j(other.DQ.Start()); j != other.DQ.End(); j++)
		DQ.insert(*j);
}

bool Dequeue :: operator==(const Dequeue& other) const
{
	return DQ == other.DQ;
}

bool Dequeue :: operator!=(const Dequeue& other) const
{
	return DQ != other.DQ;
}



/********************************************************/
/*							*/
/*	Pravite						*/
/*							*/
/********************************************************/


