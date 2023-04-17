#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog -  struct dog to execute
 * @c: print struct dog
 */
void print_dog(struct dog *c)
{
	if (c == NULL)
	return;

	if (c->name == NULL)
	c->name = "(nil)";
	if (c->owner == NULL)
	c->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", c->name, c->age, c->owner);
}
