#include "main.h"
/**
  * create_array - string that prints for an array
  *@size: the element number of the array
  *@c: char
  *Return: pointer
  */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;
if (size == 0)
{
	return (NULL);
}

/* define values for malloc*/
buffer = (char *) malloc(size * sizeof(c));

if (buffer == 0)
{
	return (NULL);
}
else
{
position = 0;
while (position < size) /*while for array*/
{
*(buffer + position) = c;
position++;
}
return (buffer);
}
}
