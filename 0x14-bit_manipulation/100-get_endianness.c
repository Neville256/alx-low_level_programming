#include "main.h"
/**
 * get_endianness - machine check little or big endian
 * Return: 0 big, 1 little
 */
int get_endianness(void)
{
	unsigned int k = 1;
	char *c = (char *) &k;

	return (*c);
}
