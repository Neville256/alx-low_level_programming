#include "main.h"

/**
 * set_bit - index to 1 set bit
 * @n: change number to pointer
 * @index: set to 1 bit index
 *
 * Return: success 1, failure -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
		return (1);
}
