#include "main.h"

/**
 * print_triangle - Prints a triangle of squares according parameter
 *@size: The size of the sqaures triangle
 * Return: empty.
 */
void print_triangle(int size)
{
	int a, b, z;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (a = 0; a < size; a++)
	{
	for (b = size - a; b > 1; b--)
	{
	_putchar(32);
	}
	for (z = 0; z <= a; z++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
