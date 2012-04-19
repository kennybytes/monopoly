/*  File: queue.cc  */

#include "queue.h"
#include "common.h"
#include "entry.h"
#include "container.h"
#include <iostream>
using namespace std;

void Queue::Init(const Queue& other)
{
	c.clear();
	for(int i = 0; i < other.Length(); i++)
	c.insert(other.c.get(i));
}

void Queue::CleanUp()
{
	c.clear();
}

Queue::Queue()
{
	CleanUp();
}

Queue::Queue(const Queue& other)
{
	Init(other);
}

Queue::~Queue()
{
	CleanUp();
}

Queue& Queue::operator=(const Queue& other)
{
        Init(other);
        return *this;
}

void Queue::Push(Entry x)
{
	c.insert(x);	
}
Entry Queue::Pop(void)
{
	Entry a;
	a = c.get(0);
	c.remove(0);
	return a;
}
Entry Queue::Front(void)
{
	return c.get(0);
}

int Queue::Length() const
{
	return c.size();
}

bool Queue::IsEmpty() const
{
	return Length() == 0;
}

ostream& operator<<(ostream& s, const Queue& a)
{
        Queue b(a);
        for(int i = a.Length(); i > 0; i--)
        {
                cout << b.Pop() <<endl;
        }
        return s;
}


