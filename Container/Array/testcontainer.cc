
/*  File: testcontainer.c
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
   Container l, b;
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

	l.traverse(printcontainer);

	l.insert(5, 1);

	l.traverse(printcontainer);

	a = l.remove(2);
	printf("deleted entry %d\n", a);

	l.traverse(printcontainer);

	a = l.get(3);
	printf("retrieved entry %d\n", a);
	a = l.get(2);
	printf("retrieved entry %d\n", a);

	l.replace(6, 1);

	l.traverse(printcontainer);

	l.clear();

	x = l.size();
	printf("size of container is %d\n", x);

	if(l.isempty()) printf("Container is empty\n");
	else printf("Container not empty\n");

	l.insert(20);
	l.insert(30);
	l.traverse(printcontainer);

	l.insert(25, 1);
	l.traverse(printcontainer);

	l.insert(15, 0);
	l.traverse(printcontainer);

	a = l.remove(1);
	printf("deleted entry %d\n", a);
	l.traverse(printcontainer);

	a = l.remove(0);
	printf("deleted entry %d\n", a);
	l.traverse(printcontainer);

	a = l.remove(1);
	printf("deleted entry %d\n", a);
	l.traverse(printcontainer);

        printf("Equality tests.\n");

        l.clear();
        l.traverse(printcontainer);
        b.clear();
        b.traverse(printcontainer);

        a = (l == b);
        printf("Equal for two containers returns %d.\n", a);
        a = (l != b);
        printf("NotEqual for two containers returns %d.\n", a);

        l.insert(5);
        b.insert(5);
        printf("Container 1.\n");
        l.traverse(printcontainer);
        printf("Container 2.\n");
        b.traverse(printcontainer);
        a = (l == b);
        printf("Equal for two empty containers returns %d.\n", a);
        a = (l != b);
        printf("NotEqual for two empty containers returns %d.\n", a);

        l.insert(2);
        b.insert(5);
        printf("Container 1.\n");
        l.traverse(printcontainer);
        printf("Container 2.\n");
        b.traverse(printcontainer);
        a = (l == b);
        printf("Equal for two empty containers returns %d.\n", a);
        a = (l != b);
        printf("NotEqual for two empty containers returns %d.\n", a);

        printf("Testing shallow copy.\n");
        l.traverse(printcontainer);
        Container c(l);
        c.traverse(printcontainer);
	printf("Copied one container to another, then inserted 9 to the first.\n");
        l.insert(9);
        l.traverse(printcontainer);
        c.traverse(printcontainer);

}

void printcontainer(Entry x)
{   printf("%d\n", x);   }

