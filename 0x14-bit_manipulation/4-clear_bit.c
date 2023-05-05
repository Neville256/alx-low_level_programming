#include "main.h"

/**
 * clear_bit - bit to 0 given set value
 * @n: change number to pointer
 * @index: bit to cleat index
 *
 * Return: 1 success, -1 failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
