/* joe.frag.c */

#include "aha.h"

// Sum all bits in x
int userfun(int x) 
{
	int sum = 0;
	unsigned int bitmask = x;
	while (bitmask != 0) {
		sum += bitmask & 0x1;
		bitmask = bitmask >> 1;
	}
	return sum;
}
