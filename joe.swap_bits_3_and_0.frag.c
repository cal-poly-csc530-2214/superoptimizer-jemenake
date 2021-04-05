/* joe.frag.c */

#include "aha.h"

// swap bits 3 and 0
int userfun(int x) 
{
	return (x & 0xFFFFFFF6) | ((x & 0x8) >> 3) | ((x & 0x1) << 3);
}
