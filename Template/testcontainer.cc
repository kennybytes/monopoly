
/*  File: testcontainer.c
 *  Date: 6 Sep 05
 *  Rev: 25 Sep 07
 *
 *  simple tests for container data type
 */

#include <iostream>
using namespace std;

#include "container.h"

void printcontainer(Entry);

int main()
{
   Container<int> l, m;
   Entry a;
   int x;

	if(l.isempty()) printf("Container is empty\n");
	else printf("Container not empty\n");

	l.insert(3);
	l.insert(6);
	l.insert(9);

	if(l.isempty()) printf("Container is empty\n");
	else printf("Container not empty\n");

	x = l.size();
	printf("size of Container is %d\n", x);

	cout << l;
	
	l.insert(5, 1);

	l.traverse(printcontainer);

	a = l.remove(2);
	printf("deleted entry %d\n", a);

	cout << l;

	a = l.get(3);
	printf("retrieved entry %d\n", a);
	a = l.get(2);
	printf("retrieved entry %d\n", a);

	l.replace(6, 1);

	cout << l;

	l.clear();

	x = l.size();
	printf("size of container is %d\n", x);

	if(l.isempty()) printf("Container is empty\n");
	else printf("Container not empty\n");

	l.insert(20);
	l.insert(30);
	cout << l;
	
	l.insert(25, 1);
	cout << l;


	l.insert(15, 0);
	cout << l;

	a = l.remove(1);
	printf("deleted entry %d\n", a);
	cout << l;
	
	a = l.remove(0);
	printf("deleted entry %d\n", a);
	cout << l;
	
	a = l.remove(1);
	printf("deleted entry %d\n", a);
	cout << l;

	l.clear();
	m.clear();

	printf("Testing Operators\n");
	l.insert(1);
	l.insert(2);
	m.insert(2);
	m.insert(1);

	printf("\nLists are not Equal\n");
	printf("Equal(): %s\n", (l == m) ? "True" : "False");
	printf("NotEqual(): %s\n", (l != m) ? "True" : "False");

	l.clear();
	m.clear();

	l.insert(1);
	l.insert(2);
	m.insert(1);
	m.insert(2);
        printf("\nLists are Equal\n");
        printf("Equal(): %s\n", (l == m) ? "True" : "False");
        printf("NotEqual(): %s\n", (l != m) ? "True" : "False");

	putchar('\n');
}

void printcontainer(Entry x)
{   printf("%d\n", x);   }

