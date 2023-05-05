#include "main.h"
/**
 * get_bit - value of the bit index in a decimal number
 * @n: search to number
 * @index: bit of index
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val_bit;

	if (index > 63)
		return (-1);
	val_bit = (n >> index) & 1;

	return (val_bit);
}
