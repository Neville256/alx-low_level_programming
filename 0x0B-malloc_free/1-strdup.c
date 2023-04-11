#include "main.h"
/**
  *_strlen - the counts of an array
  *@s: elements of the array
  *Return: 1
  */
int _strlen(char *s)
{
unsigned int j;

j = 0;
while (s[j] != '\0') /*count character of string*/
{
j++;
}
return (j);
}
/**
  *_strcpy - arrays for the copies
  *@src: elements of the array
  *@dest: array of the dest
  *Return: dest
  */
char *_strcpy(char *dest, char *src)
{
int j = 0;
while (src[j] != '\0')

{
	dest[j] = src[j];
	j++;
}
dest[j] = '\0';
return (dest);
}

/**
  *_strdup - a string for prints of the array
  *@str: elements for the array
  *Return: pointer
  */

char *_strdup(char *str)
{
	char *dst;
	unsigned int size;
if (str == 0)
{
	return (NULL);
}

size = _strlen(str) + 1;

dst = (char *) malloc(size *sizeof(char));

if (dst == 0)
{
	return (NULL);
}
_strcpy(dst, str);
return (dst);
}
