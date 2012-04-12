/* File: queue.h  */

#include <iostream>
#include "container.h"
#include "entry.h"
using namespace std;

class Queue {

	public:
	  Queue();			// Construct empty queue
	  Queue(const Queue& other);	// Copy constructor
	  ~Queue();			// Deconstructor

	  void Push(Entry x);		// Add to back of queue
	  Entry Pop(void);		// Remove and return front of queue
	  Entry Front(void);		// Return front of queue 

	  Queue& operator=(const Queue& other);

	  int Length() const;		// Returns size of queue
	  bool IsEmpty() const;		// Check if empty

	  friend ostream& operator<<(ostream& output, const Queue& q);

	private:
	   Container c; 
	   
	   void Init(const Queue& other);
	   void CleanUp();
};

ostream& operator<<(ostream& output, const Queue& q);
