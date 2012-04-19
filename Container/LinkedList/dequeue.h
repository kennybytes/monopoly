/* File: dequeue.h
 *
 *
 * A Dequeue is a Double Ended Queue
 */

#include "container.h"
#include "entry.h"
#include "common.h"
#include "listnode.h"

class Dequeue
{
 public:

	Dequeue(); 			//empty it
	Dequeue(Dequeue &other);	// Copy constructor
	~Dequeue();			//Destruct

	int size();			//determine the size of it	
	void operator = (const Dequeue& other);	// Assignment operator

	//Operations
	void push_back(Entry x);	// add x to the back of the dequeue
        void push_front(Entry x);	// add x to the front of the dequeue
        Entry pop_front(void); 		// remove and return the front of the dequeue
        Entry pop_back(void);		// remove and return the back of the dequeue
        Entry front(void);	 	//return the front of the dequeue
        Entry back(void);		// return the back of the dequeue 
	void display();
	void clear(void);

	bool operator==(const Dequeue& other) const;
	bool operator!=(const Dequeue& other) const;

private:

	Container DQ;		//DQ elements

};
