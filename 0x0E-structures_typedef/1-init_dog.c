#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - type struct dog initializes a variable
 * @t: initialize struct dog to pointer
 * @name: initialize name
 * @age: initialize age
 * @owner: initialize owner
 */
void init_dog(struct dog *t, char *name, float age, char *owner)
{
	if (t == NULL)
		t = malloc(sizeof(struct dog));
	t->name = name;
	t->age = age;
	t->owner = owner;
}
