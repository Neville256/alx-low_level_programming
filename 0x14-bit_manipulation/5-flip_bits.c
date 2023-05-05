#include "main.h"

/**
 * flip_bits - bits change to count of number
 * @n: begin digit
 * @m: ending digit
 *
 * Return: bit change number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, count = 0;
	unsigned long int latest;
	unsigned long int great = n ^ m;

	for (k = 63; k >= 0; k--)
	{
	latest = great >> k;
	if (latest & 1)
	count++;
	}
	return (count);
}
