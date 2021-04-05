/* joe.frag.c */

#include "aha.h"

// add bits 1 and 0
int userfun(int x) 
{
	return (x & 0x1) + ((x & 0x2) >> 1);
}
