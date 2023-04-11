#include "main.h"
/**
  * _strlen - arrays to count
  *@s: elements of an array
  *Return: j
  */
int _strlen(char *s)
{
	unsigned int j;

	j = 0;
	while (s[j] != '\0') /*string to be counted in a character*/
	{
	j++;
	}
	return (j);
}
/**
  *str_concat - a pointer back to an array
  *@s1: array one
  *@s2: array two
  *Return: Always an array dynamic
  */
char *str_concat(char *s1, char *s2)
{
	char *dst;
	unsigned int i, j, size;

	/*if the array is empty*/
	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 =  "";

	/*count size total*/
	size = (_strlen(s1) + _strlen(s2) + 1);

	/*malloc*/
	dst = (char *) malloc(size * sizeof(char));

	if (dst == 0)
	{
	return (NULL);
	}

	/*concatenate arrays*/
	for (i = 0; *(s1 + i) != '\0'; i++)
	*(dst + i) = *(s1 + i);

	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(dst + i) = *(s2 + j);
		i++;
	}
	return (dst);
}
