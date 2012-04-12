
/*  File: test.cc
 *  Date: 6 Sep 05
 *  Rev: 25 Sep 07
 *
 *  simple tests for container data type
 */

#include "container.h"
#include "entry.h"

void printcontainer(Entry);

main()
{
   Container l;
   Entry a;
   int x;

if(l.isempty()) printf("Container is empty\n");
else printf("Container not empty\n");

l.insert(5);
l.insert(6);
l.insert(9);

if(l.isempty()) printf("Container is empty\n");
else printf("Container not empty\n");

x = l.size();
printf("size of Container is %d\n", x);

l.traverse(printcontainer);

//	Container b(&l);
	



}

void printcontainer(Entry x)
{   printf("%d\n", x);   }

