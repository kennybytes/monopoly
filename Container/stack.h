/* File: constack.h
 * Date: 13 Mar 12
 * 
 * Stack class declaration for a stack of containers.
 */

#include <iostream>
using namespace std;

#include "container.h"
#include "entry.h"
#include "common.h"

class Stack
{
 public:
	Stack();					//Construct empty stack
   	Stack(const Stack& other);		//Copy constructor
   	~Stack();					//Destruct stack
   
   	Stack& operator=(const Stack& other); 	//Assign stack
   
   	Entry Pop(void);
   	Entry Top(void);
   	void Push(Entry a);  
 
   	bool IsEmpty() const; 			//True when empty
   	int Length() const;				//return # of element 
   
   	friend ostream& operator<<(ostream& s, const Stack& a);
	friend istream& operator>>(istream& i, Stack& a);

 private:
   	Container c;				//Stack elements 
   	void Init(const Stack& other);
   	void CleanUp();
};

ostream& operator<<(ostream& s, const Stack& a);
istream& operator>>(istream& i, Stack& a);
