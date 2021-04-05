/* joe.frag.c */

#include "aha.h"

// swap bits 1 and 0
int userfun(int x) 
{
	return (x & 0xFFFFFFFC) | ((x & 0x2) >> 1) | ((x & 0x1) << 1);
}
