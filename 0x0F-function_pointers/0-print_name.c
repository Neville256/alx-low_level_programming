#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - pointer to function print name
 * @name: added string
 * @f: pointer to function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
