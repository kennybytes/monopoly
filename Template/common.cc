
/* File: commmon.cc
 * Date: 5 Sep 05
 * Rev:  18 Sep 07
 *
 *  contains common utility functions
 */

#include <stdio.h>
#include "common.h"


void Error(const char *s)
/* Reports program error
   Pre:  s pionts to message to be printed
   Post: message printed and program terminated.
*/
{
	fprintf(stderr, "Error: %s\n", s);
	exit(1);
}

void Warning(const char *s)
/* Reports unusual program condition
   Pre:  s pionts to message to be printed
   Post: message printed and program resumed.
*/
{
	fprintf(stderr, "Warning: %s\n", s);
}
