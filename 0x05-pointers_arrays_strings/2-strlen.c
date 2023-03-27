#include <stdio.h>
#include "main.h"
/**
  *_strlen - Returns the lenght of a string.
  * @str: The string to get the lenght of
  * Return: The lenght of @str.
  */
int _strlen(char *str)
{
	int lenght = 0;

	while (*str++)
	lenght++;
	return (lenght);
}
