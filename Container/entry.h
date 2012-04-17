
/*  File: entry.h
 *  Date: 16 Oct 06
 *  Rev:
 *
 *  definition of application specific Entry
 *  in this case for a sequence of integers
 */

#ifndef ENTRY_H
#define ENTRY_H

#include <string>

typedef struct Entry
{
	string name;
	int price;
	int owner;
	int color;
	int rent;
	int house1;
	int house2;
	int house3;
	int house4;
	int hotel;
	bool mort;
}

#endif
