#ifndef DOG_H
#define DOG_H

/**
 * struct dog - infor of the dog
 * @name: first person
 * @age: Second person
 * @owner: Third person
 *
 * Description: description longer
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_g - struct dog typedef
 */
typedef struct dog dog_g;

void init_dog(struct dog *c, char *name, float age, char *owner);
void print_dog(struct dog *c);
dog_g *new_dog(char *name, float age, char *owner);
void free_dog(dog_g *c);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif

