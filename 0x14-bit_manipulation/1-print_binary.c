#include "main.h"

/**
 * print_binary - executes decimal number of a binary
 * @n: executes binary number
 */
void print_binary(unsigned long int n)
{
	int k, count = 0;
	unsigned long int latest;

	for (k = 63; k >= 0; k--)
	{
		latest = n >> k;
		if (latest & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar ('0');
	}
	if (!count)
		_putchar('0');
}
