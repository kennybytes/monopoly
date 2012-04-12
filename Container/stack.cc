/* File: constack.cc
 * Date: 13 Mar 12
 * 
 * Definition of Stack constructors, destructors, and assignment operator
 */

#include "stack.h"
#include "container.h"

void Stack::Init(const Stack& other)
{
	c.clear(); 
  	for(int i = 0; i < other.Length(); i++)
   	c.insert(other.c.get(i));
}

void Stack::CleanUp()
{
  	c.clear();
}
Stack::Stack()
{
	CleanUp();
}

Stack::Stack(const Stack &other)
{
	Init(other);
}

Stack::~Stack()
{
	CleanUp();
}

Stack& Stack::operator=(const Stack& other)
{
	Init(other);
	return *this;	
}

Entry Stack::Pop(void)
{
	Entry a;
	a = c.get(Length()-1);
	c.remove(Length()-1);	
	return a;	
}

Entry Stack::Top(void)
{
	return c.get(Length()-1);
}

void Stack::Push(Entry a)
{
	c.insert(a);
}

int Stack::Length() const
{
	return  c.size();
}

bool Stack::IsEmpty() const
{
	return Length() == 0;
}

ostream& operator<<(ostream& s, const Stack& a)
{
	Stack b(a);
	for(int i = a.Length(); i > 0; i--)
	{	
		cout << b.Pop() <<endl;
	}
	return s;
}

istream& operator>>(istream& i, Stack& a)
{
	Entry e;
	cin >> e;
	a.Push(e);
	return i;
}
